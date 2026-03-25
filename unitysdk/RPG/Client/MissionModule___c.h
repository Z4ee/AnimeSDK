#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_MISSIONMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BEB480)
#define RPG_CLIENT_MISSIONMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BEB4B0)
#define RPG_CLIENT_MISSIONMODULE___C___INITFUNCENTRYMISSIONANDSUBMISSION_B__122_0_OFFSET UNITYSDK_OFFSET(0x9BEB530)
#define RPG_CLIENT_MISSIONMODULE___C___INITUNLOCKDATAMAINMISSIONANDSUBMISSION_B__119_0_OFFSET UNITYSDK_OFFSET(0x9BEB4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule___c_TypeDefinitionIndex = 53767;

	class MissionModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MissionModule___c** StaticGet___9()
		{
			return (::RPG::Client::MissionModule___c**)Il2CppClass::FromTypeDefinitionIndex(MissionModule___c_TypeDefinitionIndex)->GetStaticField(0x31A40);
		}
		static ::System::Action** StaticGet___9__122_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MissionModule___c_TypeDefinitionIndex)->GetStaticField(0x31A48);
		}
		static ::System::Action** StaticGet___9__119_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MissionModule___c_TypeDefinitionIndex)->GetStaticField(0x31A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __InitUnlockDataMainMissionAndSubMission_b__119_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C___INITUNLOCKDATAMAINMISSIONANDSUBMISSION_B__119_0_OFFSET))(this);
		}

		::System::Void __InitFuncEntryMissionAndSubMission_b__122_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C___INITFUNCENTRYMISSIONANDSUBMISSION_B__122_0_OFFSET))(this);
		}
	};
}
