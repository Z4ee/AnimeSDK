#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_401;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_06412F5C067EBE07_CLASS_1_5C50B82496C1E53E_METHOD_1_B210FC5EAA7247AC_OFFSET UNITYSDK_OFFSET(0x14C6ECC0)
#define CLASS_2_06412F5C067EBE07_CLASS_1_5C50B82496C1E53E__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6ECB0)

inline static constexpr unsigned int Class_2_06412F5C067EBE07_Class_1_5C50B82496C1E53E_TypeDefinitionIndex = 80034;

class Class_2_06412F5C067EBE07_Class_1_5C50B82496C1E53E : public ::System::Object
{
public:
	::System::Action_1<::Class_3_025FF4981524A424_401*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06412F5C067EBE07_CLASS_1_5C50B82496C1E53E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B210FC5EAA7247AC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_06412F5C067EBE07_CLASS_1_5C50B82496C1E53E_METHOD_1_B210FC5EAA7247AC_OFFSET))(this, a1);
	}
};
