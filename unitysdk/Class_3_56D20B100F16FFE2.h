#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshMunicipalPedestrian; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_56D20B100F16FFE2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD3BCB90)
#define CLASS_3_56D20B100F16FFE2__CTOR_OFFSET UNITYSDK_OFFSET(0xD3BCB60)

inline static constexpr unsigned int Class_3_56D20B100F16FFE2_TypeDefinitionIndex = 53846;

class Class_3_56D20B100F16FFE2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshMunicipalPedestrian*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMunicipalPedestrian* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMunicipalPedestrian*))((::PBYTE)hIl2Cpp + CLASS_3_56D20B100F16FFE2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_56D20B100F16FFE2_ONTASKBEGIN_OFFSET))(this);
	}
};
