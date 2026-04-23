#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_06B19D697C907AD1_METHOD_3_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x129E69F0)
#define CLASS_3_06B19D697C907AD1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129E68B0)
#define CLASS_3_06B19D697C907AD1__CTOR_OFFSET UNITYSDK_OFFSET(0x129E6880)

inline static constexpr unsigned int Class_3_06B19D697C907AD1_TypeDefinitionIndex = 48957;

class Class_3_06B19D697C907AD1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayMusicVisualEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicVisualEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicVisualEffect*))((::PBYTE)hIl2Cpp + CLASS_3_06B19D697C907AD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06B19D697C907AD1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06B19D697C907AD1_METHOD_3_8CB9BDF340E2FC64_OFFSET))(this);
	}
};
