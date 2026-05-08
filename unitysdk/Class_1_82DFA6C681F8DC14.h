#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_819;
class Class_3_1A2331141ED9C2BE;

#define CLASS_1_82DFA6C681F8DC14_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1123A8E0)
#define CLASS_1_82DFA6C681F8DC14_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x1123AA60)
#define CLASS_1_82DFA6C681F8DC14__CTOR_OFFSET UNITYSDK_OFFSET(0x1123A7D0)

inline static constexpr unsigned int Class_1_82DFA6C681F8DC14_TypeDefinitionIndex = 51813;

class Class_1_82DFA6C681F8DC14 : public ::System::Object
{
public:
	::Class_3_1A2331141ED9C2BE* Field_1_1; // 0x10
	::Class_2_208CC9941471731A_819* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_1A2331141ED9C2BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A2331141ED9C2BE*))((::PBYTE)hIl2Cpp + CLASS_1_82DFA6C681F8DC14__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82DFA6C681F8DC14_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82DFA6C681F8DC14_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
