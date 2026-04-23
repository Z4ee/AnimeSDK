#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StackStatusDesc; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FAC3BE039369A8E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xECB02A0)
#define CLASS_3_FAC3BE039369A8E2__CTOR_OFFSET UNITYSDK_OFFSET(0xECB0270)

inline static constexpr unsigned int Class_3_FAC3BE039369A8E2_TypeDefinitionIndex = 51311;

class Class_3_FAC3BE039369A8E2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackStatusDesc*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackStatusDesc* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackStatusDesc*))((::PBYTE)hIl2Cpp + CLASS_3_FAC3BE039369A8E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FAC3BE039369A8E2_ONTASKBEGIN_OFFSET))(this);
	}
};
