#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_06B19D697C907AD1_METHOD_3_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x16EC4420)
#define CLASS_3_06B19D697C907AD1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EC42E0)
#define CLASS_3_06B19D697C907AD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC42B0)

inline static constexpr unsigned int Class_3_06B19D697C907AD1_TypeDefinitionIndex = 50677;

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

	::System::Void Method_3_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06B19D697C907AD1_METHOD_3_5F08B426ADF31FF5_OFFSET))(this);
	}
};
