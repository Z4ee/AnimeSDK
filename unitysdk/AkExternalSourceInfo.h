#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKEXTERNALSOURCEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5E9620)
#define AKEXTERNALSOURCEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5E96D0)
#define AKEXTERNALSOURCEINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5E9200)
#define AKEXTERNALSOURCEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5E9110)
#define AKEXTERNALSOURCEINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5E9190)
#define AKEXTERNALSOURCEINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E9000)
#define AKEXTERNALSOURCEINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1A5E97F0)
#define AKEXTERNALSOURCEINFO_GET_IDCODEC_OFFSET UNITYSDK_OFFSET(0x1A5E9AD0)
#define AKEXTERNALSOURCEINFO_GET_IDFILE_OFFSET UNITYSDK_OFFSET(0x1A5EA0B0)
#define AKEXTERNALSOURCEINFO_GET_IEXTERNALSRCCOOKIE_OFFSET UNITYSDK_OFFSET(0x1A5E9960)
#define AKEXTERNALSOURCEINFO_GET_PINMEMORY_OFFSET UNITYSDK_OFFSET(0x1A5E9DD0)
#define AKEXTERNALSOURCEINFO_GET_SZFILE_OFFSET UNITYSDK_OFFSET(0x1A5E9C40)
#define AKEXTERNALSOURCEINFO_GET_UIMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1A5E9F40)
#define AKEXTERNALSOURCEINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5E9050)
#define AKEXTERNALSOURCEINFO_SET_IDCODEC_OFFSET UNITYSDK_OFFSET(0x1A5E9A10)
#define AKEXTERNALSOURCEINFO_SET_IDFILE_OFFSET UNITYSDK_OFFSET(0x1A5E9FF0)
#define AKEXTERNALSOURCEINFO_SET_IEXTERNALSRCCOOKIE_OFFSET UNITYSDK_OFFSET(0x1A5E98A0)
#define AKEXTERNALSOURCEINFO_SET_PINMEMORY_OFFSET UNITYSDK_OFFSET(0x1A5E9D10)
#define AKEXTERNALSOURCEINFO_SET_SZFILE_OFFSET UNITYSDK_OFFSET(0x1A5E9B80)
#define AKEXTERNALSOURCEINFO_SET_UIMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1A5E9E80)
#define AKEXTERNALSOURCEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5E93A0)
#define AKEXTERNALSOURCEINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A5E9420)
#define AKEXTERNALSOURCEINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A5E94D0)
#define AKEXTERNALSOURCEINFO__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A5E9580)
#define AKEXTERNALSOURCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E8FF0)

inline static constexpr unsigned int AkExternalSourceInfo_TypeDefinitionIndex = 40295;

class AkExternalSourceInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::IntPtr in_pInMemory, ::System::UInt32 in_uiMemorySize, ::System::UInt32 in_iExternalSrcCookie, ::System::UInt32 in_idCodec)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_2_OFFSET))(this, in_pInMemory, in_uiMemorySize, in_iExternalSrcCookie, in_idCodec);
	}

	::System::Void _ctor_3(::System::String* in_pszFileName, ::System::UInt32 in_iExternalSrcCookie, ::System::UInt32 in_idCodec)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_3_OFFSET))(this, in_pszFileName, in_iExternalSrcCookie, in_idCodec);
	}

	::System::Void _ctor_4(::System::UInt32 in_idFile, ::System::UInt32 in_iExternalSrcCookie, ::System::UInt32 in_idCodec)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_4_OFFSET))(this, in_idFile, in_iExternalSrcCookie, in_idCodec);
	}

	static ::System::IntPtr getCPtr(::AkExternalSourceInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_CLEAR_OFFSET))(this);
	}

	::System::Void Clone(::AkExternalSourceInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_CLONE_OFFSET))(this, other);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GETSIZEOF_OFFSET))();
	}

	::System::Void set_iExternalSrcCookie(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_IEXTERNALSRCCOOKIE_OFFSET))(this, value);
	}

	::System::UInt32 get_iExternalSrcCookie()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_IEXTERNALSRCCOOKIE_OFFSET))(this);
	}

	::System::Void set_idCodec(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_IDCODEC_OFFSET))(this, value);
	}

	::System::UInt32 get_idCodec()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_IDCODEC_OFFSET))(this);
	}

	::System::Void set_szFile(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_SZFILE_OFFSET))(this, value);
	}

	::System::String* get_szFile()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_SZFILE_OFFSET))(this);
	}

	::System::Void set_pInMemory(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_PINMEMORY_OFFSET))(this, value);
	}

	::System::IntPtr get_pInMemory()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_PINMEMORY_OFFSET))(this);
	}

	::System::Void set_uiMemorySize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_UIMEMORYSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uiMemorySize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_UIMEMORYSIZE_OFFSET))(this);
	}

	::System::Void set_idFile(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_IDFILE_OFFSET))(this, value);
	}

	::System::UInt32 get_idFile()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_IDFILE_OFFSET))(this);
	}
};
