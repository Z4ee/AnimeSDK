#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NpcPossession; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8ED88E9EB1C20617_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155AB760)
#define CLASS_3_8ED88E9EB1C20617__CTOR_OFFSET UNITYSDK_OFFSET(0x155AB730)

inline static constexpr unsigned int Class_3_8ED88E9EB1C20617_TypeDefinitionIndex = 53309;

class Class_3_8ED88E9EB1C20617 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NpcPossession*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcPossession* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcPossession*))((::PBYTE)hIl2Cpp + CLASS_3_8ED88E9EB1C20617__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8ED88E9EB1C20617_ONTASKBEGIN_OFFSET))(this);
	}
};
