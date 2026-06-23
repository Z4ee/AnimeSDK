#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70DC0FE443A03F1D.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_32C8CA47E29C52CD_METHOD_1_C7A394732996F515_OFFSET UNITYSDK_OFFSET(0x11C06B40)
#define CLASS_1_32C8CA47E29C52CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C06EA0)
#define CLASS_1_32C8CA47E29C52CD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C06E90)

inline static constexpr unsigned int Class_1_32C8CA47E29C52CD_TypeDefinitionIndex = 62096;

class Class_1_32C8CA47E29C52CD : public ::System::Object
{
public:
	static ::Class_1_32C8CA47E29C52CD** StaticGet_Field_1_0()
	{
		return (::Class_1_32C8CA47E29C52CD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32C8CA47E29C52CD_TypeDefinitionIndex)->GetStaticField(0x3BCB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_70DC0FE443A03F1D>* Method_1_C7A394732996F515()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_70DC0FE443A03F1D>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD_METHOD_1_C7A394732996F515_OFFSET))(this);
	}
};
