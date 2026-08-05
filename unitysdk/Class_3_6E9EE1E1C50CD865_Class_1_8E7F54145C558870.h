#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/Object.h"

class Class_3_6E9EE1E1C50CD865;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_6E9EE1E1C50CD865_CLASS_1_8E7F54145C558870_METHOD_1_CFD1BD56305AB1DF_OFFSET UNITYSDK_OFFSET(0x12F0B370)
#define CLASS_3_6E9EE1E1C50CD865_CLASS_1_8E7F54145C558870__CTOR_OFFSET UNITYSDK_OFFSET(0x12F0B360)

inline static constexpr unsigned int Class_3_6E9EE1E1C50CD865_Class_1_8E7F54145C558870_TypeDefinitionIndex = 83255;

class Class_3_6E9EE1E1C50CD865_Class_1_8E7F54145C558870 : public ::System::Object
{
public:
	::Class_3_6E9EE1E1C50CD865* Field_1_0; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x19
	::System::Boolean Field_1_5; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E9EE1E1C50CD865_CLASS_1_8E7F54145C558870__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_CFD1BD56305AB1DF(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_6E9EE1E1C50CD865_CLASS_1_8E7F54145C558870_METHOD_1_CFD1BD56305AB1DF_OFFSET))(this, a1);
	}
};
