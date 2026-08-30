#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointModifyFunction.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_F3EEA4ED0244C1A6;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_7F9C42CEDE72E74B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1928E490)
#define CLASS_1_7F9C42CEDE72E74B__CTOR_OFFSET UNITYSDK_OFFSET(0x1928E4E0)

inline static constexpr unsigned int Class_1_7F9C42CEDE72E74B_TypeDefinitionIndex = 56244;

class Class_1_7F9C42CEDE72E74B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
	::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x18
	::Class_2_F3EEA4ED0244C1A6* OLOKHEMMGOH; // 0x20
	::RPG::GameCore::ElationPointModifyFunction FKCKKFALPBK; // 0x28
	::RPG::GameCore::FixPoint AJHHCOHFIFA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F9C42CEDE72E74B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F9C42CEDE72E74B_CLEAR_OFFSET))(this);
	}
};
