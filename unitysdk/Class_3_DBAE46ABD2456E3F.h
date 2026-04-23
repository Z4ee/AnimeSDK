#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvTrackNpcTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DBAE46ABD2456E3F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xECB6F60)
#define CLASS_3_DBAE46ABD2456E3F__CTOR_OFFSET UNITYSDK_OFFSET(0xECB6F30)

inline static constexpr unsigned int Class_3_DBAE46ABD2456E3F_TypeDefinitionIndex = 48489;

class Class_3_DBAE46ABD2456E3F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvTrackNpcTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_DBAE46ABD2456E3F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBAE46ABD2456E3F_ONTASKBEGIN_OFFSET))(this);
	}
};
