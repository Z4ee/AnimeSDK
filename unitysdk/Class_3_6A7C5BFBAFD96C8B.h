#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroySummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6A7C5BFBAFD96C8B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC05DC40)
#define CLASS_3_6A7C5BFBAFD96C8B__CTOR_OFFSET UNITYSDK_OFFSET(0xC05DC10)

inline static constexpr unsigned int Class_3_6A7C5BFBAFD96C8B_TypeDefinitionIndex = 58231;

class Class_3_6A7C5BFBAFD96C8B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DestroySummonUnit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroySummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroySummonUnit*))((::PBYTE)hIl2Cpp + CLASS_3_6A7C5BFBAFD96C8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A7C5BFBAFD96C8B_ONTASKBEGIN_OFFSET))(this);
	}
};
