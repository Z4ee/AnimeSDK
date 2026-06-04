#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointModifyFunction.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_2_F3EEA4ED0244C1A6;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_7F9C42CEDE72E74B_CLEAR_OFFSET UNITYSDK_OFFSET(0xAD3A5A0)
#define CLASS_1_7F9C42CEDE72E74B__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3A5F0)

inline static constexpr unsigned int Class_1_7F9C42CEDE72E74B_TypeDefinitionIndex = 52326;

class Class_1_7F9C42CEDE72E74B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_2_F3EEA4ED0244C1A6* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::ElationPointModifyFunction Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F9C42CEDE72E74B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F9C42CEDE72E74B_CLEAR_OFFSET))(this);
	}
};
