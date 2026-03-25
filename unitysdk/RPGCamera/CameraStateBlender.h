#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

class EasingFunction_FunctionValue;
namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET UNITYSDK_OFFSET(0x85BB570)
#define RPGCAMERA_CAMERASTATEBLENDER_FINISH_OFFSET UNITYSDK_OFFSET(0x85BBE40)
#define RPGCAMERA_CAMERASTATEBLENDER_FLUSH_OFFSET UNITYSDK_OFFSET(0x85BBE50)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET UNITYSDK_OFFSET(0x85BB810)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMBLEND_OFFSET UNITYSDK_OFFSET(0x85BB860)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET UNITYSDK_OFFSET(0x85BB830)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x85BB870)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x85BB8C0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_PREBLEND_OFFSET UNITYSDK_OFFSET(0x85BB850)
#define RPGCAMERA_CAMERASTATEBLENDER_INIT_OFFSET UNITYSDK_OFFSET(0x85BB750)
#define RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET UNITYSDK_OFFSET(0x85BBE10)
#define RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0x85BB800)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET UNITYSDK_OFFSET(0x85BB820)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET UNITYSDK_OFFSET(0x85BB840)
#define RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET UNITYSDK_OFFSET(0x85BB970)
#define RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET UNITYSDK_OFFSET(0x85BBEC0)
#define RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x85BB6C0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlender_TypeDefinitionIndex = 35112;

	class CameraStateBlender : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* _blenderConfigDic; // 0x10
		::RPGCamera::ICameraState* _preFromCam; // 0x18
		::RPGCamera::ICameraState* _preBlend; // 0x20
		::RPGCamera::ICameraState* _CamB_k__BackingField; // 0x28
		::RPGCamera::ICameraState* _CamA_k__BackingField; // 0x30
		::EasingFunction_FunctionValue* _lerpFunc; // 0x38
		::RPGCamera::ICameraState* _camBlend; // 0x40
		::RPGCamera::CameraStateData _retData; // 0x48
		::System::Single _duration; // 0xB4
		::RPGCamera::CameraStateBlenderConfig_BlendType _blendType; // 0xB8
		::System::Boolean _isFinished; // 0xBC
		::System::Single _blendTime; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET))(this);
		}

		static ::RPGCamera::CameraStateBlender* Create()
		{
			return ((::RPGCamera::CameraStateBlender*(*)())((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET))();
		}

		::System::Void RegisterBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* blenderConfigDic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET))(this, blenderConfigDic);
		}

		::RPGCamera::ICameraState* get_CamA()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET))(this);
		}

		::System::Void set_CamA(::RPGCamera::ICameraState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET))(this, value);
		}

		::RPGCamera::ICameraState* get_CamB()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET))(this);
		}

		::System::Void set_CamB(::RPGCamera::ICameraState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET))(this, value);
		}

		::RPGCamera::ICameraState* get_PreBlend()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_PREBLEND_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_CamBlend()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMBLEND_OFFSET))(this);
		}

		::RPGCamera::CameraStateData get_Data()
		{
			return ((::RPGCamera::CameraStateData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_DATA_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_INIT_OFFSET))(this);
		}

		::System::Void StartBlend(::RPGCamera::ICameraState* camA, ::RPGCamera::ICameraState* camB)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET))(this, camA, camB);
		}

		::System::Boolean IsRevert(::RPGCamera::ICameraState* camB)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET))(this, camB);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_FINISH_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_FLUSH_OFFSET))(this);
		}
	};
}
