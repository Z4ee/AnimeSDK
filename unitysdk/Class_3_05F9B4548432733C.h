#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RemoveNavMeshState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_05F9B4548432733C_METHOD_3_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0x177C0760)
#define CLASS_3_05F9B4548432733C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177C0710)
#define CLASS_3_05F9B4548432733C__CTOR_OFFSET UNITYSDK_OFFSET(0x177C06E0)

inline static constexpr unsigned int Class_3_05F9B4548432733C_TypeDefinitionIndex = 50774;

class Class_3_05F9B4548432733C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RemoveNavMeshState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveNavMeshState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveNavMeshState*))((::PBYTE)hIl2Cpp + CLASS_3_05F9B4548432733C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05F9B4548432733C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05F9B4548432733C_METHOD_3_C56DC3B2E26040B8_OFFSET))(this);
	}
};
