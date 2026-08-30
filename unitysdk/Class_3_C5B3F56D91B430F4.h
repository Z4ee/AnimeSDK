#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdventureRemoveExtraMPCost; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C5B3F56D91B430F4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFEB0D0)
#define CLASS_3_C5B3F56D91B430F4__CTOR_OFFSET UNITYSDK_OFFSET(0xBFEB0A0)

inline static constexpr unsigned int Class_3_C5B3F56D91B430F4_TypeDefinitionIndex = 58063;

class Class_3_C5B3F56D91B430F4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureRemoveExtraMPCost*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureRemoveExtraMPCost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureRemoveExtraMPCost*))((::PBYTE)hIl2Cpp + CLASS_3_C5B3F56D91B430F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5B3F56D91B430F4_ONTASKBEGIN_OFFSET))(this);
	}
};
