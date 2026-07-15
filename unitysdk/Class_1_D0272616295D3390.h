#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_D0272616295D3390__CTOR_OFFSET UNITYSDK_OFFSET(0x1634C9E0)

inline static constexpr unsigned int Class_1_D0272616295D3390_TypeDefinitionIndex = 55123;

class Class_1_D0272616295D3390 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0272616295D3390__CTOR_OFFSET))(this);
	}
};
