#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvHideRushBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E62DDE9F7095019B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8809C0)
#define CLASS_3_E62DDE9F7095019B__CTOR_OFFSET UNITYSDK_OFFSET(0xA880990)

inline static constexpr unsigned int Class_3_E62DDE9F7095019B_TypeDefinitionIndex = 54082;

class Class_3_E62DDE9F7095019B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvHideRushBtn*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvHideRushBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvHideRushBtn*))((::PBYTE)hIl2Cpp + CLASS_3_E62DDE9F7095019B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E62DDE9F7095019B_ONTASKBEGIN_OFFSET))(this);
	}
};
