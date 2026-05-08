#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_252;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_86B3C791290970F4___C_METHOD_1_67B901A57F7CC132_OFFSET UNITYSDK_OFFSET(0x1659E580)
#define CLASS_2_86B3C791290970F4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1659E530)
#define CLASS_2_86B3C791290970F4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1659E570)

inline static constexpr unsigned int Class_2_86B3C791290970F4___c_TypeDefinitionIndex = 62137;

class Class_2_86B3C791290970F4___c : public ::System::Object
{
public:
	static ::Class_2_86B3C791290970F4___c** StaticGet___9()
	{
		return (::Class_2_86B3C791290970F4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_86B3C791290970F4___c_TypeDefinitionIndex)->GetStaticField(0x34630);
	}
	static ::System::Converter_2<::Class_3_6EF456A21AE85EEC_252*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Converter_2<::Class_3_6EF456A21AE85EEC_252*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_86B3C791290970F4___c_TypeDefinitionIndex)->GetStaticField(0x34638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_67B901A57F7CC132(::Class_3_6EF456A21AE85EEC_252* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_252*))((::PBYTE)hIl2Cpp + CLASS_2_86B3C791290970F4___C_METHOD_1_67B901A57F7CC132_OFFSET))(this, a1);
	}
};
