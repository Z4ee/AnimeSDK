#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/MapRotationEnergyState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_METHOD_4_3E231A35067AC345_OFFSET UNITYSDK_OFFSET(0x19E59EF0)
#define RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_METHOD_4_7C484134EA347626_OFFSET UNITYSDK_OFFSET(0x19E59E10)
#define RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E59E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMapRotationEnergyStateChange_TypeDefinitionIndex = 19776;

	class WaitMapRotationEnergyStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationEnergyState>* FromStates; // 0x20
		::Il2CppArray<::RPG::GameCore::MapRotationEnergyState>* ToStates; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7C484134EA347626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_METHOD_4_7C484134EA347626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E231A35067AC345(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMapRotationEnergyStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMapRotationEnergyStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMAPROTATIONENERGYSTATECHANGE_METHOD_4_3E231A35067AC345_OFFSET))(a1, a2);
		}
	};
}
