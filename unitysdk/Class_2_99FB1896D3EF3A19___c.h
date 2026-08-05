#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BBC8043D4DD55A71;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_99FB1896D3EF3A19___C_METHOD_1_25F44760C5F7A595_OFFSET UNITYSDK_OFFSET(0x1468CC10)
#define CLASS_2_99FB1896D3EF3A19___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1468CBC0)
#define CLASS_2_99FB1896D3EF3A19___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1468CC00)

inline static constexpr unsigned int Class_2_99FB1896D3EF3A19___c_TypeDefinitionIndex = 71904;

class Class_2_99FB1896D3EF3A19___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_BBC8043D4DD55A71*, ::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_3_BBC8043D4DD55A71*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_99FB1896D3EF3A19___c_TypeDefinitionIndex)->GetStaticField(0x50900);
	}
	static ::Class_2_99FB1896D3EF3A19___c** StaticGet___9()
	{
		return (::Class_2_99FB1896D3EF3A19___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_99FB1896D3EF3A19___c_TypeDefinitionIndex)->GetStaticField(0x50908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_25F44760C5F7A595(::Class_3_BBC8043D4DD55A71* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_BBC8043D4DD55A71*))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19___C_METHOD_1_25F44760C5F7A595_OFFSET))(this, a1);
	}
};
