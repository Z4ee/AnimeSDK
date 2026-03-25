#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetModifierDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_DFB89ACB6A734F19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA6CC2D0)
#define CLASS_3_DFB89ACB6A734F19__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CC2A0)

inline static constexpr unsigned int Class_3_DFB89ACB6A734F19_TypeDefinitionIndex = 44475;

class Class_3_DFB89ACB6A734F19 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetModifierDynamicValue*>
{
public:
	::RPG::GameCore::ArrayPoolWrapper_1<::RPG::GameCore::TurnBasedModifierInstance*> Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_DFB89ACB6A734F19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DFB89ACB6A734F19_ONTASKBEGIN_OFFSET))(this);
	}
};
