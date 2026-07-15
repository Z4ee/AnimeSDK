#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TUTORIALSAVE_METHOD_3_8B934656C01E0507_OFFSET UNITYSDK_OFFSET(0x1B06FFE0)
#define RPG_GAMECORE_TUTORIALSAVE_METHOD_3_D4C0AF6063442714_OFFSET UNITYSDK_OFFSET(0x1B06FFA0)
#define RPG_GAMECORE_TUTORIALSAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialSave_TypeDefinitionIndex = 23499;

	class TutorialSave : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TutorialID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D4C0AF6063442714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSAVE_METHOD_3_D4C0AF6063442714_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B934656C01E0507(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialSave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialSave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALSAVE_METHOD_3_8B934656C01E0507_OFFSET))(a1, a2);
		}
	};
}
