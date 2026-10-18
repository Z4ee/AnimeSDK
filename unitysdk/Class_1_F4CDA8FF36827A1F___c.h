#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F4CDA8FF36827A1F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4E5CB0)
#define CLASS_1_F4CDA8FF36827A1F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E5CE0)
#define CLASS_1_F4CDA8FF36827A1F___C___BUILD_B__15_0_OFFSET UNITYSDK_OFFSET(0xB4E5CF0)
#define CLASS_1_F4CDA8FF36827A1F___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0xB4E5D20)
#define CLASS_1_F4CDA8FF36827A1F___C___CCTOR_B__46_1_OFFSET UNITYSDK_OFFSET(0xB4E5DE0)

inline static constexpr unsigned int Class_1_F4CDA8FF36827A1F___c_TypeDefinitionIndex = 56211;

class Class_1_F4CDA8FF36827A1F___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F___c_TypeDefinitionIndex)->GetStaticField(0x55540);
	}
	static ::Class_1_F4CDA8FF36827A1F___c** StaticGet___9()
	{
		return (::Class_1_F4CDA8FF36827A1F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F4CDA8FF36827A1F___c_TypeDefinitionIndex)->GetStaticField(0x55548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F___C__CTOR_OFFSET))(this);
	}

	::System::String* __Build_b__15_0(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F___C___BUILD_B__15_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__46_0(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F___C___CCTOR_B__46_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__46_1(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_F4CDA8FF36827A1F___C___CCTOR_B__46_1_OFFSET))(this, a1);
	}
};
