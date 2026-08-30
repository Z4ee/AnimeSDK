#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropInitFarmElement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_94A15862BC251BF0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB82B4F0)
#define CLASS_3_94A15862BC251BF0__CTOR_OFFSET UNITYSDK_OFFSET(0xB82B4C0)

inline static constexpr unsigned int Class_3_94A15862BC251BF0_TypeDefinitionIndex = 58477;

class Class_3_94A15862BC251BF0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropInitFarmElement*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_94A15862BC251BF0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_94A15862BC251BF0_ONTASKBEGIN_OFFSET))(this);
	}
};
