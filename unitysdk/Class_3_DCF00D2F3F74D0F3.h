#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ClearEntityDamageText; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DCF00D2F3F74D0F3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1608CC70)
#define CLASS_3_DCF00D2F3F74D0F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1608CC40)

inline static constexpr unsigned int Class_3_DCF00D2F3F74D0F3_TypeDefinitionIndex = 55167;

class Class_3_DCF00D2F3F74D0F3 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ClearEntityDamageText*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityDamageText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityDamageText*))((::PBYTE)hIl2Cpp + CLASS_3_DCF00D2F3F74D0F3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCF00D2F3F74D0F3_ONTASKBEGIN_OFFSET))(this);
	}
};
