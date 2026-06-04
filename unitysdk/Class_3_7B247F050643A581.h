#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DisableSelectionProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7B247F050643A581_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x142F1C10)
#define CLASS_3_7B247F050643A581__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1BE0)

inline static constexpr unsigned int Class_3_7B247F050643A581_TypeDefinitionIndex = 54283;

class Class_3_7B247F050643A581 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DisableSelectionProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableSelectionProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableSelectionProp*))((::PBYTE)hIl2Cpp + CLASS_3_7B247F050643A581__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7B247F050643A581_ONTASKBEGIN_OFFSET))(this);
	}
};
