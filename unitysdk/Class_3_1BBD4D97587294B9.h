#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ModifyAddModifierBindValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1BBD4D97587294B9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B5F850)
#define CLASS_3_1BBD4D97587294B9__CTOR_OFFSET UNITYSDK_OFFSET(0x11B5F820)

inline static constexpr unsigned int Class_3_1BBD4D97587294B9_TypeDefinitionIndex = 50881;

class Class_3_1BBD4D97587294B9 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyAddModifierBindValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAddModifierBindValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAddModifierBindValue*))((::PBYTE)hIl2Cpp + CLASS_3_1BBD4D97587294B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BBD4D97587294B9_ONTASKBEGIN_OFFSET))(this);
	}
};
