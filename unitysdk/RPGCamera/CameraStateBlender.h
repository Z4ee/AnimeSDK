#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateBlenderConfig_BlendType.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

class EasingFunction_FunctionValue;
namespace RPGCamera { class CameraStateBlenderConfig; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET UNITYSDK_OFFSET(0xA23E220)
#define RPGCAMERA_CAMERASTATEBLENDER_FINISH_OFFSET UNITYSDK_OFFSET(0xA23E9F0)
#define RPGCAMERA_CAMERASTATEBLENDER_FLUSH_OFFSET UNITYSDK_OFFSET(0xA23EA00)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET UNITYSDK_OFFSET(0xA23E4C0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMBLEND_OFFSET UNITYSDK_OFFSET(0xA23E510)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET UNITYSDK_OFFSET(0xA23E4E0)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA23E520)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA23E570)
#define RPGCAMERA_CAMERASTATEBLENDER_GET_PREBLEND_OFFSET UNITYSDK_OFFSET(0xA23E500)
#define RPGCAMERA_CAMERASTATEBLENDER_INIT_OFFSET UNITYSDK_OFFSET(0xA23E400)
#define RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET UNITYSDK_OFFSET(0xA23E9C0)
#define RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET UNITYSDK_OFFSET(0xA23E4B0)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET UNITYSDK_OFFSET(0xA23E4D0)
#define RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET UNITYSDK_OFFSET(0xA23E4F0)
#define RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET UNITYSDK_OFFSET(0xA23E620)
#define RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET UNITYSDK_OFFSET(0xA23EA70)
#define RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA23E370)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlender_TypeDefinitionIndex = 41758;

	class CameraStateBlender : public ::System::Object
	{
	public:
		::RPGCamera::ICameraState* _preBlend; // 0x10
		::RPGCamera::ICameraState* _preFromCam; // 0x18
		::RPGCamera::ICameraState* _CamB_k__BackingField; // 0x20
		::EasingFunction_FunctionValue* _lerpFunc; // 0x28
		::RPGCamera::ICameraState* _CamA_k__BackingField; // 0x30
		::RPGCamera::ICameraState* _camBlend; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* _blenderConfigDic; // 0x40
		::System::Single _blendTime; // 0x48
		::RPGCamera::CameraStateBlenderConfig_BlendType _blendType; // 0x4C
		::RPGCamera::CameraStateData _retData; // 0x50
		::System::Boolean _isFinished; // 0xBC
		::System::Single _duration; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER__CTOR_OFFSET))(this);
		}

		static ::RPGCamera::CameraStateBlender* Create()
		{
			return ((::RPGCamera::CameraStateBlender*(*)())((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_CREATE_OFFSET))();
		}

		::System::Void RegisterBlenderConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPGCamera::CameraStateBlenderConfig*>*>*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_REGISTERBLENDERCONFIG_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* get_CamA()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMA_OFFSET))(this);
		}

		::System::Void set_CamA(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_SET_CAMA_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* get_CamB()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_GET_CAMB_OFFSET))(this);
		}

		::System::Void set_CamB(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_SET_CAMB_OFFSET))(this, a1);
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

		::System::Void StartBlend(::RPGCamera::ICameraState* a1, ::RPGCamera::ICameraState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_STARTBLEND_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsRevert(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_ISREVERT_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEBLENDER_TICK_OFFSET))(this, a1);
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
