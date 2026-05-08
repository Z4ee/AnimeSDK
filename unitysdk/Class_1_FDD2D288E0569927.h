#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_FDD2D288E0569927_METHOD_1_46B58ADF1ED682FC_OFFSET UNITYSDK_OFFSET(0x1014B5E0)
#define CLASS_1_FDD2D288E0569927_METHOD_1_B27DD343FF04AC74_OFFSET UNITYSDK_OFFSET(0x1014B4E0)
#define CLASS_1_FDD2D288E0569927_METHOD_1_C1254194FF3DB77C_OFFSET UNITYSDK_OFFSET(0x1014B550)
#define CLASS_1_FDD2D288E0569927_METHOD_1_CD43C24E0C369610_OFFSET UNITYSDK_OFFSET(0x1014B720)
#define CLASS_1_FDD2D288E0569927__CTOR_OFFSET UNITYSDK_OFFSET(0x1014B4D0)

inline static constexpr unsigned int Class_1_FDD2D288E0569927_TypeDefinitionIndex = 45501;

class Class_1_FDD2D288E0569927 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDD2D288E0569927__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B27DD343FF04AC74(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_FDD2D288E0569927_METHOD_1_B27DD343FF04AC74_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_C1254194FF3DB77C()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDD2D288E0569927_METHOD_1_C1254194FF3DB77C_OFFSET))(this);
	}

	::System::Boolean Method_1_46B58ADF1ED682FC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FDD2D288E0569927_METHOD_1_46B58ADF1ED682FC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CD43C24E0C369610(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_FDD2D288E0569927_METHOD_1_CD43C24E0C369610_OFFSET))(this, a1);
	}
};
