#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RogueWolfGunRandomCase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8064023F062C8A5F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1388FAD0)
#define CLASS_3_8064023F062C8A5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1388FAA0)

inline static constexpr unsigned int Class_3_8064023F062C8A5F_TypeDefinitionIndex = 54649;

class Class_3_8064023F062C8A5F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueWolfGunRandomCase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueWolfGunRandomCase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueWolfGunRandomCase*))((::PBYTE)hIl2Cpp + CLASS_3_8064023F062C8A5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8064023F062C8A5F_ONTASKBEGIN_OFFSET))(this);
	}
};
