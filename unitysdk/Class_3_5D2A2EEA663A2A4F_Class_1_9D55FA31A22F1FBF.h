#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/Object.h"

class Class_3_5D2A2EEA663A2A4F;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_3_5D2A2EEA663A2A4F_CLASS_1_9D55FA31A22F1FBF_METHOD_1_2EA1A3DA87D78138_OFFSET UNITYSDK_OFFSET(0x11E9FCB0)
#define CLASS_3_5D2A2EEA663A2A4F_CLASS_1_9D55FA31A22F1FBF__CTOR_OFFSET UNITYSDK_OFFSET(0x11E9F340)

inline static constexpr unsigned int Class_3_5D2A2EEA663A2A4F_Class_1_9D55FA31A22F1FBF_TypeDefinitionIndex = 52398;

class Class_3_5D2A2EEA663A2A4F_Class_1_9D55FA31A22F1FBF : public ::System::Object
{
public:
	::Class_3_5D2A2EEA663A2A4F* Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D2A2EEA663A2A4F_CLASS_1_9D55FA31A22F1FBF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_2EA1A3DA87D78138(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_5D2A2EEA663A2A4F_CLASS_1_9D55FA31A22F1FBF_METHOD_1_2EA1A3DA87D78138_OFFSET))(this, a1);
	}
};
