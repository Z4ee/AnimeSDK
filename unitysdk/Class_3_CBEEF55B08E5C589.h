#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCurrentAudioLanguage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CBEEF55B08E5C589_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13ADE560)
#define CLASS_3_CBEEF55B08E5C589__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADE530)

inline static constexpr unsigned int Class_3_CBEEF55B08E5C589_TypeDefinitionIndex = 49192;

class Class_3_CBEEF55B08E5C589 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCurrentAudioLanguage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentAudioLanguage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentAudioLanguage*))((::PBYTE)hIl2Cpp + CLASS_3_CBEEF55B08E5C589__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CBEEF55B08E5C589_EVALUATE_OFFSET))(this);
	}
};
