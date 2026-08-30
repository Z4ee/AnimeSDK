#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowRogueSelectMainPageMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3BB44795B5901986_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCEBD20)
#define CLASS_3_3BB44795B5901986__CTOR_OFFSET UNITYSDK_OFFSET(0xBCEBCF0)

inline static constexpr unsigned int Class_3_3BB44795B5901986_TypeDefinitionIndex = 58834;

class Class_3_3BB44795B5901986 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowRogueSelectMainPageMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueSelectMainPageMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueSelectMainPageMode*))((::PBYTE)hIl2Cpp + CLASS_3_3BB44795B5901986__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3BB44795B5901986_ONTASKBEGIN_OFFSET))(this);
	}
};
