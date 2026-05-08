#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBJECTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3D55A0)
#define AKOBJECTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3D56A0)
#define AKOBJECTINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C3D50F0)
#define AKOBJECTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3D4FD0)
#define AKOBJECTINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C3D5080)
#define AKOBJECTINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C3D4F10)
#define AKOBJECTINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1C3D5620)
#define AKOBJECTINFO_GET_IDEPTH_OFFSET UNITYSDK_OFFSET(0x1C3D5520)
#define AKOBJECTINFO_GET_OBJID_OFFSET UNITYSDK_OFFSET(0x1C3D5320)
#define AKOBJECTINFO_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1C3D5420)
#define AKOBJECTINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C3D4F20)
#define AKOBJECTINFO_SET_IDEPTH_OFFSET UNITYSDK_OFFSET(0x1C3D54A0)
#define AKOBJECTINFO_SET_OBJID_OFFSET UNITYSDK_OFFSET(0x1C3D52A0)
#define AKOBJECTINFO_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1C3D53A0)
#define AKOBJECTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3D5740)
#define AKOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D4F00)

inline static constexpr unsigned int AkObjectInfo_TypeDefinitionIndex = 31446;

class AkObjectInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBJECTINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkObjectInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkObjectInfo*))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBJECTINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_objID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SET_OBJID_OFFSET))(this, value);
	}

	::System::UInt32 get_objID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GET_OBJID_OFFSET))(this);
	}

	::System::Void set_parentID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SET_PARENTID_OFFSET))(this, value);
	}

	::System::UInt32 get_parentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GET_PARENTID_OFFSET))(this);
	}

	::System::Void set_iDepth(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SET_IDEPTH_OFFSET))(this, value);
	}

	::System::Int32 get_iDepth()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GET_IDEPTH_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKOBJECTINFO_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkObjectInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkObjectInfo*))((::PBYTE)hIl2Cpp + AKOBJECTINFO_CLONE_OFFSET))(this, other);
	}
};
