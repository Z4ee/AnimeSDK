#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70DC0FE443A03F1D.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_32C8CA47E29C52CD_1_METHOD_1_E8ED4C4AA66BB890_OFFSET UNITYSDK_OFFSET(0x1B38FCA0)
#define CLASS_1_32C8CA47E29C52CD_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B38FE30)
#define CLASS_1_32C8CA47E29C52CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38FE20)

inline static constexpr unsigned int Class_1_32C8CA47E29C52CD_1_TypeDefinitionIndex = 88543;

class Class_1_32C8CA47E29C52CD_1 : public ::System::Object
{
public:
	static ::Class_1_32C8CA47E29C52CD_1** StaticGet_Field_1_0()
	{
		return (::Class_1_32C8CA47E29C52CD_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32C8CA47E29C52CD_1_TypeDefinitionIndex)->GetStaticField(0x4DC10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD_1__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_70DC0FE443A03F1D>* Method_1_E8ED4C4AA66BB890()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_70DC0FE443A03F1D>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C8CA47E29C52CD_1_METHOD_1_E8ED4C4AA66BB890_OFFSET))(this);
	}
};
