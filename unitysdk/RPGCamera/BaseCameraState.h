#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace RPGCamera { class ICameraStateRunner; }
namespace System { class String; }

#define RPGCAMERA_BASECAMERASTATE_COLLECT_OFFSET UNITYSDK_OFFSET(0x85B8BC0)
#define RPGCAMERA_BASECAMERASTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85B8BF0)
#define RPGCAMERA_BASECAMERASTATE_GET_BLENDCFG_OFFSET UNITYSDK_OFFSET(0x85B8B70)
#define RPGCAMERA_BASECAMERASTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x85B8AB0)
#define RPGCAMERA_BASECAMERASTATE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x85B8A10)
#define RPGCAMERA_BASECAMERASTATE_GET_ID_OFFSET UNITYSDK_OFFSET(0x85B89D0)
#define RPGCAMERA_BASECAMERASTATE_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x85B8B50)
#define RPGCAMERA_BASECAMERASTATE_GET_ISSPAWNED_OFFSET UNITYSDK_OFFSET(0x85B8A40)
#define RPGCAMERA_BASECAMERASTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x85B8A00)
#define RPGCAMERA_BASECAMERASTATE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x85B89F0)
#define RPGCAMERA_BASECAMERASTATE_GET_RUNNER_OFFSET UNITYSDK_OFFSET(0x85B8B80)
#define RPGCAMERA_BASECAMERASTATE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x85B89E0)
#define RPGCAMERA_BASECAMERASTATE_INITSTATE_OFFSET UNITYSDK_OFFSET(0x85B8A20)
#define RPGCAMERA_BASECAMERASTATE_ONBLENDFROMFINISHED_OFFSET UNITYSDK_OFFSET(0x85B8BE0)
#define RPGCAMERA_BASECAMERASTATE_ONBLENDTOFINISHED_OFFSET UNITYSDK_OFFSET(0x85B8BD0)
#define RPGCAMERA_BASECAMERASTATE_ONSPAWN_OFFSET UNITYSDK_OFFSET(0x85B8A70)
#define RPGCAMERA_BASECAMERASTATE_ONUNSPAWN_OFFSET UNITYSDK_OFFSET(0x85B8AA0)
#define RPGCAMERA_BASECAMERASTATE_REGISTERRUNNER_OFFSET UNITYSDK_OFFSET(0x85B8B90)
#define RPGCAMERA_BASECAMERASTATE_SPAWN_OFFSET UNITYSDK_OFFSET(0x85B8A50)
#define RPGCAMERA_BASECAMERASTATE_SWITCHBACKGROUND_OFFSET UNITYSDK_OFFSET(0x85B8B60)
#define RPGCAMERA_BASECAMERASTATE_UNSPAWN_OFFSET UNITYSDK_OFFSET(0x85B8A80)
#define RPGCAMERA_BASECAMERASTATE_UPDATEBYBLENDSRC_OFFSET UNITYSDK_OFFSET(0x85B8BB0)
#define RPGCAMERA_BASECAMERASTATE_UPDATEBYSTATE_OFFSET UNITYSDK_OFFSET(0x85B8BA0)
#define RPGCAMERA_BASECAMERASTATE_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0x85B8B00)
#define RPGCAMERA_BASECAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x85B8C90)

namespace RPGCamera
{
	inline static constexpr unsigned int BaseCameraState_TypeDefinitionIndex = 35115;

	class BaseCameraState : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::String* _description; // 0x18
		::RPGCamera::ICameraStateRunner* _runner; // 0x20
		::System::Boolean _isBackground; // 0x28
		::System::Boolean _isSpawned; // 0x29
		::System::Int32 _type; // 0x2C
		::System::Int32 _priority; // 0x30
		::System::Int32 _id; // 0x34
		::RPGCamera::CameraStateData _data; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ID_OFFSET))(this);
		}

		::System::Int32 get_Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_PRIORITY_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void InitState(::System::Int32 id, ::System::Int32 type, ::System::Int32 priority, ::System::String* name, ::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_INITSTATE_OFFSET))(this, id, type, priority, name, desc);
		}

		::System::Boolean get_IsSpawned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ISSPAWNED_OFFSET))(this);
		}

		::System::Void Spawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_SPAWN_OFFSET))(this);
		}

		::System::Void OnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONSPAWN_OFFSET))(this);
		}

		::System::Void UnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UNSPAWN_OFFSET))(this);
		}

		::System::Void OnUnSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONUNSPAWN_OFFSET))(this);
		}

		::RPGCamera::CameraStateData get_Data()
		{
			return ((::RPGCamera::CameraStateData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_DATA_OFFSET))(this);
		}

		::System::Void UpdateData(::RPGCamera::CameraStateData data)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEDATA_OFFSET))(this, data);
		}

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void SwitchBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_SWITCHBACKGROUND_OFFSET))(this, value);
		}

		::RPGCamera::CameraStateBlenderConfig* get_BlendCfg()
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_BLENDCFG_OFFSET))(this);
		}

		::RPGCamera::ICameraStateRunner* get_Runner()
		{
			return ((::RPGCamera::ICameraStateRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_RUNNER_OFFSET))(this);
		}

		::System::Void RegisterRunner(::RPGCamera::ICameraStateRunner* runner)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraStateRunner*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_REGISTERRUNNER_OFFSET))(this, runner);
		}

		::System::Void UpdateByState(::RPGCamera::ICameraState* state)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEBYSTATE_OFFSET))(this, state);
		}

		::System::Void UpdateByBlendSrc(::RPGCamera::ICameraState* state)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEBYBLENDSRC_OFFSET))(this, state);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_COLLECT_OFFSET))(this);
		}

		::System::Void OnBlendToFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONBLENDTOFINISHED_OFFSET))(this);
		}

		::System::Void OnBlendFromFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_ONBLENDFROMFINISHED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_DISPOSE_OFFSET))(this);
		}
	};
}
