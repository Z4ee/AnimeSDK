#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C083D1110630467F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF55360)
#define CLASS_1_C083D1110630467F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBF553A0)
#define CLASS_1_C083D1110630467F___C__TOEFFECT_B__0_0_OFFSET UNITYSDK_OFFSET(0xBF553B0)

inline static constexpr unsigned int Class_1_C083D1110630467F___c_TypeDefinitionIndex = 64455;

class Class_1_C083D1110630467F___c : public ::System::Object
{
public:
	static ::Class_1_C083D1110630467F___c** StaticGet___9()
	{
		return (::Class_1_C083D1110630467F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C083D1110630467F___c_TypeDefinitionIndex)->GetStaticField(0x67210);
	}
	static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C083D1110630467F___c_TypeDefinitionIndex)->GetStaticField(0x67218);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C083D1110630467F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C083D1110630467F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _ToEffect_b__0_0(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_C083D1110630467F___C__TOEFFECT_B__0_0_OFFSET))(this, a1);
	}
};
