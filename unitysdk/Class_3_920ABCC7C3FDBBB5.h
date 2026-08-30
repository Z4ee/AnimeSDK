#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RtUnstackInvisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_920ABCC7C3FDBBB5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE59D180)
#define CLASS_3_920ABCC7C3FDBBB5__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D150)

inline static constexpr unsigned int Class_3_920ABCC7C3FDBBB5_TypeDefinitionIndex = 54122;

class Class_3_920ABCC7C3FDBBB5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RtUnstackInvisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtUnstackInvisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtUnstackInvisible*))((::PBYTE)hIl2Cpp + CLASS_3_920ABCC7C3FDBBB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_920ABCC7C3FDBBB5_ONTASKBEGIN_OFFSET))(this);
	}
};
