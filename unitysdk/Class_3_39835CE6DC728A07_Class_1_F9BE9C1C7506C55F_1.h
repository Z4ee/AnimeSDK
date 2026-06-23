#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_39835CE6DC728A07_Struct_2_AA4EE15A8D4DB005_4.h"
#include "unitysdk/Struct_2_746D9B6C92926E1E.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

class Class_1_EF55FAE64F654454;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_39835CE6DC728A07_CLASS_1_F9BE9C1C7506C55F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE6A70)

inline static constexpr unsigned int Class_3_39835CE6DC728A07_Class_1_F9BE9C1C7506C55F_1_TypeDefinitionIndex = 84333;

class Class_3_39835CE6DC728A07_Class_1_F9BE9C1C7506C55F_1 : public ::System::Object
{
public:
	::Struct_2_D89177B577188692 Field_1_2; // 0x10
	::Struct_2_746D9B6C92926E1E Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::Class_3_39835CE6DC728A07_Struct_2_AA4EE15A8D4DB005_4>* Field_1_0; // 0x48
	::Class_1_EF55FAE64F654454* Field_1_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_39835CE6DC728A07_CLASS_1_F9BE9C1C7506C55F_1__CTOR_OFFSET))(this);
	}
};
