#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_57572BE5B21BFA95.h"
#include "unitysdk/System/Object.h"

class Class_4_7F7013B2F71C3B45;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_4_7F7013B2F71C3B45_CLASS_1_1862FA4F8E66A0A0_1_METHOD_1_134C4947EF977166_OFFSET UNITYSDK_OFFSET(0x16DE9A00)
#define CLASS_4_7F7013B2F71C3B45_CLASS_1_1862FA4F8E66A0A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16DE99F0)

inline static constexpr unsigned int Class_4_7F7013B2F71C3B45_Class_1_1862FA4F8E66A0A0_1_TypeDefinitionIndex = 69444;

class Class_4_7F7013B2F71C3B45_Class_1_1862FA4F8E66A0A0_1 : public ::System::Object
{
public:
	::Class_4_7F7013B2F71C3B45* Field_1_0; // 0x10
	::Struct_2_57572BE5B21BFA95 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45_CLASS_1_1862FA4F8E66A0A0_1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_134C4947EF977166(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45_CLASS_1_1862FA4F8E66A0A0_1_METHOD_1_134C4947EF977166_OFFSET))(this, a1);
	}
};
