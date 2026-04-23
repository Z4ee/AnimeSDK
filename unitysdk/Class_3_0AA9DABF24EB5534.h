#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvGameplayTrackNpcStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0AA9DABF24EB5534_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E3E750)
#define CLASS_3_0AA9DABF24EB5534__CTOR_OFFSET UNITYSDK_OFFSET(0x11E3E720)

inline static constexpr unsigned int Class_3_0AA9DABF24EB5534_TypeDefinitionIndex = 48356;

class Class_3_0AA9DABF24EB5534 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvGameplayTrackNpcStart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcStart*))((::PBYTE)hIl2Cpp + CLASS_3_0AA9DABF24EB5534__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AA9DABF24EB5534_ONTASKBEGIN_OFFSET))(this);
	}
};
