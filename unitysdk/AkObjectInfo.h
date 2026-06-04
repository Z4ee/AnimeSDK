#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKOBJECTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B449570)
#define AKOBJECTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4496D0)
#define AKOBJECTINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B448F40)
#define AKOBJECTINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B448E20)
#define AKOBJECTINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B448ED0)
#define AKOBJECTINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B448CE0)
#define AKOBJECTINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1B449620)
#define AKOBJECTINFO_GET_IDEPTH_OFFSET UNITYSDK_OFFSET(0x1B4494C0)
#define AKOBJECTINFO_GET_OBJID_OFFSET UNITYSDK_OFFSET(0x1B4491E0)
#define AKOBJECTINFO_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1B449350)
#define AKOBJECTINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B448D30)
#define AKOBJECTINFO_SET_IDEPTH_OFFSET UNITYSDK_OFFSET(0x1B449400)
#define AKOBJECTINFO_SET_OBJID_OFFSET UNITYSDK_OFFSET(0x1B449120)
#define AKOBJECTINFO_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0x1B449290)
#define AKOBJECTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4497F0)
#define AKOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B448CD0)

inline static constexpr unsigned int AkObjectInfo_TypeDefinitionIndex = 41152;

class AkObjectInfo : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

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
