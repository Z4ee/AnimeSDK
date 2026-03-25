#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByScoringID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6F64FE3C33F344DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE59BC0)
#define CLASS_3_6F64FE3C33F344DE__CTOR_OFFSET UNITYSDK_OFFSET(0xDE59AE0)

inline static constexpr unsigned int Class_3_6F64FE3C33F344DE_TypeDefinitionIndex = 44417;

class Class_3_6F64FE3C33F344DE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByScoringID*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByScoringID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByScoringID*))((::PBYTE)hIl2Cpp + CLASS_3_6F64FE3C33F344DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F64FE3C33F344DE_ONTASKBEGIN_OFFSET))(this);
	}
};
