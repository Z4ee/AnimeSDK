#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKEXTERNALSOURCEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B433400)
#define AKEXTERNALSOURCEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4334B0)
#define AKEXTERNALSOURCEINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B432FA0)
#define AKEXTERNALSOURCEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B432E80)
#define AKEXTERNALSOURCEINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B432F30)
#define AKEXTERNALSOURCEINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B432D40)
#define AKEXTERNALSOURCEINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1B4335D0)
#define AKEXTERNALSOURCEINFO_GET_IDCODEC_OFFSET UNITYSDK_OFFSET(0x1B4338B0)
#define AKEXTERNALSOURCEINFO_GET_IDFILE_OFFSET UNITYSDK_OFFSET(0x1B433E90)
#define AKEXTERNALSOURCEINFO_GET_IEXTERNALSRCCOOKIE_OFFSET UNITYSDK_OFFSET(0x1B433740)
#define AKEXTERNALSOURCEINFO_GET_PINMEMORY_OFFSET UNITYSDK_OFFSET(0x1B433BB0)
#define AKEXTERNALSOURCEINFO_GET_SZFILE_OFFSET UNITYSDK_OFFSET(0x1B433A20)
#define AKEXTERNALSOURCEINFO_GET_UIMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B433D20)
#define AKEXTERNALSOURCEINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B432D90)
#define AKEXTERNALSOURCEINFO_SET_IDCODEC_OFFSET UNITYSDK_OFFSET(0x1B4337F0)
#define AKEXTERNALSOURCEINFO_SET_IDFILE_OFFSET UNITYSDK_OFFSET(0x1B433DD0)
#define AKEXTERNALSOURCEINFO_SET_IEXTERNALSRCCOOKIE_OFFSET UNITYSDK_OFFSET(0x1B433680)
#define AKEXTERNALSOURCEINFO_SET_PINMEMORY_OFFSET UNITYSDK_OFFSET(0x1B433AF0)
#define AKEXTERNALSOURCEINFO_SET_SZFILE_OFFSET UNITYSDK_OFFSET(0x1B433960)
#define AKEXTERNALSOURCEINFO_SET_UIMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B433C60)
#define AKEXTERNALSOURCEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B433180)
#define AKEXTERNALSOURCEINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B433200)
#define AKEXTERNALSOURCEINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B4332B0)
#define AKEXTERNALSOURCEINFO__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B433360)
#define AKEXTERNALSOURCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B432D30)

inline static constexpr unsigned int AkExternalSourceInfo_TypeDefinitionIndex = 41122;

class AkExternalSourceInfo : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::IntPtr a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_3(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_4(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO__CTOR_4_OFFSET))(this, a1, a2, a3);
	}

	static ::System::IntPtr getCPtr(::AkExternalSourceInfo* a1)
	{
		return ((::System::IntPtr(*)(::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_CLEAR_OFFSET))(this);
	}

	::System::Void Clone(::AkExternalSourceInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkExternalSourceInfo*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_CLONE_OFFSET))(this, a1);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GETSIZEOF_OFFSET))();
	}

	::System::Void set_iExternalSrcCookie(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_IEXTERNALSRCCOOKIE_OFFSET))(this, a1);
	}

	::System::UInt32 get_iExternalSrcCookie()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_IEXTERNALSRCCOOKIE_OFFSET))(this);
	}

	::System::Void set_idCodec(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_IDCODEC_OFFSET))(this, a1);
	}

	::System::UInt32 get_idCodec()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_IDCODEC_OFFSET))(this);
	}

	::System::Void set_szFile(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_SZFILE_OFFSET))(this, a1);
	}

	::System::String* get_szFile()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_SZFILE_OFFSET))(this);
	}

	::System::Void set_pInMemory(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_PINMEMORY_OFFSET))(this, a1);
	}

	::System::IntPtr get_pInMemory()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_PINMEMORY_OFFSET))(this);
	}

	::System::Void set_uiMemorySize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_UIMEMORYSIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uiMemorySize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_UIMEMORYSIZE_OFFSET))(this);
	}

	::System::Void set_idFile(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_SET_IDFILE_OFFSET))(this, a1);
	}

	::System::UInt32 get_idFile()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEXTERNALSOURCEINFO_GET_IDFILE_OFFSET))(this);
	}
};
