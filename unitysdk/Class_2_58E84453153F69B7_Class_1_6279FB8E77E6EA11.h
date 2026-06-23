#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_0A2A241FA995454D;
namespace System { class Action; }

#define CLASS_2_58E84453153F69B7_CLASS_1_6279FB8E77E6EA11_METHOD_1_F3EF2941D2662CD5_OFFSET UNITYSDK_OFFSET(0x177597C0)
#define CLASS_2_58E84453153F69B7_CLASS_1_6279FB8E77E6EA11__CTOR_OFFSET UNITYSDK_OFFSET(0x177597B0)

inline static constexpr unsigned int Class_2_58E84453153F69B7_Class_1_6279FB8E77E6EA11_TypeDefinitionIndex = 51200;

class Class_2_58E84453153F69B7_Class_1_6279FB8E77E6EA11 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::Class_1_0A2A241FA995454D* Field_1_0; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E84453153F69B7_CLASS_1_6279FB8E77E6EA11__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F3EF2941D2662CD5(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_58E84453153F69B7_CLASS_1_6279FB8E77E6EA11_METHOD_1_F3EF2941D2662CD5_OFFSET))(this, a1);
	}
};
