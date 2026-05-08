#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B34301746BFA36C2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E621E51D351EB960_CLASS_1_AEFD7C0AC038A842_METHOD_1_8B4C9FA1787E63C6_OFFSET UNITYSDK_OFFSET(0x132CC310)
#define CLASS_2_E621E51D351EB960_CLASS_1_AEFD7C0AC038A842__CTOR_OFFSET UNITYSDK_OFFSET(0x132CC300)

inline static constexpr unsigned int Class_2_E621E51D351EB960_Class_1_AEFD7C0AC038A842_TypeDefinitionIndex = 54282;

class Class_2_E621E51D351EB960_Class_1_AEFD7C0AC038A842 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B34301746BFA36C2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_CLASS_1_AEFD7C0AC038A842__CTOR_OFFSET))(this);
	}

	::Class_3_B34301746BFA36C2* Method_1_8B4C9FA1787E63C6(::System::UInt32 a1)
	{
		return ((::Class_3_B34301746BFA36C2*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E621E51D351EB960_CLASS_1_AEFD7C0AC038A842_METHOD_1_8B4C9FA1787E63C6_OFFSET))(this, a1);
	}
};
