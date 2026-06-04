#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HipplenSetEntityPositionByAnchor; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4CF6C998582767CA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF5C4E0)
#define CLASS_3_4CF6C998582767CA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF5C4B0)

inline static constexpr unsigned int Class_3_4CF6C998582767CA_TypeDefinitionIndex = 48889;

class Class_3_4CF6C998582767CA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HipplenSetEntityPositionByAnchor*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenSetEntityPositionByAnchor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenSetEntityPositionByAnchor*))((::PBYTE)hIl2Cpp + CLASS_3_4CF6C998582767CA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CF6C998582767CA_ONTASKBEGIN_OFFSET))(this);
	}
};
