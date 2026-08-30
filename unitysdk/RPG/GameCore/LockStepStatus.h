#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_061A55C95EE417B9_OFFSET UNITYSDK_OFFSET(0x1DD79290)
#define RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_6E9819B3D2C962F6_OFFSET UNITYSDK_OFFSET(0x1DD79240)
#define RPG_GAMECORE_LOCKSTEPSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD79280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockStepStatus_TypeDefinitionIndex = 23330;

	class LockStepStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EnumStatusType BuffType; // 0x18
		::Il2CppArray<::RPG::GameCore::EntityType>* SourceTypes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6E9819B3D2C962F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockStepStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockStepStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_6E9819B3D2C962F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_061A55C95EE417B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockStepStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockStepStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKSTEPSTATUS_METHOD_3_061A55C95EE417B9_OFFSET))(a1, a2);
		}
	};
}
