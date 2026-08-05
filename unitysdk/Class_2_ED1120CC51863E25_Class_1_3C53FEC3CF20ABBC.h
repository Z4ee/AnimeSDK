#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_ED1120CC51863E25_CLASS_1_3C53FEC3CF20ABBC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x138FCDE0)
#define CLASS_2_ED1120CC51863E25_CLASS_1_3C53FEC3CF20ABBC_METHOD_1_AC4DDF9BF4BFC2C9_OFFSET UNITYSDK_OFFSET(0x138FF720)
#define CLASS_2_ED1120CC51863E25_CLASS_1_3C53FEC3CF20ABBC__CTOR_OFFSET UNITYSDK_OFFSET(0x13903050)

inline static constexpr unsigned int Class_2_ED1120CC51863E25_Class_1_3C53FEC3CF20ABBC_TypeDefinitionIndex = 64848;

class Class_2_ED1120CC51863E25_Class_1_3C53FEC3CF20ABBC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1120CC51863E25_CLASS_1_3C53FEC3CF20ABBC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1120CC51863E25_CLASS_1_3C53FEC3CF20ABBC_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_1_AC4DDF9BF4BFC2C9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ED1120CC51863E25_CLASS_1_3C53FEC3CF20ABBC_METHOD_1_AC4DDF9BF4BFC2C9_OFFSET))(this, a1);
	}
};
