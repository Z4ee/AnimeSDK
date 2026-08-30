#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetFiveDimIgnoreCollisionTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C0F1DD5E4C83005_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19C17770)
#define CLASS_3_7C0F1DD5E4C83005__CTOR_OFFSET UNITYSDK_OFFSET(0x19C17740)

inline static constexpr unsigned int Class_3_7C0F1DD5E4C83005_TypeDefinitionIndex = 53164;

class Class_3_7C0F1DD5E4C83005 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetFiveDimIgnoreCollisionTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget*))((::PBYTE)hIl2Cpp + CLASS_3_7C0F1DD5E4C83005__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C0F1DD5E4C83005_ONTASKBEGIN_OFFSET))(this);
	}
};
