#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveAvatarPropertyConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_75A0CA533FCD01A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A1B980)
#define CLASS_1_75A0CA533FCD01A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16A1B9C0)
#define CLASS_1_75A0CA533FCD01A7___C___REGISTERPROPERTYFORMULAS_B__8_0_OFFSET UNITYSDK_OFFSET(0x16A1B9D0)

inline static constexpr unsigned int Class_1_75A0CA533FCD01A7___c_TypeDefinitionIndex = 71520;

class Class_1_75A0CA533FCD01A7___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75A0CA533FCD01A7___c_TypeDefinitionIndex)->GetStaticField(0x687B0);
	}
	static ::Class_1_75A0CA533FCD01A7___c** StaticGet___9()
	{
		return (::Class_1_75A0CA533FCD01A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_75A0CA533FCD01A7___c_TypeDefinitionIndex)->GetStaticField(0x687B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RegisterPropertyFormulas_b__8_0(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_75A0CA533FCD01A7___C___REGISTERPROPERTYFORMULAS_B__8_0_OFFSET))(this, a1);
	}
};
