#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/RPG/GameCore/DistrictSoundUsage.h"
#include "unitysdk/RPG/GameCore/DistrictType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A9C466B0994F2417;
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAreaSoundConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelDistrictInfo; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define RPG_CLIENT_MAPDISTRICTDEF_GET_BGMEMOTION_OFFSET UNITYSDK_OFFSET(0x1B54C040)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_CANTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x1B54C1C0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_DISTRICTTYPE_OFFSET UNITYSDK_OFFSET(0x1B54C0C0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ISINROOMEMITTER_OFFSET UNITYSDK_OFFSET(0x1B54C280)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1B54C110)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B54BDD0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_NPCCROWDRADIUS_OFFSET UNITYSDK_OFFSET(0x1B54C2E0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ONENTERAREASOUND_OFFSET UNITYSDK_OFFSET(0x1B54BF80)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ONENTERAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x1B54BE40)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ONENTERRTPC_OFFSET UNITYSDK_OFFSET(0x1B54BEE0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ONEXITAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x1B54BE90)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ONEXITBGMEMOTION_OFFSET UNITYSDK_OFFSET(0x1B54C0A0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ONEXITRTPC_OFFSET UNITYSDK_OFFSET(0x1B54BF30)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_ROOMAUXBUS_OFFSET UNITYSDK_OFFSET(0x1B54C220)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_SOUNDUSAGE_OFFSET UNITYSDK_OFFSET(0x1B54C170)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_TRANSITIONSOUND_OFFSET UNITYSDK_OFFSET(0x1B54BFE0)
#define RPG_CLIENT_MAPDISTRICTDEF_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1B54BDF0)
#define RPG_CLIENT_MAPDISTRICTDEF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B54BDE0)
#define RPG_CLIENT_MAPDISTRICTDEF_SET_ONEXITBGMEMOTION_OFFSET UNITYSDK_OFFSET(0x1B54C0B0)
#define RPG_CLIENT_MAPDISTRICTDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54AB10)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDistrictDef_TypeDefinitionIndex = 62182;

	class MapDistrictDef : public ::RPG::Client::MapEntityDef
	{
	public:
		::RPG::GameCore::LevelDistrictInfo* DistrictInfo; // 0x58
		::System::String* _Name_k__BackingField; // 0x60
		::System::String* _OnExitBGMEmotion_k__BackingField; // 0x68

		::System::Void _ctor(::Class_1_A9C466B0994F2417* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Vector3 a7, ::RPG::GameCore::LevelDistrictInfo* a8)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::RPG::GameCore::LevelDistrictInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelTriggerInfo* get_Trigger()
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_TRIGGER_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* get_OnEnterAudioState()
		{
			return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ONENTERAUDIOSTATE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* get_OnExitAudioState()
		{
			return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ONEXITAUDIOSTATE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* get_OnEnterRTPC()
		{
			return ((::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ONENTERRTPC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* get_OnExitRTPC()
		{
			return ((::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ONEXITRTPC_OFFSET))(this);
		}

		::RPG::GameCore::DistrictAreaSoundConfig* get_OnEnterAreaSound()
		{
			return ((::RPG::GameCore::DistrictAreaSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ONENTERAREASOUND_OFFSET))(this);
		}

		::RPG::GameCore::DistrictAreaSoundConfig* get_TransitionSound()
		{
			return ((::RPG::GameCore::DistrictAreaSoundConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_TRANSITIONSOUND_OFFSET))(this);
		}

		::System::String* get_BGMEmotion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_BGMEMOTION_OFFSET))(this);
		}

		::System::String* get_OnExitBGMEmotion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ONEXITBGMEMOTION_OFFSET))(this);
		}

		::System::Void set_OnExitBGMEmotion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_SET_ONEXITBGMEMOTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::DistrictType get_DistrictType()
		{
			return ((::RPG::GameCore::DistrictType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_DISTRICTTYPE_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::RPG::GameCore::DistrictSoundUsage get_SoundUsage()
		{
			return ((::RPG::GameCore::DistrictSoundUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_SOUNDUSAGE_OFFSET))(this);
		}

		::System::Boolean get_CanTriggerByFakeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_CANTRIGGERBYFAKEAVATAR_OFFSET))(this);
		}

		::System::String* get_RoomAuxBus()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ROOMAUXBUS_OFFSET))(this);
		}

		::System::Boolean get_IsInRoomEmitter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_ISINROOMEMITTER_OFFSET))(this);
		}

		::System::Single get_NPCCrowdRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICTDEF_GET_NPCCROWDRADIUS_OFFSET))(this);
		}
	};
}
