#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetGraphDynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B1848DF2A9C77472_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x128BEE00)
#define CLASS_3_B1848DF2A9C77472__CTOR_OFFSET UNITYSDK_OFFSET(0x128BEDD0)

inline static constexpr unsigned int Class_3_B1848DF2A9C77472_TypeDefinitionIndex = 49091;

class Class_3_B1848DF2A9C77472 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetGraphDynamicFloat*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGraphDynamicFloat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGraphDynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_3_B1848DF2A9C77472__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1848DF2A9C77472_ONTASKBEGIN_OFFSET))(this);
	}
};
