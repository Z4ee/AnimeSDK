#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_FA40472F435DD51A.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_0BCE4BE98C879308_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11FC8830)
#define CLASS_1_0BCE4BE98C879308_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11FC86D0)
#define CLASS_1_0BCE4BE98C879308_1_METHOD_1_3DFFEA8885EDBFF0_OFFSET UNITYSDK_OFFSET(0x11FC8680)
#define CLASS_1_0BCE4BE98C879308_1_METHOD_1_5C90761F2864F0A3_OFFSET UNITYSDK_OFFSET(0x11FC8900)
#define CLASS_1_0BCE4BE98C879308_1_METHOD_1_8C36CE7F2750DC91_OFFSET UNITYSDK_OFFSET(0x11FC87D0)
#define CLASS_1_0BCE4BE98C879308_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC8950)

inline static constexpr unsigned int Class_1_0BCE4BE98C879308_1_TypeDefinitionIndex = 61662;

class Class_1_0BCE4BE98C879308_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3DFFEA8885EDBFF0(::Struct_2_FA40472F435DD51A& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA40472F435DD51A&))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_1_METHOD_1_3DFFEA8885EDBFF0_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5C90761F2864F0A3(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_1_METHOD_1_5C90761F2864F0A3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8C36CE7F2750DC91(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_0BCE4BE98C879308_1_METHOD_1_8C36CE7F2750DC91_OFFSET))(this, a1);
	}
};
