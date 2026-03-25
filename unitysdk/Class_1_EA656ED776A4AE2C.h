#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA656ED776A4AE2C_METHOD_1_AE97B9F5EDDC96EC_OFFSET UNITYSDK_OFFSET(0x16508B50)
#define CLASS_1_EA656ED776A4AE2C_METHOD_1_E2B04573429A5790_OFFSET UNITYSDK_OFFSET(0x16508D50)
#define CLASS_1_EA656ED776A4AE2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16508700)

inline static constexpr unsigned int Class_1_EA656ED776A4AE2C_TypeDefinitionIndex = 32138;

class Class_1_EA656ED776A4AE2C : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA656ED776A4AE2C_TypeDefinitionIndex)->GetStaticField(0x1660);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA656ED776A4AE2C_TypeDefinitionIndex)->GetStaticField(0x1668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA656ED776A4AE2C__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_AE97B9F5EDDC96EC(::System::Type* a1)
	{
		return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_EA656ED776A4AE2C_METHOD_1_AE97B9F5EDDC96EC_OFFSET))(a1);
	}

	static ::System::Type* Method_1_E2B04573429A5790(::System::Int32 a1)
	{
		return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA656ED776A4AE2C_METHOD_1_E2B04573429A5790_OFFSET))(a1);
	}
};
