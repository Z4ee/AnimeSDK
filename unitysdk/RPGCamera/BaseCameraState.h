#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace RPGCamera { class ICameraStateRunner; }
namespace System { class String; }

#define RPGCAMERA_BASECAMERASTATE_COLLECT_OFFSET UNITYSDK_OFFSET(0xB2D86C0)
#define RPGCAMERA_BASECAMERASTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D86F0)
#define RPGCAMERA_BASECAMERASTATE_GET_BLENDCFG_OFFSET UNITYSDK_OFFSET(0xB2D8670)
#define RPGCAMERA_BASECAMERASTATE_GET_DATA_OFFSET UNITYSDK_OFFSET(0xB2D85C0)
#define RPGCAMERA_BASECAMERASTATE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xB2D8440)
#define RPGCAMERA_BASECAMERASTATE_GET_ID_OFFSET UNITYSDK_OFFSET(0xB2D8400)
#define RPGCAMERA_BASECAMERASTATE_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0xB2D8650)
#define RPGCAMERA_BASECAMERASTATE_GET_ISSPAWNED_OFFSET UNITYSDK_OFFSET(0xB2D8470)
#define RPGCAMERA_BASECAMERASTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB2D8430)
#define RPGCAMERA_BASECAMERASTATE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB2D8420)
#define RPGCAMERA_BASECAMERASTATE_GET_RUNNER_OFFSET UNITYSDK_OFFSET(0xB2D8680)
#define RPGCAMERA_BASECAMERASTATE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB2D8410)
#define RPGCAMERA_BASECAMERASTATE_INITSTATE_OFFSET UNITYSDK_OFFSET(0xB2D8450)
#define RPGCAMERA_BASECAMERASTATE_ONBLENDFROMFINISHED_OFFSET UNITYSDK_OFFSET(0xB2D86E0)
#define RPGCAMERA_BASECAMERASTATE_ONBLENDTOFINISHED_OFFSET UNITYSDK_OFFSET(0xB2D86D0)
#define RPGCAMERA_BASECAMERASTATE_ONSPAWN_OFFSET UNITYSDK_OFFSET(0xB2D8510)
#define RPGCAMERA_BASECAMERASTATE_ONUNSPAWN_OFFSET UNITYSDK_OFFSET(0xB2D85B0)
#define RPGCAMERA_BASECAMERASTATE_REGISTERRUNNER_OFFSET UNITYSDK_OFFSET(0xB2D8690)
#define RPGCAMERA_BASECAMERASTATE_SPAWN_OFFSET UNITYSDK_OFFSET(0xB2D8480)
#define RPGCAMERA_BASECAMERASTATE_SWITCHBACKGROUND_OFFSET UNITYSDK_OFFSET(0xB2D8660)
#define RPGCAMERA_BASECAMERASTATE_UNSPAWN_OFFSET UNITYSDK_OFFSET(0xB2D8520)
#define RPGCAMERA_BASECAMERASTATE_UPDATEBYBLENDSRC_OFFSET UNITYSDK_OFFSET(0xB2D86B0)
#define RPGCAMERA_BASECAMERASTATE_UPDATEBYSTATE_OFFSET UNITYSDK_OFFSET(0xB2D86A0)
#define RPGCAMERA_BASECAMERASTATE_UPDATEDATA_OFFSET UNITYSDK_OFFSET(0xB2D8600)
#define RPGCAMERA_BASECAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D87F0)

namespace RPGCamera
{
	inline static constexpr unsigned int BaseCameraState_TypeDefinitionIndex = 44804;

	class BaseCameraState : public ::System::Object
	{
	public:
		::RPGCamera::ICameraStateRunner* _runner; // 0x10
		::System::String* _name; // 0x18
		::System::String* _description; // 0x20
		::RPGCamera::CameraStateData _data; // 0x28
		::System::Int32 _id; // 0x94
		::System::Int32 _priority; // 0x98
		::System::Int32 _type; // 0x9C
		::System::Boolean _isSpawned; // 0xA0
		::System::Boolean _isBackground; // 0xA1

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

		::System::Void InitState(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_INITSTATE_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void UpdateData(::RPGCamera::CameraStateData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void SwitchBackground(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_SWITCHBACKGROUND_OFFSET))(this, a1);
		}

		::RPGCamera::CameraStateBlenderConfig* get_BlendCfg()
		{
			return ((::RPGCamera::CameraStateBlenderConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_BLENDCFG_OFFSET))(this);
		}

		::RPGCamera::ICameraStateRunner* get_Runner()
		{
			return ((::RPGCamera::ICameraStateRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_GET_RUNNER_OFFSET))(this);
		}

		::System::Void RegisterRunner(::RPGCamera::ICameraStateRunner* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraStateRunner*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_REGISTERRUNNER_OFFSET))(this, a1);
		}

		::System::Void UpdateByState(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEBYSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateByBlendSrc(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_BASECAMERASTATE_UPDATEBYBLENDSRC_OFFSET))(this, a1);
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
