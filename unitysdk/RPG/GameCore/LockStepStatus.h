#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_C58273A23D38FB37_OFFSET UNITYSDK_OFFSET(0x18A79B20)
#define RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_D6F99E649899A33C_OFFSET UNITYSDK_OFFSET(0x18A79A90)
#define RPG_GAMECORE_LOCKSTEPSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A79AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockStepStatus_TypeDefinitionIndex = 22578;

	class LockStepStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EnumStatusType BuffType; // 0x18
		::Il2CppArray<::RPG::GameCore::EntityType>* SourceTypes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6F99E649899A33C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockStepStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockStepStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_D6F99E649899A33C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C58273A23D38FB37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockStepStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockStepStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_C58273A23D38FB37_OFFSET))(a1, a2);
		}
	};
}
