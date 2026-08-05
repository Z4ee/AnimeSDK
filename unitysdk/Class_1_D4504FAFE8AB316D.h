#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_971FE1FD7A4EA745.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_D4504FAFE8AB316D_METHOD_1_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x147A04F0)
#define CLASS_1_D4504FAFE8AB316D_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x147A06C0)
#define CLASS_1_D4504FAFE8AB316D_METHOD_1_C7CEB25BFE6FF659_OFFSET UNITYSDK_OFFSET(0x147A03E0)
#define CLASS_1_D4504FAFE8AB316D__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A0350)

inline static constexpr unsigned int Class_1_D4504FAFE8AB316D_TypeDefinitionIndex = 63773;

class Class_1_D4504FAFE8AB316D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Struct_2_971FE1FD7A4EA745>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Struct_2_971FE1FD7A4EA745>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4504FAFE8AB316D_TypeDefinitionIndex)->GetStaticField(0x44550);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D4504FAFE8AB316D_TypeDefinitionIndex)->GetStaticField(0xFE90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4504FAFE8AB316D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_C7CEB25BFE6FF659(::Struct_2_971FE1FD7A4EA745& a1)
	{
		return ((::System::Void(*)(::Struct_2_971FE1FD7A4EA745&))((::PBYTE)hIl2Cpp + CLASS_1_D4504FAFE8AB316D_METHOD_1_C7CEB25BFE6FF659_OFFSET))(a1);
	}

	static ::System::Void Method_1_95FC878EB184D294()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4504FAFE8AB316D_METHOD_1_95FC878EB184D294_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D4504FAFE8AB316D_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
