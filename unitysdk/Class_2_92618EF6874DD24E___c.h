#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BD954AEAE8F1A57B;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_92618EF6874DD24E___C_METHOD_1_3BC49695969C6816_OFFSET UNITYSDK_OFFSET(0x13D92C50)
#define CLASS_2_92618EF6874DD24E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D92C00)
#define CLASS_2_92618EF6874DD24E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D92C40)

inline static constexpr unsigned int Class_2_92618EF6874DD24E___c_TypeDefinitionIndex = 80013;

class Class_2_92618EF6874DD24E___c : public ::System::Object
{
public:
	static ::Class_2_92618EF6874DD24E___c** StaticGet___9()
	{
		return (::Class_2_92618EF6874DD24E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_92618EF6874DD24E___c_TypeDefinitionIndex)->GetStaticField(0x38EB0);
	}
	static ::System::Comparison_1<::Class_3_BD954AEAE8F1A57B*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_3_BD954AEAE8F1A57B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_92618EF6874DD24E___c_TypeDefinitionIndex)->GetStaticField(0x38EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_92618EF6874DD24E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92618EF6874DD24E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_3BC49695969C6816(::Class_3_BD954AEAE8F1A57B* a1, ::Class_3_BD954AEAE8F1A57B* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*, ::Class_3_BD954AEAE8F1A57B*))((::PBYTE)hIl2Cpp + CLASS_2_92618EF6874DD24E___C_METHOD_1_3BC49695969C6816_OFFSET))(this, a1, a2);
	}
};
