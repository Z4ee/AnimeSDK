#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_FAD83EA407F170C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1639E3C0)
#define CLASS_1_FAD83EA407F170C3_METHOD_1_7862863D7A66BB41_OFFSET UNITYSDK_OFFSET(0x1639E510)
#define CLASS_1_FAD83EA407F170C3_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x1639E480)
#define CLASS_1_FAD83EA407F170C3_METHOD_1_CC072FCC76A2A9DA_OFFSET UNITYSDK_OFFSET(0x1639E940)
#define CLASS_1_FAD83EA407F170C3_METHOD_1_F57DE6FAF0F79574_OFFSET UNITYSDK_OFFSET(0x1639EA50)
#define CLASS_1_FAD83EA407F170C3_METHOD_1_FD691B7D833F1964_OFFSET UNITYSDK_OFFSET(0x1639E9A0)
#define CLASS_1_FAD83EA407F170C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1639E330)

inline static constexpr unsigned int Class_1_FAD83EA407F170C3_TypeDefinitionIndex = 72136;

class Class_1_FAD83EA407F170C3 : public ::System::Object
{
public:
	// static const ::System::Int32 BAEJAHFJHJH = 0x2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_7862863D7A66BB41(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3_METHOD_1_7862863D7A66BB41_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_FD691B7D833F1964(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3_METHOD_1_FD691B7D833F1964_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleInstance* Method_1_F57DE6FAF0F79574()
	{
		return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3_METHOD_1_F57DE6FAF0F79574_OFFSET))(this);
	}

	::RPG::GameCore::EntityManager* Method_1_CC072FCC76A2A9DA()
	{
		return ((::RPG::GameCore::EntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAD83EA407F170C3_METHOD_1_CC072FCC76A2A9DA_OFFSET))(this);
	}
};
