#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_B164442749146F7F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116AEA50)
#define CLASS_2_B164442749146F7F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116AEA80)
#define CLASS_2_B164442749146F7F___C___SETUPMONSTERINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0x116AEA90)

inline static constexpr unsigned int Class_2_B164442749146F7F___c_TypeDefinitionIndex = 47619;

class Class_2_B164442749146F7F___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B164442749146F7F___c_TypeDefinitionIndex)->GetStaticField(0x31830);
	}
	static ::Class_2_B164442749146F7F___c** StaticGet___9()
	{
		return (::Class_2_B164442749146F7F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B164442749146F7F___c_TypeDefinitionIndex)->GetStaticField(0x31838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __SetupMonsterInfo_b__6_0(::RPG::GameCore::GameEntity* pMonster)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B164442749146F7F___C___SETUPMONSTERINFO_B__6_0_OFFSET))(this, pMonster);
	}
};
