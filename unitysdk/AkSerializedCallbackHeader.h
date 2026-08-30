#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EEF9170)
#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEF8F80)
#define AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EEF90A0)
#define AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEF8ED0)
#define AKSERIALIZEDCALLBACKHEADER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EEF95C0)
#define AKSERIALIZEDCALLBACKHEADER_GET_ETYPE_OFFSET UNITYSDK_OFFSET(0x1EEF9510)
#define AKSERIALIZEDCALLBACKHEADER_GET_PNEXT_OFFSET UNITYSDK_OFFSET(0x1EEF9400)
#define AKSERIALIZEDCALLBACKHEADER_GET_PPACKAGE_OFFSET UNITYSDK_OFFSET(0x1EEF9350)
#define AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEF8F20)
#define AKSERIALIZEDCALLBACKHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEF9670)
#define AKSERIALIZEDCALLBACKHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF8EC0)

inline static constexpr unsigned int AkSerializedCallbackHeader_TypeDefinitionIndex = 43594;

class AkSerializedCallbackHeader : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkSerializedCallbackHeader* a1)
	{
		return ((::System::IntPtr(*)(::AkSerializedCallbackHeader*))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::IntPtr get_pPackage()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GET_PPACKAGE_OFFSET))(this);
	}

	::AkSerializedCallbackHeader* get_pNext()
	{
		return ((::AkSerializedCallbackHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GET_PNEXT_OFFSET))(this);
	}

	::AkCallbackType get_eType()
	{
		return ((::AkCallbackType(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GET_ETYPE_OFFSET))(this);
	}

	::System::IntPtr GetData()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GETDATA_OFFSET))(this);
	}
};
