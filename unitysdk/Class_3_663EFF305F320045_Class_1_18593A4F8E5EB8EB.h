#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_57572BE5B21BFA95.h"
#include "unitysdk/System/Object.h"

class Class_3_663EFF305F320045;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_663EFF305F320045_CLASS_1_18593A4F8E5EB8EB_METHOD_1_134C4947EF977166_OFFSET UNITYSDK_OFFSET(0x1683C670)
#define CLASS_3_663EFF305F320045_CLASS_1_18593A4F8E5EB8EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1683C660)

inline static constexpr unsigned int Class_3_663EFF305F320045_Class_1_18593A4F8E5EB8EB_TypeDefinitionIndex = 60945;

class Class_3_663EFF305F320045_Class_1_18593A4F8E5EB8EB : public ::System::Object
{
public:
	::Class_3_663EFF305F320045* Field_1_0; // 0x10
	::Struct_2_57572BE5B21BFA95 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_663EFF305F320045_CLASS_1_18593A4F8E5EB8EB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_134C4947EF977166(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_663EFF305F320045_CLASS_1_18593A4F8E5EB8EB_METHOD_1_134C4947EF977166_OFFSET))(this, a1);
	}
};
