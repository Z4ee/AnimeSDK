#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B4FF51A33B9736E7.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D687BC3E90D0B857__CCTOR_OFFSET UNITYSDK_OFFSET(0x134DA480)

inline static constexpr unsigned int Class_1_D687BC3E90D0B857_TypeDefinitionIndex = 59507;

class Class_1_D687BC3E90D0B857 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_B4FF51A33B9736E7>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_B4FF51A33B9736E7>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D687BC3E90D0B857_TypeDefinitionIndex)->GetStaticField(0x2FC90);
	}
	static ::MoleMole::GameplayTag* StaticGet_Field_1_2()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D687BC3E90D0B857_TypeDefinitionIndex)->GetStaticField(0x2FC98);
	}
	static ::MoleMole::GameplayTag* StaticGet_Field_1_1()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D687BC3E90D0B857_TypeDefinitionIndex)->GetStaticField(0x2FCA8);
	}
	static ::Enum_3_B4FF51A33B9736E7* StaticGet_Field_1_3()
	{
		return (::Enum_3_B4FF51A33B9736E7*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D687BC3E90D0B857_TypeDefinitionIndex)->GetStaticField(0xB9B0);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D687BC3E90D0B857__CCTOR_OFFSET))();
	}
};
