#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D60A2D9E761A6929_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16423400)
#define CLASS_3_D60A2D9E761A6929__CTOR_OFFSET UNITYSDK_OFFSET(0x164233D0)

inline static constexpr unsigned int Class_3_D60A2D9E761A6929_TypeDefinitionIndex = 52603;

class Class_3_D60A2D9E761A6929 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D60A2D9E761A6929__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D60A2D9E761A6929_ONTASKBEGIN_OFFSET))(this);
	}
};
