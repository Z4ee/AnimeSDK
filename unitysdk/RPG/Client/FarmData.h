#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FARMDATA_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x9668420)
#define RPG_CLIENT_FARMDATA_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x9668440)
#define RPG_CLIENT_FARMDATA_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x96685C0)
#define RPG_CLIENT_FARMDATA_GET_ISFARMELEMENT_OFFSET UNITYSDK_OFFSET(0x96685E0)
#define RPG_CLIENT_FARMDATA_GET_SELECTWORDLEVEL_OFFSET UNITYSDK_OFFSET(0x9668580)
#define RPG_CLIENT_FARMDATA_GET_STARTEDINADVENTURE_OFFSET UNITYSDK_OFFSET(0x96685F0)
#define RPG_CLIENT_FARMDATA_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x96685A0)
#define RPG_CLIENT_FARMDATA_SETADVENTUREDATA_OFFSET UNITYSDK_OFFSET(0x9668380)
#define RPG_CLIENT_FARMDATA_SETWAVE_OFFSET UNITYSDK_OFFSET(0x96683D0)
#define RPG_CLIENT_FARMDATA_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x9668430)
#define RPG_CLIENT_FARMDATA_SET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x96685D0)
#define RPG_CLIENT_FARMDATA_SET_SELECTWORDLEVEL_OFFSET UNITYSDK_OFFSET(0x9668590)
#define RPG_CLIENT_FARMDATA_SET_STARTEDINADVENTURE_OFFSET UNITYSDK_OFFSET(0x9668600)
#define RPG_CLIENT_FARMDATA_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x96685B0)
#define RPG_CLIENT_FARMDATA_SYNCCOCOON_OFFSET UNITYSDK_OFFSET(0x96682A0)
#define RPG_CLIENT_FARMDATA_SYNCELEMENT_OFFSET UNITYSDK_OFFSET(0x9668310)
#define RPG_CLIENT_FARMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9668290)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmData_TypeDefinitionIndex = 51900;

	class FarmData : public ::System::Object
	{
	public:
		::System::Boolean _StartedInAdventure_k__BackingField; // 0x10
		::System::UInt32 _Wave_k__BackingField; // 0x14
		::System::UInt32 _SelectWordLevel_k__BackingField; // 0x18
		::System::UInt32 _CocoonID_k__BackingField; // 0x1C
		::System::UInt32 PropInstanceID; // 0x20
		::System::UInt32 PropGroupID; // 0x24
		::System::UInt32 _FarmElementID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncCocoon(::System::UInt32 cocoonID, ::System::UInt32 level, ::System::UInt32 wave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SYNCCOCOON_OFFSET))(this, cocoonID, level, wave);
		}

		::System::Void SyncElement(::System::UInt32 elementID, ::System::UInt32 level, ::System::UInt32 wave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SYNCELEMENT_OFFSET))(this, elementID, level, wave);
		}

		::System::Void SetAdventureData(::System::Boolean inAdventure)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SETADVENTUREDATA_OFFSET))(this, inAdventure);
		}

		::System::Void SetWave(::System::UInt32 wave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SETWAVE_OFFSET))(this, wave);
		}

		::System::UInt32 get_CocoonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_COCOONID_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_ENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_SelectWordLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_SELECTWORDLEVEL_OFFSET))(this);
		}

		::System::Void set_SelectWordLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_SELECTWORDLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_WAVE_OFFSET))(this, value);
		}

		::System::UInt32 get_FarmElementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_FARMELEMENTID_OFFSET))(this);
		}

		::System::Void set_FarmElementID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_FARMELEMENTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFarmElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_ISFARMELEMENT_OFFSET))(this);
		}

		::System::Boolean get_StartedInAdventure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_STARTEDINADVENTURE_OFFSET))(this);
		}

		::System::Void set_StartedInAdventure(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_STARTEDINADVENTURE_OFFSET))(this, value);
		}
	};
}
