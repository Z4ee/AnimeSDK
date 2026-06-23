#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKROOMPARAMS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E715210)
#define AKROOMPARAMS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7150F0)
#define AKROOMPARAMS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7151A0)
#define AKROOMPARAMS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E715030)
#define AKROOMPARAMS_GET_FRONT_OFFSET UNITYSDK_OFFSET(0x1E7156C0)
#define AKROOMPARAMS_GET_REVERBAUXBUS_OFFSET UNITYSDK_OFFSET(0x1E7157E0)
#define AKROOMPARAMS_GET_REVERBLEVEL_OFFSET UNITYSDK_OFFSET(0x1E7158F0)
#define AKROOMPARAMS_GET_ROOMGAMEOBJ_AUXSENDLEVELTOSELF_OFFSET UNITYSDK_OFFSET(0x1E715B10)
#define AKROOMPARAMS_GET_ROOMGAMEOBJ_KEEPREGISTERED_OFFSET UNITYSDK_OFFSET(0x1E715C10)
#define AKROOMPARAMS_GET_UP_OFFSET UNITYSDK_OFFSET(0x1E715580)
#define AKROOMPARAMS_GET_WALLOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1E715A00)
#define AKROOMPARAMS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E715040)
#define AKROOMPARAMS_SET_FRONT_OFFSET UNITYSDK_OFFSET(0x1E715620)
#define AKROOMPARAMS_SET_REVERBAUXBUS_OFFSET UNITYSDK_OFFSET(0x1E715760)
#define AKROOMPARAMS_SET_REVERBLEVEL_OFFSET UNITYSDK_OFFSET(0x1E715860)
#define AKROOMPARAMS_SET_ROOMGAMEOBJ_AUXSENDLEVELTOSELF_OFFSET UNITYSDK_OFFSET(0x1E715A80)
#define AKROOMPARAMS_SET_ROOMGAMEOBJ_KEEPREGISTERED_OFFSET UNITYSDK_OFFSET(0x1E715B90)
#define AKROOMPARAMS_SET_UP_OFFSET UNITYSDK_OFFSET(0x1E7154E0)
#define AKROOMPARAMS_SET_WALLOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1E715970)
#define AKROOMPARAMS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7153C0)
#define AKROOMPARAMS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E715440)
#define AKROOMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E715020)

inline static constexpr unsigned int AkRoomParams_TypeDefinitionIndex = 33011;

class AkRoomParams : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKROOMPARAMS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::AkRoomParams* in_rhs)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoomParams*))((::PBYTE)hIl2Cpp + AKROOMPARAMS__CTOR_2_OFFSET))(this, in_rhs);
	}

	static ::System::IntPtr getCPtr(::AkRoomParams* obj)
	{
		return ((::System::IntPtr(*)(::AkRoomParams*))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKROOMPARAMS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_Up(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_UP_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Up()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_UP_OFFSET))(this);
	}

	::System::Void set_Front(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_FRONT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Front()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_FRONT_OFFSET))(this);
	}

	::System::Void set_ReverbAuxBus(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_REVERBAUXBUS_OFFSET))(this, value);
	}

	::System::UInt32 get_ReverbAuxBus()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_REVERBAUXBUS_OFFSET))(this);
	}

	::System::Void set_ReverbLevel(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_REVERBLEVEL_OFFSET))(this, value);
	}

	::System::Single get_ReverbLevel()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_REVERBLEVEL_OFFSET))(this);
	}

	::System::Void set_WallOcclusion(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_WALLOCCLUSION_OFFSET))(this, value);
	}

	::System::Single get_WallOcclusion()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_WALLOCCLUSION_OFFSET))(this);
	}

	::System::Void set_RoomGameObj_AuxSendLevelToSelf(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_ROOMGAMEOBJ_AUXSENDLEVELTOSELF_OFFSET))(this, value);
	}

	::System::Single get_RoomGameObj_AuxSendLevelToSelf()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_ROOMGAMEOBJ_AUXSENDLEVELTOSELF_OFFSET))(this);
	}

	::System::Void set_RoomGameObj_KeepRegistered(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKROOMPARAMS_SET_ROOMGAMEOBJ_KEEPREGISTERED_OFFSET))(this, value);
	}

	::System::Boolean get_RoomGameObj_KeepRegistered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPARAMS_GET_ROOMGAMEOBJ_KEEPREGISTERED_OFFSET))(this);
	}
};
