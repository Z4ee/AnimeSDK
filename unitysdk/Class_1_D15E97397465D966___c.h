#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_D15E97397465D966___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11624A80)
#define CLASS_1_D15E97397465D966___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11624AB0)
#define CLASS_1_D15E97397465D966___C___BUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x11624AC0)
#define CLASS_1_D15E97397465D966___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x11624AF0)
#define CLASS_1_D15E97397465D966___C___CCTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x11624BB0)

inline static constexpr unsigned int Class_1_D15E97397465D966___c_TypeDefinitionIndex = 53679;

class Class_1_D15E97397465D966___c : public ::System::Object
{
public:
	static ::Class_1_D15E97397465D966___c** StaticGet___9()
	{
		return (::Class_1_D15E97397465D966___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966___c_TypeDefinitionIndex)->GetStaticField(0x42A30);
	}
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966___c_TypeDefinitionIndex)->GetStaticField(0x42A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966___C__CTOR_OFFSET))(this);
	}

	::System::String* __Build_b__13_0(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966___C___BUILD_B__13_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__43_0(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966___C___CCTOR_B__43_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__43_1(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966___C___CCTOR_B__43_1_OFFSET))(this, a1);
	}
};
