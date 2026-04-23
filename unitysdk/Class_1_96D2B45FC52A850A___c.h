#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveAvatarPropertyConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_96D2B45FC52A850A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9165D30)
#define CLASS_1_96D2B45FC52A850A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9165D70)
#define CLASS_1_96D2B45FC52A850A___C___REGISTERPROPERTYFORMULAS_B__8_0_OFFSET UNITYSDK_OFFSET(0x9165D80)

inline static constexpr unsigned int Class_1_96D2B45FC52A850A___c_TypeDefinitionIndex = 69185;

class Class_1_96D2B45FC52A850A___c : public ::System::Object
{
public:
	static ::Class_1_96D2B45FC52A850A___c** StaticGet___9()
	{
		return (::Class_1_96D2B45FC52A850A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96D2B45FC52A850A___c_TypeDefinitionIndex)->GetStaticField(0x65A30);
	}
	static ::System::Func_2<::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96D2B45FC52A850A___c_TypeDefinitionIndex)->GetStaticField(0x65A38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RegisterPropertyFormulas_b__8_0(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A___C___REGISTERPROPERTYFORMULAS_B__8_0_OFFSET))(this, item);
	}
};
