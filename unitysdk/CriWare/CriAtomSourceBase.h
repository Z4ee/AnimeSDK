#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/CriWare/CriAtomSourceBase_Status.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dSource; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomExOutputAnalyzer; }
namespace CriWare { class CriAtomExPlayer; }
namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomRegion; }
namespace System { class String; }

#define CRIWARE_CRIATOMSOURCEBASE_ATTACHTOANALYZER_OFFSET UNITYSDK_OFFSET(0x1F905000)
#define CRIWARE_CRIATOMSOURCEBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F903680)
#define CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F904400)
#define CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9043F0)
#define CRIWARE_CRIATOMSOURCEBASE_DETACHFROMANALYZER_OFFSET UNITYSDK_OFFSET(0x1F905030)
#define CRIWARE_CRIATOMSOURCEBASE_GET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1F903500)
#define CRIWARE_CRIATOMSOURCEBASE_GET_ATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1F903470)
#define CRIWARE_CRIATOMSOURCEBASE_GET_FREEZEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F901FD0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_LISTENERONSTART_OFFSET UNITYSDK_OFFSET(0x1F902900)
#define CRIWARE_CRIATOMSOURCEBASE_GET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1F902660)
#define CRIWARE_CRIATOMSOURCEBASE_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1F902930)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DANGLE_OFFSET UNITYSDK_OFFSET(0x1F902C80)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F902E80)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PITCH_OFFSET UNITYSDK_OFFSET(0x1F902B70)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1F901E40)
#define CRIWARE_CRIATOMSOURCEBASE_GET_PLAYONSTART_OFFSET UNITYSDK_OFFSET(0x1F901E70)
#define CRIWARE_CRIATOMSOURCEBASE_GET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1F9020E0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1F9020F0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_REGIONONSTART_OFFSET UNITYSDK_OFFSET(0x1F9028E0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1F901E60)
#define CRIWARE_CRIATOMSOURCEBASE_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1F903080)
#define CRIWARE_CRIATOMSOURCEBASE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1F903270)
#define CRIWARE_CRIATOMSOURCEBASE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1F903180)
#define CRIWARE_CRIATOMSOURCEBASE_GET_USE3DPOSITIONING_OFFSET UNITYSDK_OFFSET(0x1F901FC0)
#define CRIWARE_CRIATOMSOURCEBASE_GET_USE3DRANDOMIZATION_OFFSET UNITYSDK_OFFSET(0x1F902060)
#define CRIWARE_CRIATOMSOURCEBASE_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1F902A50)
#define CRIWARE_CRIATOMSOURCEBASE_INTERNALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1F9035E0)
#define CRIWARE_CRIATOMSOURCEBASE_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F903520)
#define CRIWARE_CRIATOMSOURCEBASE_INTERNALPLAYCUE_OFFSET UNITYSDK_OFFSET(0x1F904590)
#define CRIWARE_CRIATOMSOURCEBASE_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1F904A00)
#define CRIWARE_CRIATOMSOURCEBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F9036C0)
#define CRIWARE_CRIATOMSOURCEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F903690)
#define CRIWARE_CRIATOMSOURCEBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x1F904830)
#define CRIWARE_CRIATOMSOURCEBASE_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1F9046D0)
#define CRIWARE_CRIATOMSOURCEBASE_PLAY_OFFSET UNITYSDK_OFFSET(0x1F904520)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1F904DE0)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x1F904D80)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISAC_1_OFFSET UNITYSDK_OFFSET(0x1F904EF0)
#define CRIWARE_CRIATOMSOURCEBASE_SETAISAC_OFFSET UNITYSDK_OFFSET(0x1F904DB0)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1F904C70)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_OFFSET UNITYSDK_OFFSET(0x1F904C40)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_1_OFFSET UNITYSDK_OFFSET(0x1F904B30)
#define CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F904B00)
#define CRIWARE_CRIATOMSOURCEBASE_SETINITIALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F903840)
#define CRIWARE_CRIATOMSOURCEBASE_SETINITIALSOURCEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F9036D0)
#define CRIWARE_CRIATOMSOURCEBASE_SETNEEDTOPLAYERUPDATEALL_OFFSET UNITYSDK_OFFSET(0x1F901FB0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x1F903510)
#define CRIWARE_CRIATOMSOURCEBASE_SET_ATTENUATIONDISTANCESETTING_OFFSET UNITYSDK_OFFSET(0x1F903360)
#define CRIWARE_CRIATOMSOURCEBASE_SET_FREEZEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F901FE0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_LISTENERONSTART_OFFSET UNITYSDK_OFFSET(0x1F902910)
#define CRIWARE_CRIATOMSOURCEBASE_SET_LISTENER_OFFSET UNITYSDK_OFFSET(0x1F902670)
#define CRIWARE_CRIATOMSOURCEBASE_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1F902920)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DANGLE_OFFSET UNITYSDK_OFFSET(0x1F902B80)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F902D80)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PITCH_OFFSET UNITYSDK_OFFSET(0x1F902A60)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1F901E30)
#define CRIWARE_CRIATOMSOURCEBASE_SET_PLAYONSTART_OFFSET UNITYSDK_OFFSET(0x1F901E80)
#define CRIWARE_CRIATOMSOURCEBASE_SET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET UNITYSDK_OFFSET(0x1F902070)
#define CRIWARE_CRIATOMSOURCEBASE_SET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1F902100)
#define CRIWARE_CRIATOMSOURCEBASE_SET_REGIONONSTART_OFFSET UNITYSDK_OFFSET(0x1F9028F0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1F901E50)
#define CRIWARE_CRIATOMSOURCEBASE_SET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1F902F80)
#define CRIWARE_CRIATOMSOURCEBASE_SET_USE3DPOSITIONING_OFFSET UNITYSDK_OFFSET(0x1F901E90)
#define CRIWARE_CRIATOMSOURCEBASE_SET_USE3DRANDOMIZATION_OFFSET UNITYSDK_OFFSET(0x1F901FF0)
#define CRIWARE_CRIATOMSOURCEBASE_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1F902940)
#define CRIWARE_CRIATOMSOURCEBASE_START_OFFSET UNITYSDK_OFFSET(0x1F9041C0)
#define CRIWARE_CRIATOMSOURCEBASE_STOP_OFFSET UNITYSDK_OFFSET(0x1F904820)
#define CRIWARE_CRIATOMSOURCEBASE_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1F903C10)
#define CRIWARE_CRIATOMSOURCEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F905150)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomSourceBase_TypeDefinitionIndex = 34898;

	class CriAtomSourceBase : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriAtomExPlayer* _player_k__BackingField; // 0x28
		::CriWare::CriAtomEx3dSource* _source_k__BackingField; // 0x30
		::System::Boolean initialized; // 0x38
		::UnityEngine::Vector3 lastPosition; // 0x3C
		::System::Boolean hasValidPosition; // 0x48
		::CriWare::CriAtomRegion* currentRegion; // 0x50
		::CriWare::CriAtomListener* currentListener; // 0x58
		::System::Boolean _playOnStart; // 0x60
		::CriWare::CriAtomRegion* _regionOnStart; // 0x68
		::CriWare::CriAtomListener* _listenerOnStart; // 0x70
		::System::Boolean _use3dPositioning; // 0x78
		::System::Boolean _freezeOrientation; // 0x79
		::System::Boolean _loop; // 0x7A
		::System::Single _volume; // 0x7C
		::System::Single _pitch; // 0x80
		::System::Boolean _androidUseLowLatencyVoicePool; // 0x84
		::System::Boolean need_to_player_update_all; // 0x85
		::System::Boolean _use3dRandomization; // 0x86
		::System::UInt32 _randomPositionListMaxLength; // 0x88
		::CriWare::CriAtomEx_Randomize3dConfig randomize3dConfig; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE__CTOR_OFFSET))(this);
		}

		::System::Void set_player(::CriWare::CriAtomExPlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExPlayer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PLAYER_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayer* get_player()
		{
			return ((::CriWare::CriAtomExPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_source(::CriWare::CriAtomEx3dSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dSource*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_SOURCE_OFFSET))(this, value);
		}

		::CriWare::CriAtomEx3dSource* get_source()
		{
			return ((::CriWare::CriAtomEx3dSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_SOURCE_OFFSET))(this);
		}

		::System::Boolean get_playOnStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PLAYONSTART_OFFSET))(this);
		}

		::System::Void set_playOnStart(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PLAYONSTART_OFFSET))(this, value);
		}

		::System::Void set_use3dPositioning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_USE3DPOSITIONING_OFFSET))(this, value);
		}

		::System::Boolean get_use3dPositioning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_USE3DPOSITIONING_OFFSET))(this);
		}

		::System::Boolean get_freezeOrientation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_FREEZEORIENTATION_OFFSET))(this);
		}

		::System::Void set_freezeOrientation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_FREEZEORIENTATION_OFFSET))(this, value);
		}

		::System::Void set_use3dRandomization(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_USE3DRANDOMIZATION_OFFSET))(this, value);
		}

		::System::Boolean get_use3dRandomization()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_USE3DRANDOMIZATION_OFFSET))(this);
		}

		::System::Void set_randomPositionListMaxLength(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET))(this, value);
		}

		::System::UInt32 get_randomPositionListMaxLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_RANDOMPOSITIONLISTMAXLENGTH_OFFSET))(this);
		}

		::CriWare::CriAtomRegion* get_region3d()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_REGION3D_OFFSET))(this);
		}

		::System::Void set_region3d(::CriWare::CriAtomRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_REGION3D_OFFSET))(this, value);
		}

		::CriWare::CriAtomListener* get_listener()
		{
			return ((::CriWare::CriAtomListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_LISTENER_OFFSET))(this);
		}

		::System::Void set_listener(::CriWare::CriAtomListener* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_LISTENER_OFFSET))(this, value);
		}

		::CriWare::CriAtomRegion* get_regionOnStart()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_REGIONONSTART_OFFSET))(this);
		}

		::System::Void set_regionOnStart(::CriWare::CriAtomRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_REGIONONSTART_OFFSET))(this, value);
		}

		::CriWare::CriAtomListener* get_listenerOnStart()
		{
			return ((::CriWare::CriAtomListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_LISTENERONSTART_OFFSET))(this);
		}

		::System::Void set_listenerOnStart(::CriWare::CriAtomListener* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomListener*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_LISTENERONSTART_OFFSET))(this, value);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_volume(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_VOLUME_OFFSET))(this, value);
		}

		::System::Single get_volume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_pitch(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PITCH_OFFSET))(this, value);
		}

		::System::Single get_pitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PITCH_OFFSET))(this);
		}

		::System::Void set_pan3dAngle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DANGLE_OFFSET))(this, value);
		}

		::System::Single get_pan3dAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DANGLE_OFFSET))(this);
		}

		::System::Void set_pan3dDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_PAN3DDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_pan3dDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_PAN3DDISTANCE_OFFSET))(this);
		}

		::System::Void set_startTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_STARTTIME_OFFSET))(this, value);
		}

		::System::Int32 get_startTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_STARTTIME_OFFSET))(this);
		}

		::System::Int64 get_time()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_TIME_OFFSET))(this);
		}

		::CriWare::CriAtomSourceBase_Status get_status()
		{
			return ((::CriWare::CriAtomSourceBase_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_attenuationDistanceSetting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_ATTENUATIONDISTANCESETTING_OFFSET))(this, value);
		}

		::System::Boolean get_attenuationDistanceSetting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_ATTENUATIONDISTANCESETTING_OFFSET))(this);
		}

		::System::Boolean get_androidUseLowLatencyVoicePool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_GET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET))(this);
		}

		::System::Void set_androidUseLowLatencyVoicePool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SET_ANDROIDUSELOWLATENCYVOICEPOOL_OFFSET))(this, value);
		}

		::System::Void SetNeedToPlayerUpdateAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETNEEDTOPLAYERUPDATEALL_OFFSET))(this);
		}

		::System::Void InternalInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_INTERNALINITIALIZE_OFFSET))(this);
		}

		::System::Void InternalFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_INTERNALFINALIZE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean SetInitialSourcePosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETINITIALSOURCEPOSITION_OFFSET))(this);
		}

		::System::Void SetInitialParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETINITIALPARAMETERS_OFFSET))(this);
		}

		::System::Void UpdatePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_UPDATEPOSITION_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_START_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::CriWare::CriAtomExPlayback Play(::System::String* cueName)
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_PLAY_OFFSET))(this, cueName);
		}

		::CriWare::CriAtomExPlayback Play_1(::System::Int32 cueId)
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_PLAY_1_OFFSET))(this, cueId);
		}

		::CriWare::CriAtomExPlayback InternalPlayCue()
		{
			return ((::CriWare::CriAtomExPlayback(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_INTERNALPLAYCUE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_STOP_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean sw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_PAUSE_OFFSET))(this, sw);
		}

		::System::Boolean IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ISPAUSED_OFFSET))(this);
		}

		::System::Void SetBusSendLevel(::System::String* busName, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_OFFSET))(this, busName, level);
		}

		::System::Void SetBusSendLevel_1(::System::Int32 busId, ::System::Single level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVEL_1_OFFSET))(this, busId, level);
		}

		::System::Void SetBusSendLevelOffset(::System::String* busName, ::System::Single levelOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_OFFSET))(this, busName, levelOffset);
		}

		::System::Void SetBusSendLevelOffset_1(::System::Int32 busId, ::System::Single levelOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETBUSSENDLEVELOFFSET_1_OFFSET))(this, busId, levelOffset);
		}

		::System::Void SetAisacControl(::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_OFFSET))(this, controlName, value);
		}

		::System::Void SetAisac(::System::String* controlName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISAC_OFFSET))(this, controlName, value);
		}

		::System::Void SetAisacControl_1(::System::UInt32 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISACCONTROL_1_OFFSET))(this, controlId, value);
		}

		::System::Void SetAisac_1(::System::UInt32 controlId, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_SETAISAC_1_OFFSET))(this, controlId, value);
		}

		::System::Void AttachToAnalyzer(::CriWare::CriAtomExOutputAnalyzer* analyzer)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_ATTACHTOANALYZER_OFFSET))(this, analyzer);
		}

		::System::Void DetachFromAnalyzer(::CriWare::CriAtomExOutputAnalyzer* analyzer)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExOutputAnalyzer*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMSOURCEBASE_DETACHFROMANALYZER_OFFSET))(this, analyzer);
		}
	};
}
