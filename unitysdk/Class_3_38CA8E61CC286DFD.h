#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideSummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_38CA8E61CC286DFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC20A10)
#define CLASS_3_38CA8E61CC286DFD__CTOR_OFFSET UNITYSDK_OFFSET(0xAC209E0)

inline static constexpr unsigned int Class_3_38CA8E61CC286DFD_TypeDefinitionIndex = 54350;

class Class_3_38CA8E61CC286DFD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideSummonUnit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideSummonUnit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideSummonUnit*))((::PBYTE)hIl2Cpp + CLASS_3_38CA8E61CC286DFD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38CA8E61CC286DFD_ONTASKBEGIN_OFFSET))(this);
	}
};
