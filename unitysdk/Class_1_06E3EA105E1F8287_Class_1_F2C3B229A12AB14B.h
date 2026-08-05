#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_06E3EA105E1F8287_CLASS_1_F2C3B229A12AB14B_METHOD_1_2B9EF8074D37A577_OFFSET UNITYSDK_OFFSET(0x11437C30)
#define CLASS_1_06E3EA105E1F8287_CLASS_1_F2C3B229A12AB14B_METHOD_1_3AF4EA528FFCF634_OFFSET UNITYSDK_OFFSET(0x11437E20)
#define CLASS_1_06E3EA105E1F8287_CLASS_1_F2C3B229A12AB14B__CTOR_OFFSET UNITYSDK_OFFSET(0x11437C20)

inline static constexpr unsigned int Class_1_06E3EA105E1F8287_Class_1_F2C3B229A12AB14B_TypeDefinitionIndex = 73523;

class Class_1_06E3EA105E1F8287_Class_1_F2C3B229A12AB14B : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_F2C3B229A12AB14B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2B9EF8074D37A577(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_F2C3B229A12AB14B_METHOD_1_2B9EF8074D37A577_OFFSET))(this, a1);
	}

	::System::Void Method_1_3AF4EA528FFCF634(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_1_06E3EA105E1F8287_CLASS_1_F2C3B229A12AB14B_METHOD_1_3AF4EA528FFCF634_OFFSET))(this, a1);
	}
};
