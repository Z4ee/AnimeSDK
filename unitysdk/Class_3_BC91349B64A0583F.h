#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvMarkAsTauntProxy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC91349B64A0583F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAF6EF60)
#define CLASS_3_BC91349B64A0583F__CTOR_OFFSET UNITYSDK_OFFSET(0xAF6EF30)

inline static constexpr unsigned int Class_3_BC91349B64A0583F_TypeDefinitionIndex = 48998;

class Class_3_BC91349B64A0583F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvMarkAsTauntProxy*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvMarkAsTauntProxy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvMarkAsTauntProxy*))((::PBYTE)hIl2Cpp + CLASS_3_BC91349B64A0583F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC91349B64A0583F_ONTASKBEGIN_OFFSET))(this);
	}
};
