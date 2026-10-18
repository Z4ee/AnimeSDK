#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FARMDATA_GETFARMLASTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BA40)
#define RPG_CLIENT_FARMDATA_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0xCE6BC10)
#define RPG_CLIENT_FARMDATA_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xCE6BC30)
#define RPG_CLIENT_FARMDATA_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0xCE6BD30)
#define RPG_CLIENT_FARMDATA_GET_FARMLASTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BDC0)
#define RPG_CLIENT_FARMDATA_GET_ISFARMELEMENT_OFFSET UNITYSDK_OFFSET(0xCE6BD50)
#define RPG_CLIENT_FARMDATA_GET_SELECTWORDLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BCF0)
#define RPG_CLIENT_FARMDATA_GET_STARTEDINADVENTURE_OFFSET UNITYSDK_OFFSET(0xCE6BDA0)
#define RPG_CLIENT_FARMDATA_GET_WAVE_OFFSET UNITYSDK_OFFSET(0xCE6BD10)
#define RPG_CLIENT_FARMDATA_ISFARMLASTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BBB0)
#define RPG_CLIENT_FARMDATA_REMOVEFARMSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BB50)
#define RPG_CLIENT_FARMDATA_SAVEFARMSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BAE0)
#define RPG_CLIENT_FARMDATA_SETADVENTUREDATA_OFFSET UNITYSDK_OFFSET(0xCE6B9A0)
#define RPG_CLIENT_FARMDATA_SETWAVE_OFFSET UNITYSDK_OFFSET(0xCE6B9F0)
#define RPG_CLIENT_FARMDATA_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0xCE6BC20)
#define RPG_CLIENT_FARMDATA_SET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0xCE6BD40)
#define RPG_CLIENT_FARMDATA_SET_FARMLASTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BDD0)
#define RPG_CLIENT_FARMDATA_SET_SELECTWORDLEVEL_OFFSET UNITYSDK_OFFSET(0xCE6BD00)
#define RPG_CLIENT_FARMDATA_SET_STARTEDINADVENTURE_OFFSET UNITYSDK_OFFSET(0xCE6BDB0)
#define RPG_CLIENT_FARMDATA_SET_WAVE_OFFSET UNITYSDK_OFFSET(0xCE6BD20)
#define RPG_CLIENT_FARMDATA_SYNCCOCOON_OFFSET UNITYSDK_OFFSET(0xCE6B8C0)
#define RPG_CLIENT_FARMDATA_SYNCELEMENT_OFFSET UNITYSDK_OFFSET(0xCE6B930)
#define RPG_CLIENT_FARMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCE6B810)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmData_TypeDefinitionIndex = 63983;

	class FarmData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FarmLastSelectLevel_k__BackingField; // 0x10
		::System::Boolean _StartedInAdventure_k__BackingField; // 0x18
		::System::UInt32 _CocoonID_k__BackingField; // 0x1C
		::System::UInt32 _SelectWordLevel_k__BackingField; // 0x20
		::System::UInt32 PropGroupID; // 0x24
		::System::UInt32 _FarmElementID_k__BackingField; // 0x28
		::System::UInt32 PropInstanceID; // 0x2C
		::System::UInt32 _Wave_k__BackingField; // 0x30

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

		::System::UInt32 GetFarmLastSelectLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GETFARMLASTSELECTLEVEL_OFFSET))(this, a1);
		}

		::System::Void SaveFarmSelectLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SAVEFARMSELECTLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveFarmSelectLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_REMOVEFARMSELECTLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean IsFarmLastSelectLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_ISFARMLASTSELECTLEVEL_OFFSET))(this, a1);
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

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_FarmLastSelectLevel()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_GET_FARMLASTSELECTLEVEL_OFFSET))(this);
		}

		::System::Void set_FarmLastSelectLevel(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMDATA_SET_FARMLASTSELECTLEVEL_OFFSET))(this, a1);
		}
	};
}
