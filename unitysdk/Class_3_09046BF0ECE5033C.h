#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StopBlendShapesEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_09046BF0ECE5033C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA44AF30)
#define CLASS_3_09046BF0ECE5033C__CTOR_OFFSET UNITYSDK_OFFSET(0xA44AF00)

inline static constexpr unsigned int Class_3_09046BF0ECE5033C_TypeDefinitionIndex = 52223;

class Class_3_09046BF0ECE5033C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StopBlendShapesEmotion*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopBlendShapesEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopBlendShapesEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_09046BF0ECE5033C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_09046BF0ECE5033C_ONTASKBEGIN_OFFSET))(this);
	}
};
