#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6E85D0173957C042__CCTOR_OFFSET UNITYSDK_OFFSET(0x152A1AF0)

inline static constexpr unsigned int Class_1_6E85D0173957C042_TypeDefinitionIndex = 59447;

class Class_1_6E85D0173957C042 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x42C40);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x42C48);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x42C50);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x42C58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E85D0173957C042__CCTOR_OFFSET))();
	}
};
