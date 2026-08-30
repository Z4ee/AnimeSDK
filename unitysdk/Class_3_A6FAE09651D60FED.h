#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MappingAttachPoint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A6FAE09651D60FED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158E02E0)
#define CLASS_3_A6FAE09651D60FED__CTOR_OFFSET UNITYSDK_OFFSET(0x158E02B0)

inline static constexpr unsigned int Class_3_A6FAE09651D60FED_TypeDefinitionIndex = 55373;

class Class_3_A6FAE09651D60FED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MappingAttachPoint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MappingAttachPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MappingAttachPoint*))((::PBYTE)hIl2Cpp + CLASS_3_A6FAE09651D60FED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6FAE09651D60FED_ONTASKBEGIN_OFFSET))(this);
	}
};
