#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_06B19D697C907AD1_METHOD_3_585E2EA201FDE7ED_OFFSET UNITYSDK_OFFSET(0x136EC8D0)
#define CLASS_3_06B19D697C907AD1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136EC790)
#define CLASS_3_06B19D697C907AD1__CTOR_OFFSET UNITYSDK_OFFSET(0x136EC760)

inline static constexpr unsigned int Class_3_06B19D697C907AD1_TypeDefinitionIndex = 49623;

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

	::System::Void Method_3_585E2EA201FDE7ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06B19D697C907AD1_METHOD_3_585E2EA201FDE7ED_OFFSET))(this);
	}
};
