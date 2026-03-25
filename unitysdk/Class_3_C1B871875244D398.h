#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_90C3FAB661E5C263.h"

class Class_1_2CAAA2FDF9170110;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_C1B871875244D398_METHOD_3_451603B8CE68E63D_OFFSET UNITYSDK_OFFSET(0x99D6430)
#define CLASS_3_C1B871875244D398_METHOD_3_7C3D40820FAF9F39_OFFSET UNITYSDK_OFFSET(0x99D63C0)
#define CLASS_3_C1B871875244D398__CTOR_OFFSET UNITYSDK_OFFSET(0x99D6670)

inline static constexpr unsigned int Class_3_C1B871875244D398_TypeDefinitionIndex = 46386;

class Class_3_C1B871875244D398 : public ::Class_2_90C3FAB661E5C263
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1B871875244D398__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7C3D40820FAF9F39(::Class_1_2CAAA2FDF9170110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_3_C1B871875244D398_METHOD_3_7C3D40820FAF9F39_OFFSET))(this, a1);
	}

	::System::Void Method_3_451603B8CE68E63D(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_C1B871875244D398_METHOD_3_451603B8CE68E63D_OFFSET))(this, a1);
	}
};
