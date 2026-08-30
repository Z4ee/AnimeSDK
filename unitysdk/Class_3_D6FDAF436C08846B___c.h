#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_D6FDAF436C08846B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13526D50)
#define CLASS_3_D6FDAF436C08846B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13526D90)
#define CLASS_3_D6FDAF436C08846B___C__FILTERMODIFIERTOINFECT_B__3_1_OFFSET UNITYSDK_OFFSET(0x13526DA0)
#define CLASS_3_D6FDAF436C08846B___C__FILTERMODIFIERTOINFECT_B__3_2_OFFSET UNITYSDK_OFFSET(0x13526DD0)

inline static constexpr unsigned int Class_3_D6FDAF436C08846B___c_TypeDefinitionIndex = 55315;

class Class_3_D6FDAF436C08846B___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_2()
	{
		return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6FDAF436C08846B___c_TypeDefinitionIndex)->GetStaticField(0x61640);
	}
	static ::Class_3_D6FDAF436C08846B___c** StaticGet___9()
	{
		return (::Class_3_D6FDAF436C08846B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6FDAF436C08846B___c_TypeDefinitionIndex)->GetStaticField(0x61648);
	}
	static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_1()
	{
		return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6FDAF436C08846B___c_TypeDefinitionIndex)->GetStaticField(0x61650);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _FilterModifierToInfect_b__3_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__FILTERMODIFIERTOINFECT_B__3_1_OFFSET))(this, a1);
	}

	::System::Boolean _FilterModifierToInfect_b__3_2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_D6FDAF436C08846B___C__FILTERMODIFIERTOINFECT_B__3_2_OFFSET))(this, a1);
	}
};
