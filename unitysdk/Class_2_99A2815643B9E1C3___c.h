#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_99A2815643B9E1C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164109B0)
#define CLASS_2_99A2815643B9E1C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164109F0)
#define CLASS_2_99A2815643B9E1C3___C___REMOVEMAXSPEEDMODIFIER_B__9_0_OFFSET UNITYSDK_OFFSET(0x16410A00)

inline static constexpr unsigned int Class_2_99A2815643B9E1C3___c_TypeDefinitionIndex = 58576;

class Class_2_99A2815643B9E1C3___c : public ::System::Object
{
public:
	static ::Class_2_99A2815643B9E1C3___c** StaticGet___9()
	{
		return (::Class_2_99A2815643B9E1C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_99A2815643B9E1C3___c_TypeDefinitionIndex)->GetStaticField(0x64490);
	}
	static ::System::Predicate_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>** StaticGet___9__9_0()
	{
		return (::System::Predicate_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_99A2815643B9E1C3___c_TypeDefinitionIndex)->GetStaticField(0x64498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_99A2815643B9E1C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A2815643B9E1C3___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __RemoveMaxSpeedModifier_b__9_0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + CLASS_2_99A2815643B9E1C3___C___REMOVEMAXSPEEDMODIFIER_B__9_0_OFFSET))(this, a1);
	}
};
