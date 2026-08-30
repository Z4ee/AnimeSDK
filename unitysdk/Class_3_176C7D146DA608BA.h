#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetupPropAnchorInRadius; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_176C7D146DA608BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB47F980)
#define CLASS_3_176C7D146DA608BA__CTOR_OFFSET UNITYSDK_OFFSET(0xB47F950)

inline static constexpr unsigned int Class_3_176C7D146DA608BA_TypeDefinitionIndex = 58745;

class Class_3_176C7D146DA608BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupPropAnchorInRadius*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupPropAnchorInRadius* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupPropAnchorInRadius*))((::PBYTE)hIl2Cpp + CLASS_3_176C7D146DA608BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_176C7D146DA608BA_ONTASKBEGIN_OFFSET))(this);
	}
};
