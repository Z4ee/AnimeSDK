#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DeployPuzzleChangeLineEmission; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_381C2B631222BE88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD51E20)
#define CLASS_3_381C2B631222BE88__CTOR_OFFSET UNITYSDK_OFFSET(0xBD51DF0)

inline static constexpr unsigned int Class_3_381C2B631222BE88_TypeDefinitionIndex = 58221;

class Class_3_381C2B631222BE88 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DeployPuzzleChangeLineEmission*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleChangeLineEmission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleChangeLineEmission*))((::PBYTE)hIl2Cpp + CLASS_3_381C2B631222BE88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_381C2B631222BE88_ONTASKBEGIN_OFFSET))(this);
	}
};
