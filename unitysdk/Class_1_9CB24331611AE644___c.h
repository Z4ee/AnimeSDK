#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9CB24331611AE644___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB209980)
#define CLASS_1_9CB24331611AE644___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2099C0)
#define CLASS_1_9CB24331611AE644___C___BUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0xB2099D0)
#define CLASS_1_9CB24331611AE644___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0xB209A00)
#define CLASS_1_9CB24331611AE644___C___CCTOR_B__42_1_OFFSET UNITYSDK_OFFSET(0xB209A80)

inline static constexpr unsigned int Class_1_9CB24331611AE644___c_TypeDefinitionIndex = 51801;

class Class_1_9CB24331611AE644___c : public ::System::Object
{
public:
	static ::Class_1_9CB24331611AE644___c** StaticGet___9()
	{
		return (::Class_1_9CB24331611AE644___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644___c_TypeDefinitionIndex)->GetStaticField(0x669D0);
	}
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644___c_TypeDefinitionIndex)->GetStaticField(0x669D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C__CTOR_OFFSET))(this);
	}

	::System::String* __Build_b__13_0(::RPG::GameCore::JsonEnum* x)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C___BUILD_B__13_0_OFFSET))(this, x);
	}

	::System::String* __cctor_b__42_0(::RPG::GameCore::AbilityProperty x)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C___CCTOR_B__42_0_OFFSET))(this, x);
	}

	::System::String* __cctor_b__42_1(::RPG::GameCore::AbilityProperty x)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C___CCTOR_B__42_1_OFFSET))(this, x);
	}
};
