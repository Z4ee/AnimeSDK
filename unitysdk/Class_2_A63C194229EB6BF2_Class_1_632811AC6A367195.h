#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_AAC9B4B6713CDE1B;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_2_A63C194229EB6BF2_CLASS_1_632811AC6A367195_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x1431C080)
#define CLASS_2_A63C194229EB6BF2_CLASS_1_632811AC6A367195_METHOD_1_605C677557F96336_OFFSET UNITYSDK_OFFSET(0x1431BF50)
#define CLASS_2_A63C194229EB6BF2_CLASS_1_632811AC6A367195__CTOR_OFFSET UNITYSDK_OFFSET(0x1431BF40)

inline static constexpr unsigned int Class_2_A63C194229EB6BF2_Class_1_632811AC6A367195_TypeDefinitionIndex = 62439;

class Class_2_A63C194229EB6BF2_Class_1_632811AC6A367195 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Action_1<::Class_1_27F786FF2A30778C<::Class_3_AAC9B4B6713CDE1B*>*>* Field_1_0; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A63C194229EB6BF2_CLASS_1_632811AC6A367195__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_605C677557F96336(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A63C194229EB6BF2_CLASS_1_632811AC6A367195_METHOD_1_605C677557F96336_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_A63C194229EB6BF2_CLASS_1_632811AC6A367195_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}
};
