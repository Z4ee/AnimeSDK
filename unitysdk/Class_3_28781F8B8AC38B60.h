#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CakeRaceBanDragCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_28781F8B8AC38B60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB95DF00)
#define CLASS_3_28781F8B8AC38B60__CTOR_OFFSET UNITYSDK_OFFSET(0xB95DED0)

inline static constexpr unsigned int Class_3_28781F8B8AC38B60_TypeDefinitionIndex = 52894;

class Class_3_28781F8B8AC38B60 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CakeRaceBanDragCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceBanDragCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceBanDragCamera*))((::PBYTE)hIl2Cpp + CLASS_3_28781F8B8AC38B60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28781F8B8AC38B60_ONTASKBEGIN_OFFSET))(this);
	}
};
