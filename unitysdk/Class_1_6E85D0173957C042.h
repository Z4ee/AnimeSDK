#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6E85D0173957C042__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8B3F20)

inline static constexpr unsigned int Class_1_6E85D0173957C042_TypeDefinitionIndex = 62286;

class Class_1_6E85D0173957C042 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_DBLNAGCBLOO()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x19E90);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_OGKFHLIILIN()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x19E98);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_ACALFDBODOD()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x19EA0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_IPOPCFKIPEK()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E85D0173957C042_TypeDefinitionIndex)->GetStaticField(0x19EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E85D0173957C042__CCTOR_OFFSET))();
	}
};
