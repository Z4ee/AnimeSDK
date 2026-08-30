#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_718B8238EA10D3FF_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x17F3E7A0)
#define CLASS_1_718B8238EA10D3FF_GET_REPORTMESSAGE_OFFSET UNITYSDK_OFFSET(0x17F3E7C0)
#define CLASS_1_718B8238EA10D3FF_GET_SUCCEED_OFFSET UNITYSDK_OFFSET(0x17F3E780)
#define CLASS_1_718B8238EA10D3FF_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x17F3E7B0)
#define CLASS_1_718B8238EA10D3FF_SET_REPORTMESSAGE_OFFSET UNITYSDK_OFFSET(0x17F3E7D0)
#define CLASS_1_718B8238EA10D3FF_SET_SUCCEED_OFFSET UNITYSDK_OFFSET(0x17F3E790)
#define CLASS_1_718B8238EA10D3FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3E7E0)

inline static constexpr unsigned int Class_1_718B8238EA10D3FF_TypeDefinitionIndex = 69360;

class Class_1_718B8238EA10D3FF : public ::System::Object
{
public:
	::System::String* _ReportMessage_k__BackingField; // 0x10
	::System::Int32 _ErrorCode_k__BackingField; // 0x18
	::System::Boolean _Succeed_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Succeed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF_GET_SUCCEED_OFFSET))(this);
	}

	::System::Void set_Succeed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF_SET_SUCCEED_OFFSET))(this, a1);
	}

	::System::Int32 get_ErrorCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF_GET_ERRORCODE_OFFSET))(this);
	}

	::System::Void set_ErrorCode(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF_SET_ERRORCODE_OFFSET))(this, a1);
	}

	::System::String* get_ReportMessage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF_GET_REPORTMESSAGE_OFFSET))(this);
	}

	::System::Void set_ReportMessage(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_718B8238EA10D3FF_SET_REPORTMESSAGE_OFFSET))(this, a1);
	}
};
