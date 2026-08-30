#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FARMDATA_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1C168540)
#define RPG_CLIENT_FARMDATA_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1C168560)
#define RPG_CLIENT_FARMDATA_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x1C168660)
#define RPG_CLIENT_FARMDATA_GET_ISFARMELEMENT_OFFSET UNITYSDK_OFFSET(0x1C168680)
#define RPG_CLIENT_FARMDATA_GET_SELECTWORDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C168620)
#define RPG_CLIENT_FARMDATA_GET_STARTEDINADVENTURE_OFFSET UNITYSDK_OFFSET(0x1C1686D0)
#define RPG_CLIENT_FARMDATA_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x1C168640)
#define RPG_CLIENT_FARMDATA_SETADVENTUREDATA_OFFSET UNITYSDK_OFFSET(0x1C1684A0)
#define RPG_CLIENT_FARMDATA_SETWAVE_OFFSET UNITYSDK_OFFSET(0x1C1684F0)
#define RPG_CLIENT_FARMDATA_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1C168550)
#define RPG_CLIENT_FARMDATA_SET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x1C168670)
#define RPG_CLIENT_FARMDATA_SET_SELECTWORDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C168630)
#define RPG_CLIENT_FARMDATA_SET_STARTEDINADVENTURE_OFFSET UNITYSDK_OFFSET(0x1C1686E0)
#define RPG_CLIENT_FARMDATA_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x1C168650)
#define RPG_CLIENT_FARMDATA_SYNCCOCOON_OFFSET UNITYSDK_OFFSET(0x1C1683C0)
#define RPG_CLIENT_FARMDATA_SYNCELEMENT_OFFSET UNITYSDK_OFFSET(0x1C168430)
#define RPG_CLIENT_FARMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1683B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmData_TypeDefinitionIndex = 64045;

	class FarmData : public ::System::Object
	{
	public:
		::System::UInt32 _FarmElementID_k__BackingField; // 0x10
		::System::UInt32 PropGroupID; // 0x14
		::System::UInt32 PropInstanceID; // 0x18
		::System::UInt32 _Wave_k__BackingField; // 0x1C
		::System::Boolean _StartedInAdventure_k__BackingField; // 0x20
		::System::UInt32 _SelectWordLevel_k__BackingField; // 0x24
		::System::UInt32 _CocoonID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncCocoon(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SYNCCOCOON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncElement(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SYNCELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAdventureData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SETADVENTUREDATA_OFFSET))(this, a1);
		}

		::System::Void SetWave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SETWAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CocoonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_COCOONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_ENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_SelectWordLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_SELECTWORDLEVEL_OFFSET))(this);
		}

		::System::Void set_SelectWordLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_SELECTWORDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_WAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmElementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_FARMELEMENTID_OFFSET))(this);
		}

		::System::Void set_FarmElementID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_FARMELEMENTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFarmElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_ISFARMELEMENT_OFFSET))(this);
		}

		::System::Boolean get_StartedInAdventure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_STARTEDINADVENTURE_OFFSET))(this);
		}

		::System::Void set_StartedInAdventure(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_STARTEDINADVENTURE_OFFSET))(this, a1);
		}
	};
}
