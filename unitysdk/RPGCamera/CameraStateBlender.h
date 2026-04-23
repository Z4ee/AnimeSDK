#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

class EasingFunction_FunctionValue;
namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET UNITYSDK_OFFSET(0x8DF15A0)
#define RPGCAMERA_CAMERASTATEBLENDER_FINISH_OFFSET UNITYSDK_OFFSET(0x8DF1EB0)
#define RPGCAMERA_CAMERASTATEBLENDER_FLUSH_OFFSET UNITYSDK_OFFSET(0x8DF1EC0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET UNITYSDK_OFFSET(0x8DF1870)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMBLEND_OFFSET UNITYSDK_OFFSET(0x8DF18C0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET UNITYSDK_OFFSET(0x8DF1890)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x8DF18D0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8DF1920)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_PREBLEND_OFFSET UNITYSDK_OFFSET(0x8DF18B0)
#define RPGCAMERA_CAMERASTATEBLENDER_INIT_OFFSET UNITYSDK_OFFSET(0x8DF1790)
#define RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET UNITYSDK_OFFSET(0x8DF1E80)
#define RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0x8DF1860)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET UNITYSDK_OFFSET(0x8DF1880)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET UNITYSDK_OFFSET(0x8DF18A0)
#define RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET UNITYSDK_OFFSET(0x8DF19E0)
#define RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET UNITYSDK_OFFSET(0x8DF1F30)
#define RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF1700)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlender_TypeDefinitionIndex = 40940;

	class CameraStateBlender : public ::System::Object
	{
	public:
		::RPGCamera::ICameraState* _camBlend; // 0x10
		::RPGCamera::ICameraState* _preFromCam; // 0x18
		::RPGCamera::ICameraState* _CamB_k__BackingField; // 0x20
		::EasingFunction_FunctionValue* _lerpFunc; // 0x28
		::RPGCamera::ICameraState* _CamA_k__BackingField; // 0x30
		::RPGCamera::ICameraState* _preBlend; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* _blenderConfigDic; // 0x40
		::System::Boolean _isFinished; // 0x48
		::RPGCamera::CameraStateData _retData; // 0x4C
		::System::Single _duration; // 0xB8
		::RPGCamera::CameraStateBlenderConfig_BlendType _blendType; // 0xBC
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
