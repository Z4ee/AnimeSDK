#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_232AD636EECBE509_OFFSET UNITYSDK_OFFSET(0x19C5B100)
#define RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_A1014443D5BDA5E7_OFFSET UNITYSDK_OFFSET(0x19C5B180)
#define RPG_GAMECORE_SETPHAINONACTIONCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5B150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPhainonActionCount_TypeDefinitionIndex = 21902;

	class SetPhainonActionCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_232AD636EECBE509(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonActionCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonActionCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_232AD636EECBE509_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1014443D5BDA5E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPhainonActionCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPhainonActionCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPHAINONACTIONCOUNT_METHOD_3_A1014443D5BDA5E7_OFFSET))(a1, a2);
		}
	};
}
