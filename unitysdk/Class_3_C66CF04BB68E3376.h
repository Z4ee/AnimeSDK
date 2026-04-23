#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvNPCSetHidden; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C66CF04BB68E3376_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95A3D90)
#define CLASS_3_C66CF04BB68E3376__CTOR_OFFSET UNITYSDK_OFFSET(0x95A3D60)

inline static constexpr unsigned int Class_3_C66CF04BB68E3376_TypeDefinitionIndex = 48417;

class Class_3_C66CF04BB68E3376 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvNPCSetHidden*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSetHidden* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSetHidden*))((::PBYTE)hIl2Cpp + CLASS_3_C66CF04BB68E3376__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C66CF04BB68E3376_ONTASKBEGIN_OFFSET))(this);
	}
};
