#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_5.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_51E4C05C980E05A0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B63E00)

inline static constexpr unsigned int Class_1_51E4C05C980E05A0_TypeDefinitionIndex = 55004;

class Class_1_51E4C05C980E05A0 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51E4C05C980E05A0_TypeDefinitionIndex)->GetStaticField(0x13690);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Struct_2_52A902145F5BE51A_5>* Field_1_7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51E4C05C980E05A0__CTOR_OFFSET))(this);
	}
};
