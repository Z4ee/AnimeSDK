#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6CEF1A71F84C86B8.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"

class Class_1_B6AB561EB80E0B93;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }

#define CLASS_2_AE3A4D51681392E4_METHOD_2_0C10916F1BB68635_OFFSET UNITYSDK_OFFSET(0xB0E91D0)
#define CLASS_2_AE3A4D51681392E4_METHOD_2_15FF904B5C394FCD_OFFSET UNITYSDK_OFFSET(0xB0E91F0)
#define CLASS_2_AE3A4D51681392E4_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0xB0E9BD0)
#define CLASS_2_AE3A4D51681392E4_METHOD_2_407FC3B20B36858B_OFFSET UNITYSDK_OFFSET(0xB0E9C30)
#define CLASS_2_AE3A4D51681392E4_METHOD_2_DAF71D50BD17B326_OFFSET UNITYSDK_OFFSET(0xB0E9360)
#define CLASS_2_AE3A4D51681392E4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB0E91E0)
#define CLASS_2_AE3A4D51681392E4__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E91C0)

inline static constexpr unsigned int Class_2_AE3A4D51681392E4_TypeDefinitionIndex = 56886;

class Class_2_AE3A4D51681392E4 : public ::Class_1_6CEF1A71F84C86B8
{
public:
	::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleEventCreateType Method_2_0C10916F1BB68635()
	{
		return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4_METHOD_2_0C10916F1BB68635_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_15FF904B5C394FCD(::RPG::GameCore::BattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4_METHOD_2_15FF904B5C394FCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAF71D50BD17B326(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4_METHOD_2_DAF71D50BD17B326_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Void Method_2_407FC3B20B36858B(::Class_1_B6AB561EB80E0B93* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6AB561EB80E0B93*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AE3A4D51681392E4_METHOD_2_407FC3B20B36858B_OFFSET))(this, a1, a2);
	}
};
