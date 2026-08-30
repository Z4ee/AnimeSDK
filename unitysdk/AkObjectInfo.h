#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBJECTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA9CB40)
#define AKOBJECTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DA9CCA0)
#define AKOBJECTINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DA9C510)
#define AKOBJECTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA9C320)
#define AKOBJECTINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DA9C440)
#define AKOBJECTINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA9C270)
#define AKOBJECTINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1DA9CBF0)
#define AKOBJECTINFO_GET_IDEPTH_OFFSET UNITYSDK_OFFSET(0x1DA9CA90)
#define AKOBJECTINFO_GET_OBJID_OFFSET UNITYSDK_OFFSET(0x1DA9C7B0)
#define AKOBJECTINFO_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1DA9C920)
#define AKOBJECTINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA9C2C0)
#define AKOBJECTINFO_SET_IDEPTH_OFFSET UNITYSDK_OFFSET(0x1DA9C9D0)
#define AKOBJECTINFO_SET_OBJID_OFFSET UNITYSDK_OFFSET(0x1DA9C6F0)
#define AKOBJECTINFO_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1DA9C860)
#define AKOBJECTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA9CDC0)
#define AKOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9C260)

inline static constexpr unsigned int AkObjectInfo_TypeDefinitionIndex = 43578;

class AkObjectInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBJECTINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkObjectInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkObjectInfo*))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBJECTINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_objID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SET_OBJID_OFFSET))(this, a1);
	}

	::System::UInt32 get_objID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GET_OBJID_OFFSET))(this);
	}

	::System::Void set_parentID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SET_PARENTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_parentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBJECTINFO_GET_PARENTID_OFFSET))(this);
	}

	::System::Void set_iDepth(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBJECTINFO_SET_IDEPTH_OFFSET))(this, a1);
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

	::System::Void Clone(::AkObjectInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkObjectInfo*))((::PBYTE)hIl2Cpp + AKOBJECTINFO_CLONE_OFFSET))(this, a1);
	}
};
