#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_19;
class Class_1_916A609943E0EE80_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9AC7EED9B2600116___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC05B140)
#define CLASS_2_9AC7EED9B2600116___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC05B180)
#define CLASS_2_9AC7EED9B2600116___C___CONVERTTOPROTO_B__13_0_OFFSET UNITYSDK_OFFSET(0xC05B190)

inline static constexpr unsigned int Class_2_9AC7EED9B2600116___c_TypeDefinitionIndex = 80178;

class Class_2_9AC7EED9B2600116___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_916A609943E0EE80_2*, ::Class_1_1CBA230307F9C289_19*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_1_916A609943E0EE80_2*, ::Class_1_1CBA230307F9C289_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9AC7EED9B2600116___c_TypeDefinitionIndex)->GetStaticField(0xC170);
	}
	static ::Class_2_9AC7EED9B2600116___c** StaticGet___9()
	{
		return (::Class_2_9AC7EED9B2600116___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9AC7EED9B2600116___c_TypeDefinitionIndex)->GetStaticField(0xC178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9AC7EED9B2600116___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AC7EED9B2600116___C__CTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_19* __ConvertToProto_b__13_0(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::Class_1_1CBA230307F9C289_19*(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_2_9AC7EED9B2600116___C___CONVERTTOPROTO_B__13_0_OFFSET))(this, a1);
	}
};
