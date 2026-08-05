#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_6B97E8E979FD417C;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_1_METHOD_1_A7FD041C3B0AC101_OFFSET UNITYSDK_OFFSET(0x145B2740)
#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_1_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x145B2730)
#define CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_1__CTOR_OFFSET UNITYSDK_OFFSET(0x145B2720)

inline static constexpr unsigned int Class_2_945315E4BCB7843F_Class_1_0E196D68D9587069_1_TypeDefinitionIndex = 59903;

class Class_2_945315E4BCB7843F_Class_1_0E196D68D9587069_1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_1_27F786FF2A30778C<::Class_3_6B97E8E979FD417C*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_1_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_A7FD041C3B0AC101(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_945315E4BCB7843F_CLASS_1_0E196D68D9587069_1_METHOD_1_A7FD041C3B0AC101_OFFSET))(this, a1);
	}
};
