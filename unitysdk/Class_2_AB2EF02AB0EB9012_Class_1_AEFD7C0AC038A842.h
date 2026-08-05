#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F977FB6DE5E12069;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_AB2EF02AB0EB9012_CLASS_1_AEFD7C0AC038A842_METHOD_1_8B4C9FA1787E63C6_OFFSET UNITYSDK_OFFSET(0x1BB697F0)
#define CLASS_2_AB2EF02AB0EB9012_CLASS_1_AEFD7C0AC038A842__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB697E0)

inline static constexpr unsigned int Class_2_AB2EF02AB0EB9012_Class_1_AEFD7C0AC038A842_TypeDefinitionIndex = 41050;

class Class_2_AB2EF02AB0EB9012_Class_1_AEFD7C0AC038A842 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_F977FB6DE5E12069*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_CLASS_1_AEFD7C0AC038A842__CTOR_OFFSET))(this);
	}

	::Class_3_F977FB6DE5E12069* Method_1_8B4C9FA1787E63C6(::System::UInt32 a1)
	{
		return ((::Class_3_F977FB6DE5E12069*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_CLASS_1_AEFD7C0AC038A842_METHOD_1_8B4C9FA1787E63C6_OFFSET))(this, a1);
	}
};
