#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CloneWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C7A18E03D0D7FCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169E2C50)
#define CLASS_3_7C7A18E03D0D7FCE__CTOR_OFFSET UNITYSDK_OFFSET(0x169E2C20)

inline static constexpr unsigned int Class_3_7C7A18E03D0D7FCE_TypeDefinitionIndex = 55176;

class Class_3_7C7A18E03D0D7FCE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CloneWeakness*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloneWeakness* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloneWeakness*))((::PBYTE)hIl2Cpp + CLASS_3_7C7A18E03D0D7FCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C7A18E03D0D7FCE_ONTASKBEGIN_OFFSET))(this);
	}
};
