#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_132;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E55E357222706332_CLASS_1_16F55EC9B72A2BE8_METHOD_1_761453C1386E7BBC_OFFSET UNITYSDK_OFFSET(0x159CC190)
#define CLASS_2_E55E357222706332_CLASS_1_16F55EC9B72A2BE8__CTOR_OFFSET UNITYSDK_OFFSET(0x159CC180)

inline static constexpr unsigned int Class_2_E55E357222706332_Class_1_16F55EC9B72A2BE8_TypeDefinitionIndex = 81265;

class Class_2_E55E357222706332_Class_1_16F55EC9B72A2BE8 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_025FF4981524A424_132*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55E357222706332_CLASS_1_16F55EC9B72A2BE8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_761453C1386E7BBC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_E55E357222706332_CLASS_1_16F55EC9B72A2BE8_METHOD_1_761453C1386E7BBC_OFFSET))(this, a1);
	}
};
