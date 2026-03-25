#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParamModifierCustomEvent; }

#define CLASS_3_73872D918D1FE24D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8B5C000)
#define CLASS_3_73872D918D1FE24D__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5BEA0)

inline static constexpr unsigned int Class_3_73872D918D1FE24D_TypeDefinitionIndex = 44668;

class Class_3_73872D918D1FE24D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerParamModifierCustomEvent*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28
	::RPG::GameCore::StringHash Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParamModifierCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParamModifierCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_73872D918D1FE24D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73872D918D1FE24D_ONTASKBEGIN_OFFSET))(this);
	}
};
