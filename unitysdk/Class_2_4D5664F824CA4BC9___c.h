#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6EF456A21AE85EEC_76;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_4D5664F824CA4BC9___C_METHOD_1_67B901A57F7CC132_OFFSET UNITYSDK_OFFSET(0x11914430)
#define CLASS_2_4D5664F824CA4BC9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x119143E0)
#define CLASS_2_4D5664F824CA4BC9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11914420)

inline static constexpr unsigned int Class_2_4D5664F824CA4BC9___c_TypeDefinitionIndex = 90068;

class Class_2_4D5664F824CA4BC9___c : public ::System::Object
{
public:
	static ::Class_2_4D5664F824CA4BC9___c** StaticGet___9()
	{
		return (::Class_2_4D5664F824CA4BC9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D5664F824CA4BC9___c_TypeDefinitionIndex)->GetStaticField(0x454B0);
	}
	static ::System::Converter_2<::Class_3_6EF456A21AE85EEC_76*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Converter_2<::Class_3_6EF456A21AE85EEC_76*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D5664F824CA4BC9___c_TypeDefinitionIndex)->GetStaticField(0x454B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_67B901A57F7CC132(::Class_3_6EF456A21AE85EEC_76* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_6EF456A21AE85EEC_76*))((::PBYTE)hIl2Cpp + CLASS_2_4D5664F824CA4BC9___C_METHOD_1_67B901A57F7CC132_OFFSET))(this, a1);
	}
};
