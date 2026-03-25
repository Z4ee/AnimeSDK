#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D6D8D891CDDE5DED_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x8A6C810)
#define CLASS_1_D6D8D891CDDE5DED_GET_REPORTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8A6C830)
#define CLASS_1_D6D8D891CDDE5DED_GET_SUCCEED_OFFSET UNITYSDK_OFFSET(0x8A6C7F0)
#define CLASS_1_D6D8D891CDDE5DED_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x8A6C820)
#define CLASS_1_D6D8D891CDDE5DED_SET_REPORTMESSAGE_OFFSET UNITYSDK_OFFSET(0x8A6C840)
#define CLASS_1_D6D8D891CDDE5DED_SET_SUCCEED_OFFSET UNITYSDK_OFFSET(0x8A6C800)
#define CLASS_1_D6D8D891CDDE5DED__CTOR_OFFSET UNITYSDK_OFFSET(0x8A6C850)

inline static constexpr unsigned int Class_1_D6D8D891CDDE5DED_TypeDefinitionIndex = 56717;

class Class_1_D6D8D891CDDE5DED : public ::System::Object
{
public:
	::System::String* _ReportMessage_k__BackingField; // 0x10
	::System::Boolean _Succeed_k__BackingField; // 0x18
	::System::Int32 _ErrorCode_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Succeed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED_GET_SUCCEED_OFFSET))(this);
	}

	::System::Void set_Succeed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED_SET_SUCCEED_OFFSET))(this, value);
	}

	::System::Int32 get_ErrorCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED_GET_ERRORCODE_OFFSET))(this);
	}

	::System::Void set_ErrorCode(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED_SET_ERRORCODE_OFFSET))(this, value);
	}

	::System::String* get_ReportMessage()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED_GET_REPORTMESSAGE_OFFSET))(this);
	}

	::System::Void set_ReportMessage(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6D8D891CDDE5DED_SET_REPORTMESSAGE_OFFSET))(this, value);
	}
};
