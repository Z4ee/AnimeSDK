#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPhotoGraphFovLevelRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_569A01D7788B5E76_EVALUATE_OFFSET UNITYSDK_OFFSET(0x144AB480)
#define CLASS_3_569A01D7788B5E76__CTOR_OFFSET UNITYSDK_OFFSET(0x144AB450)

inline static constexpr unsigned int Class_3_569A01D7788B5E76_TypeDefinitionIndex = 49684;

class Class_3_569A01D7788B5E76 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPhotoGraphFovLevelRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPhotoGraphFovLevelRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPhotoGraphFovLevelRange*))((::PBYTE)hIl2Cpp + CLASS_3_569A01D7788B5E76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_569A01D7788B5E76_EVALUATE_OFFSET))(this);
	}
};
