#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13B43DCF703FB24C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8C6790)
#define CLASS_1_13B43DCF703FB24C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C6700)

inline static constexpr unsigned int Class_1_13B43DCF703FB24C_TypeDefinitionIndex = 48808;

class Class_1_13B43DCF703FB24C : public ::System::Object
{
public:
	static ::Class_1_13B43DCF703FB24C** StaticGet_Field_1_1()
	{
		return (::Class_1_13B43DCF703FB24C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13B43DCF703FB24C_TypeDefinitionIndex)->GetStaticField(0x3E450);
	}
	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* Field_1_4; // 0x18
	::System::Int64 Field_1_7; // 0x20
	::System::Int64 Field_1_0; // 0x28
	::System::Int64 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13B43DCF703FB24C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13B43DCF703FB24C__CCTOR_OFFSET))();
	}
};
