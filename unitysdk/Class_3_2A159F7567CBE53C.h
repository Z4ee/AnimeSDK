#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForceRefreshCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A159F7567CBE53C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x881B6E0)
#define CLASS_3_2A159F7567CBE53C__CTOR_OFFSET UNITYSDK_OFFSET(0x881B6B0)

inline static constexpr unsigned int Class_3_2A159F7567CBE53C_TypeDefinitionIndex = 42808;

class Class_3_2A159F7567CBE53C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceRefreshCamera*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceRefreshCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceRefreshCamera*))((::PBYTE)hIl2Cpp + CLASS_3_2A159F7567CBE53C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A159F7567CBE53C_ONTASKBEGIN_OFFSET))(this);
	}
};
