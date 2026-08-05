#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_A91441E1AAFAB88F_5;
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_1E878B7D29E053D7__CTOR_OFFSET UNITYSDK_OFFSET(0x150C1500)

inline static constexpr unsigned int Class_1_1E878B7D29E053D7_TypeDefinitionIndex = 58725;

class Class_1_1E878B7D29E053D7 : public ::System::Object
{
public:
	::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::Class_3_A91441E1AAFAB88F_5* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E878B7D29E053D7__CTOR_OFFSET))(this);
	}
};
