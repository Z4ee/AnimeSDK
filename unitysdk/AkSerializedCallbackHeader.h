#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19C0C3E0)
#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C0C2C0)
#define AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19C0C370)
#define AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x19C0C200)
#define AKSERIALIZEDCALLBACKHEADER_GETDATA_OFFSET UNITYSDK_OFFSET(0x19C0C970)
#define AKSERIALIZEDCALLBACKHEADER_GET_ETYPE_OFFSET UNITYSDK_OFFSET(0x19C0C870)
#define AKSERIALIZEDCALLBACKHEADER_GET_PNEXT_OFFSET UNITYSDK_OFFSET(0x19C0C710)
#define AKSERIALIZEDCALLBACKHEADER_GET_PPACKAGE_OFFSET UNITYSDK_OFFSET(0x19C0C610)
#define AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x19C0C210)
#define AKSERIALIZEDCALLBACKHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C0CA70)
#define AKSERIALIZEDCALLBACKHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0C1F0)

inline static constexpr unsigned int AkSerializedCallbackHeader_TypeDefinitionIndex = 31462;

class AkSerializedCallbackHeader : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkSerializedCallbackHeader* obj)
	{
		return ((::System::IntPtr(*)(::AkSerializedCallbackHeader*))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET))(this, disposing);
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
