#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_96AB00172E651941;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_5ED9ADE4BC6ABA06_CLEAR_OFFSET UNITYSDK_OFFSET(0xC003D50)
#define CLASS_1_5ED9ADE4BC6ABA06__CTOR_OFFSET UNITYSDK_OFFSET(0xC003DA0)

inline static constexpr unsigned int Class_1_5ED9ADE4BC6ABA06_TypeDefinitionIndex = 56057;

class Class_1_5ED9ADE4BC6ABA06 : public ::System::Object
{
public:
	::Class_2_96AB00172E651941* OLOKHEMMGOH; // 0x10
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x20
	::RPG::GameCore::FixPoint AJHHCOHFIFA; // 0x28
	::Enum_3_DB663931210BBC27 FKCKKFALPBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED9ADE4BC6ABA06__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ED9ADE4BC6ABA06_CLEAR_OFFSET))(this);
	}
};
