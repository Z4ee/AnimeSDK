#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E51ACFF805209DE9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CC28E0)
#define CLASS_3_E51ACFF805209DE9__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC2850)

inline static constexpr unsigned int Class_3_E51ACFF805209DE9_TypeDefinitionIndex = 55037;

class Class_3_E51ACFF805209DE9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddWeakness*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_E51ACFF805209DE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E51ACFF805209DE9_ONTASKBEGIN_OFFSET))(this);
	}
};
