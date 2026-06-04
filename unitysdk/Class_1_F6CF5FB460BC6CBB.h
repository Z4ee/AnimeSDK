#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_F6CF5FB460BC6CBB__CTOR_OFFSET UNITYSDK_OFFSET(0x138A7B90)

inline static constexpr unsigned int Class_1_F6CF5FB460BC6CBB_TypeDefinitionIndex = 53901;

class Class_1_F6CF5FB460BC6CBB : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::TargetEvaluator* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6CF5FB460BC6CBB__CTOR_OFFSET))(this);
	}
};
