#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CommonPriorityStack; }
namespace RPGCamera { class ICameraState; }

#define RPGCAMERA_CAMERASTACK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x196726F0)
#define RPGCAMERA_CAMERASTACK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19672710)
#define RPGCAMERA_CAMERASTACK_NEXT_OFFSET UNITYSDK_OFFSET(0x19672E40)
#define RPGCAMERA_CAMERASTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x19672DD0)
#define RPGCAMERA_CAMERASTACK_POP_OFFSET UNITYSDK_OFFSET(0x19672B00)
#define RPGCAMERA_CAMERASTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x19672830)
#define RPGCAMERA_CAMERASTACK_TOP_OFFSET UNITYSDK_OFFSET(0x19672D60)
#define RPGCAMERA_CAMERASTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19673030)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStack_TypeDefinitionIndex = 44795;

	class CameraStack : public ::System::Object
	{
	public:
		::RPGCamera::CommonPriorityStack* _stack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_GET_COUNT_OFFSET))(this);
		}

		::RPGCamera::ICameraState* get_Item(::System::Int32 a1)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Push(::RPGCamera::ICameraState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_PUSH_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* Pop(::System::Int32 a1)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_POP_OFFSET))(this, a1);
		}

		::RPGCamera::ICameraState* Top()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_TOP_OFFSET))(this);
		}

		::RPGCamera::ICameraState* Next()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_NEXT_OFFSET))(this);
		}

		::RPGCamera::ICameraState* Peek(::System::Int32 a1)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_PEEK_OFFSET))(this, a1);
		}
	};
}
