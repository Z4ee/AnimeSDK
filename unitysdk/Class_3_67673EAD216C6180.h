#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowExpandElationItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_67673EAD216C6180_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90BEB90)
#define CLASS_3_67673EAD216C6180__CTOR_OFFSET UNITYSDK_OFFSET(0x90BEB60)

inline static constexpr unsigned int Class_3_67673EAD216C6180_TypeDefinitionIndex = 52035;

class Class_3_67673EAD216C6180 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowExpandElationItem*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowExpandElationItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowExpandElationItem*))((::PBYTE)hIl2Cpp + CLASS_3_67673EAD216C6180__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67673EAD216C6180_ONTASKBEGIN_OFFSET))(this);
	}
};
