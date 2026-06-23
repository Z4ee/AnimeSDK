#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_32.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_154.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_99753BCBD4BECE1D_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x18EF9EC0)
#define CLASS_2_99753BCBD4BECE1D__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF9EB0)

inline static constexpr unsigned int Class_2_99753BCBD4BECE1D_TypeDefinitionIndex = 9274;

class Class_2_99753BCBD4BECE1D : public ::Class_1_EBCA2A4357C4C8BF_32
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_2_0; // 0x58

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_154 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_154, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_99753BCBD4BECE1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99753BCBD4BECE1D_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}
};
