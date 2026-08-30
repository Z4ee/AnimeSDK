#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RandomSelectFloorValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8FE43B4184614E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158D9810)
#define CLASS_3_E8FE43B4184614E7__CTOR_OFFSET UNITYSDK_OFFSET(0x158D97E0)

inline static constexpr unsigned int Class_3_E8FE43B4184614E7_TypeDefinitionIndex = 53450;

class Class_3_E8FE43B4184614E7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RandomSelectFloorValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelectFloorValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelectFloorValue*))((::PBYTE)hIl2Cpp + CLASS_3_E8FE43B4184614E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8FE43B4184614E7_ONTASKBEGIN_OFFSET))(this);
	}
};
