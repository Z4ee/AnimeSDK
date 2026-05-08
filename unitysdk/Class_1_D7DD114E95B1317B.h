#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D7DD114E95B1317B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B09BE0)

inline static constexpr unsigned int Class_1_D7DD114E95B1317B_TypeDefinitionIndex = 43187;

class Class_1_D7DD114E95B1317B : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Share::EItemType>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::Share::EItemType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7DD114E95B1317B_TypeDefinitionIndex)->GetStaticField(0x42720);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D7DD114E95B1317B_TypeDefinitionIndex)->GetStaticField(0x42728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D7DD114E95B1317B__CCTOR_OFFSET))();
	}
};
