#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByValueEvaluator; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_807F766860EA36D2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4BB5F0)
#define CLASS_3_807F766860EA36D2__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BB5C0)

inline static constexpr unsigned int Class_3_807F766860EA36D2_TypeDefinitionIndex = 55477;

class Class_3_807F766860EA36D2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByValueEvaluator*>
{
public:
	::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByValueEvaluator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByValueEvaluator*))((::PBYTE)hIl2Cpp + CLASS_3_807F766860EA36D2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_807F766860EA36D2_ONTASKBEGIN_OFFSET))(this);
	}
};
