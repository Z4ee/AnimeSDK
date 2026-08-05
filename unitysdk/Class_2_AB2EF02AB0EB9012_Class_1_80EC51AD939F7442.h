#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AB2EF02AB0EB9012;
class Class_2_C6B63E29A82327F2;
class Class_3_2C6CCFCBF8D85EF4;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_AB2EF02AB0EB9012_CLASS_1_80EC51AD939F7442_COMPARE_OFFSET UNITYSDK_OFFSET(0x123923B0)
#define CLASS_2_AB2EF02AB0EB9012_CLASS_1_80EC51AD939F7442__CTOR_OFFSET UNITYSDK_OFFSET(0x12392000)

inline static constexpr unsigned int Class_2_AB2EF02AB0EB9012_Class_1_80EC51AD939F7442_TypeDefinitionIndex = 41035;

class Class_2_AB2EF02AB0EB9012_Class_1_80EC51AD939F7442 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_3_2C6CCFCBF8D85EF4*>* Field_1_7; // 0x10
	::Class_2_AB2EF02AB0EB9012* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_CLASS_1_80EC51AD939F7442__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Compare(::Class_2_C6B63E29A82327F2* a1, ::Class_2_C6B63E29A82327F2* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_C6B63E29A82327F2*, ::Class_2_C6B63E29A82327F2*))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_CLASS_1_80EC51AD939F7442_COMPARE_OFFSET))(this, a1, a2);
	}
};
