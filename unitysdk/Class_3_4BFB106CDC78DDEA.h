#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPreShowStanceBreak; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4BFB106CDC78DDEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10ABEF50)
#define CLASS_3_4BFB106CDC78DDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABEF20)

inline static constexpr unsigned int Class_3_4BFB106CDC78DDEA_TypeDefinitionIndex = 43775;

class Class_3_4BFB106CDC78DDEA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPreShowStanceBreak*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPreShowStanceBreak* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + CLASS_3_4BFB106CDC78DDEA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4BFB106CDC78DDEA_EVALUATE_OFFSET))(this);
	}
};
