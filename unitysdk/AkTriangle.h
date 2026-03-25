#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTRIANGLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C2FE00)
#define AKTRIANGLE_CLONE_OFFSET UNITYSDK_OFFSET(0x18C2FF60)
#define AKTRIANGLE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18C2F940)
#define AKTRIANGLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C2F850)
#define AKTRIANGLE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18C2F8D0)
#define AKTRIANGLE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18C2F740)
#define AKTRIANGLE_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x18C2FEB0)
#define AKTRIANGLE_GET_POINT0_OFFSET UNITYSDK_OFFSET(0x18C26650)
#define AKTRIANGLE_GET_POINT1_OFFSET UNITYSDK_OFFSET(0x18C26700)
#define AKTRIANGLE_GET_POINT2_OFFSET UNITYSDK_OFFSET(0x18C267B0)
#define AKTRIANGLE_GET_SURFACE_OFFSET UNITYSDK_OFFSET(0x18C2FD50)
#define AKTRIANGLE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18C2F790)
#define AKTRIANGLE_SET_POINT0_OFFSET UNITYSDK_OFFSET(0x18C26350)
#define AKTRIANGLE_SET_POINT1_OFFSET UNITYSDK_OFFSET(0x18C26410)
#define AKTRIANGLE_SET_POINT2_OFFSET UNITYSDK_OFFSET(0x18C264D0)
#define AKTRIANGLE_SET_SURFACE_OFFSET UNITYSDK_OFFSET(0x18C26590)
#define AKTRIANGLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18C2FAE0)
#define AKTRIANGLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18C2FB60)
#define AKTRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C2F730)

inline static constexpr unsigned int AkTriangle_TypeDefinitionIndex = 34530;

class AkTriangle : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRIANGLE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::UInt16 in_pt0, ::System::UInt16 in_pt1, ::System::UInt16 in_pt2, ::System::UInt16 in_surfaceInfo)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE__CTOR_2_OFFSET))(this, in_pt0, in_pt1, in_pt2, in_surfaceInfo);
	}

	static ::System::IntPtr getCPtr(::AkTriangle* obj)
	{
		return ((::System::IntPtr(*)(::AkTriangle*))((::PBYTE)hIl2Cpp + AKTRIANGLE_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTRIANGLE_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTRIANGLE_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_point0(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_POINT0_OFFSET))(this, value);
	}

	::System::UInt16 get_point0()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_POINT0_OFFSET))(this);
	}

	::System::Void set_point1(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_POINT1_OFFSET))(this, value);
	}

	::System::UInt16 get_point1()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_POINT1_OFFSET))(this);
	}

	::System::Void set_point2(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_POINT2_OFFSET))(this, value);
	}

	::System::UInt16 get_point2()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_POINT2_OFFSET))(this);
	}

	::System::Void set_surface(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKTRIANGLE_SET_SURFACE_OFFSET))(this, value);
	}

	::System::UInt16 get_surface()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_GET_SURFACE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIANGLE_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKTRIANGLE_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkTriangle* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkTriangle*))((::PBYTE)hIl2Cpp + AKTRIANGLE_CLONE_OFFSET))(this, other);
	}
};
