#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropSetSceneTVMenu; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BAC0AA7B4C6E7115_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA66D4A0)
#define CLASS_3_BAC0AA7B4C6E7115__CTOR_OFFSET UNITYSDK_OFFSET(0xA66D470)

inline static constexpr unsigned int Class_3_BAC0AA7B4C6E7115_TypeDefinitionIndex = 54542;

class Class_3_BAC0AA7B4C6E7115 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropSetSceneTVMenu*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetSceneTVMenu* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetSceneTVMenu*))((::PBYTE)hIl2Cpp + CLASS_3_BAC0AA7B4C6E7115__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAC0AA7B4C6E7115_ONTASKBEGIN_OFFSET))(this);
	}
};
