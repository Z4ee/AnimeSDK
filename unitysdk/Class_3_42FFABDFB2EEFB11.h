#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class NpcSetupTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42FFABDFB2EEFB11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD13FE20)
#define CLASS_3_42FFABDFB2EEFB11__CTOR_OFFSET UNITYSDK_OFFSET(0xD13FDF0)

inline static constexpr unsigned int Class_3_42FFABDFB2EEFB11_TypeDefinitionIndex = 46976;

class Class_3_42FFABDFB2EEFB11 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::NpcSetupTrigger*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NpcSetupTrigger* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NpcSetupTrigger*))((::PBYTE)hIl2Cpp + CLASS_3_42FFABDFB2EEFB11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42FFABDFB2EEFB11_ONTASKBEGIN_OFFSET))(this);
	}
};
