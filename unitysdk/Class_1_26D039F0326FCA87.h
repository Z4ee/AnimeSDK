#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_26D039F0326FCA87_METHOD_1_1B3596FE02CCBEBF_OFFSET UNITYSDK_OFFSET(0x11C92BB0)
#define CLASS_1_26D039F0326FCA87__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C92890)

inline static constexpr unsigned int Class_1_26D039F0326FCA87_TypeDefinitionIndex = 60500;

class Class_1_26D039F0326FCA87 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26D039F0326FCA87_TypeDefinitionIndex)->GetStaticField(0x45790);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26D039F0326FCA87_TypeDefinitionIndex)->GetStaticField(0x45798);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26D039F0326FCA87_TypeDefinitionIndex)->GetStaticField(0x457A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26D039F0326FCA87__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>* Method_1_1B3596FE02CCBEBF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_26D039F0326FCA87_METHOD_1_1B3596FE02CCBEBF_OFFSET))();
	}
};
