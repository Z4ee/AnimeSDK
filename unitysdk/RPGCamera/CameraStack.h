#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CommonPriorityStack; }
namespace RPGCamera { class ICameraState; }

#define RPGCAMERA_CAMERASTACK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x85BABF0)
#define RPGCAMERA_CAMERASTACK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x85BAC10)
#define RPGCAMERA_CAMERASTACK_NEXT_OFFSET UNITYSDK_OFFSET(0x85BB310)
#define RPGCAMERA_CAMERASTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x85BB2A0)
#define RPGCAMERA_CAMERASTACK_POP_OFFSET UNITYSDK_OFFSET(0x85BAFF0)
#define RPGCAMERA_CAMERASTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x85BADE0)
#define RPGCAMERA_CAMERASTACK_TOP_OFFSET UNITYSDK_OFFSET(0x85BB230)
#define RPGCAMERA_CAMERASTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x85BB4E0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStack_TypeDefinitionIndex = 35106;

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

		::RPGCamera::ICameraState* get_Item(::System::Int32 index)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void Push(::RPGCamera::ICameraState* state)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_PUSH_OFFSET))(this, state);
		}

		::RPGCamera::ICameraState* Pop(::System::Int32 index)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_POP_OFFSET))(this, index);
		}

		::RPGCamera::ICameraState* Top()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_TOP_OFFSET))(this);
		}

		::RPGCamera::ICameraState* Next()
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_NEXT_OFFSET))(this);
		}

		::RPGCamera::ICameraState* Peek(::System::Int32 index)
		{
			return ((::RPGCamera::ICameraState*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTACK_PEEK_OFFSET))(this, index);
		}
	};
}
