#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyCharacterFaceMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A8C17E0905A703E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1105AD20)
#define CLASS_3_2A8C17E0905A703E__CTOR_OFFSET UNITYSDK_OFFSET(0x1105ACF0)

inline static constexpr unsigned int Class_3_2A8C17E0905A703E_TypeDefinitionIndex = 42913;

class Class_3_2A8C17E0905A703E : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyCharacterFaceMaterial*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCharacterFaceMaterial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCharacterFaceMaterial*))((::PBYTE)hIl2Cpp + CLASS_3_2A8C17E0905A703E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A8C17E0905A703E_ONTASKBEGIN_OFFSET))(this);
	}
};
