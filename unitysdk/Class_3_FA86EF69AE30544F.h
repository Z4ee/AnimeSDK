#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FinishTarotBookTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FA86EF69AE30544F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA4366E0)
#define CLASS_3_FA86EF69AE30544F__CTOR_OFFSET UNITYSDK_OFFSET(0xA4366B0)

inline static constexpr unsigned int Class_3_FA86EF69AE30544F_TypeDefinitionIndex = 54322;

class Class_3_FA86EF69AE30544F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FinishTarotBookTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishTarotBookTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishTarotBookTalk*))((::PBYTE)hIl2Cpp + CLASS_3_FA86EF69AE30544F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA86EF69AE30544F_ONTASKBEGIN_OFFSET))(this);
	}
};
