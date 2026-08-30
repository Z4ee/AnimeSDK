#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_195081730F1669B6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1644FF20)
#define CLASS_1_195081730F1669B6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1644FF50)
#define CLASS_1_195081730F1669B6___C___BUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x1644FF60)
#define CLASS_1_195081730F1669B6___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1644FF90)
#define CLASS_1_195081730F1669B6___C___CCTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x16450050)

inline static constexpr unsigned int Class_1_195081730F1669B6___c_TypeDefinitionIndex = 56398;

class Class_1_195081730F1669B6___c : public ::System::Object
{
public:
	static ::Class_1_195081730F1669B6___c** StaticGet___9()
	{
		return (::Class_1_195081730F1669B6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6___c_TypeDefinitionIndex)->GetStaticField(0x64ED0);
	}
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_195081730F1669B6___c_TypeDefinitionIndex)->GetStaticField(0x64ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6___C__CTOR_OFFSET))(this);
	}

	::System::String* __Build_b__13_0(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6___C___BUILD_B__13_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__43_0(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6___C___CCTOR_B__43_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__43_1(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_195081730F1669B6___C___CCTOR_B__43_1_OFFSET))(this, a1);
	}
};
