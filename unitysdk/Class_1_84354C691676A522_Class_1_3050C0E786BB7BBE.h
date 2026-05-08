#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3310A831794D334B;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_84354C691676A522_CLASS_1_3050C0E786BB7BBE_METHOD_1_8422ABC65E83BF12_OFFSET UNITYSDK_OFFSET(0x178ECA40)
#define CLASS_1_84354C691676A522_CLASS_1_3050C0E786BB7BBE__CTOR_OFFSET UNITYSDK_OFFSET(0x178ECA30)

inline static constexpr unsigned int Class_1_84354C691676A522_Class_1_3050C0E786BB7BBE_TypeDefinitionIndex = 64862;

class Class_1_84354C691676A522_Class_1_3050C0E786BB7BBE : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::Class_1_3310A831794D334B*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_CLASS_1_3050C0E786BB7BBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8422ABC65E83BF12(::Class_1_3310A831794D334B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3310A831794D334B*))((::PBYTE)hIl2Cpp + CLASS_1_84354C691676A522_CLASS_1_3050C0E786BB7BBE_METHOD_1_8422ABC65E83BF12_OFFSET))(this, a1);
	}
};
