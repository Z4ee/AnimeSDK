#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_4_D2381C4D1B308685_CLASS_1_6D83D6D65FFDD523_METHOD_1_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0x1584D9E0)
#define CLASS_4_D2381C4D1B308685_CLASS_1_6D83D6D65FFDD523_METHOD_1_E44B3B384EAB8364_OFFSET UNITYSDK_OFFSET(0x1584D870)
#define CLASS_4_D2381C4D1B308685_CLASS_1_6D83D6D65FFDD523__CTOR_OFFSET UNITYSDK_OFFSET(0x1584D860)

inline static constexpr unsigned int Class_4_D2381C4D1B308685_Class_1_6D83D6D65FFDD523_TypeDefinitionIndex = 60165;

class Class_4_D2381C4D1B308685_Class_1_6D83D6D65FFDD523 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_0; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_1; // 0x40
	::System::Int32 Field_1_3; // 0x50
	::System::UInt32 Field_1_2; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D2381C4D1B308685_CLASS_1_6D83D6D65FFDD523__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_E44B3B384EAB8364(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_4_D2381C4D1B308685_CLASS_1_6D83D6D65FFDD523_METHOD_1_E44B3B384EAB8364_OFFSET))(this, a1);
	}

	::System::Void Method_1_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D2381C4D1B308685_CLASS_1_6D83D6D65FFDD523_METHOD_1_98060E4D16CBDFE4_OFFSET))(this);
	}
};
