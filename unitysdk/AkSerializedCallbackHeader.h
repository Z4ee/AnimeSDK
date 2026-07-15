#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BD81640)
#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD81450)
#define AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BD81570)
#define AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1BD813A0)
#define AKSERIALIZEDCALLBACKHEADER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1BD81A90)
#define AKSERIALIZEDCALLBACKHEADER_GET_ETYPE_OFFSET UNITYSDK_OFFSET(0x1BD819E0)
#define AKSERIALIZEDCALLBACKHEADER_GET_PNEXT_OFFSET UNITYSDK_OFFSET(0x1BD818D0)
#define AKSERIALIZEDCALLBACKHEADER_GET_PPACKAGE_OFFSET UNITYSDK_OFFSET(0x1BD81820)
#define AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1BD813F0)
#define AKSERIALIZEDCALLBACKHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD81B40)
#define AKSERIALIZEDCALLBACKHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD81390)

inline static constexpr unsigned int AkSerializedCallbackHeader_TypeDefinitionIndex = 41983;

class AkSerializedCallbackHeader : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

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
