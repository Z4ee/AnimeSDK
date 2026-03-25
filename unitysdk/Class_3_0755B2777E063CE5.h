#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DecalPuzzleEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0755B2777E063CE5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE56740)
#define CLASS_3_0755B2777E063CE5__CTOR_OFFSET UNITYSDK_OFFSET(0xDE56710)

inline static constexpr unsigned int Class_3_0755B2777E063CE5_TypeDefinitionIndex = 42681;

class Class_3_0755B2777E063CE5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DecalPuzzleEnd*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DecalPuzzleEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DecalPuzzleEnd*))((::PBYTE)hIl2Cpp + CLASS_3_0755B2777E063CE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0755B2777E063CE5_ONTASKBEGIN_OFFSET))(this);
	}
};
