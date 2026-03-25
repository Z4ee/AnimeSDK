#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_3ECD3A4822037805_OFFSET UNITYSDK_OFFSET(0x16E9F0B0)
#define RPG_GAMECORE_ACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_EFDFFAF2B99A7295_OFFSET UNITYSDK_OFFSET(0x16E9F140)
#define RPG_GAMECORE_ACTIVATESERVERGAMEPLAYCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E9F110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivateServerGameplayCounter_TypeDefinitionIndex = 18860;

	class ActivateServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVATESERVERGAMEPLAYCOUNTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3ECD3A4822037805(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivateServerGameplayCounter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivateServerGameplayCounter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_3ECD3A4822037805_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFDFFAF2B99A7295(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivateServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivateServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVATESERVERGAMEPLAYCOUNTER_METHOD_3_EFDFFAF2B99A7295_OFFSET))(a1, a2);
		}
	};
}
