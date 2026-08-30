#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyGlobalVisionParams; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5034E76AD19D66A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163E74C0)
#define CLASS_3_5034E76AD19D66A4__CTOR_OFFSET UNITYSDK_OFFSET(0x163E7490)

inline static constexpr unsigned int Class_3_5034E76AD19D66A4_TypeDefinitionIndex = 53301;

class Class_3_5034E76AD19D66A4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyGlobalVisionParams*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyGlobalVisionParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyGlobalVisionParams*))((::PBYTE)hIl2Cpp + CLASS_3_5034E76AD19D66A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5034E76AD19D66A4_ONTASKBEGIN_OFFSET))(this);
	}
};
