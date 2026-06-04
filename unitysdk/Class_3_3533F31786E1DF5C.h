#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlayPenaconyEndmostClosePage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3533F31786E1DF5C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1418A900)
#define CLASS_3_3533F31786E1DF5C__CTOR_OFFSET UNITYSDK_OFFSET(0x1418A8D0)

inline static constexpr unsigned int Class_3_3533F31786E1DF5C_TypeDefinitionIndex = 49604;

class Class_3_3533F31786E1DF5C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlayPenaconyEndmostClosePage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostClosePage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostClosePage*))((::PBYTE)hIl2Cpp + CLASS_3_3533F31786E1DF5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3533F31786E1DF5C_ONTASKBEGIN_OFFSET))(this);
	}
};
