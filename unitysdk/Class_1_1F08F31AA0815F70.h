#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterAttributeConfig; }

#define CLASS_1_1F08F31AA0815F70_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1613C790)
#define CLASS_1_1F08F31AA0815F70_METHOD_1_867A2EBAAD87DD3D_OFFSET UNITYSDK_OFFSET(0x1613CBB0)
#define CLASS_1_1F08F31AA0815F70_METHOD_1_CD032FA0369D734A_OFFSET UNITYSDK_OFFSET(0x1613CAF0)
#define CLASS_1_1F08F31AA0815F70__CTOR_OFFSET UNITYSDK_OFFSET(0x1613CD60)

inline static constexpr unsigned int Class_1_1F08F31AA0815F70_TypeDefinitionIndex = 76925;

class Class_1_1F08F31AA0815F70 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F08F31AA0815F70__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint GetValue(::Class_0_16E4307DCC419505_255* a1, ::Entitas::IEntity* a2, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::Entitas::IEntity*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1F08F31AA0815F70_GETVALUE_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_CD032FA0369D734A(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1F08F31AA0815F70_METHOD_1_CD032FA0369D734A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_867A2EBAAD87DD3D(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::Entitas::IEntity*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_1F08F31AA0815F70_METHOD_1_867A2EBAAD87DD3D_OFFSET))(a1, a2, a3);
	}
};
