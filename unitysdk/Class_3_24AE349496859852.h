#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForceMakeCharacterActionable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_24AE349496859852_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B3C0C0)
#define CLASS_3_24AE349496859852__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3C090)

inline static constexpr unsigned int Class_3_24AE349496859852_TypeDefinitionIndex = 44069;

class Class_3_24AE349496859852 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceMakeCharacterActionable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceMakeCharacterActionable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceMakeCharacterActionable*))((::PBYTE)hIl2Cpp + CLASS_3_24AE349496859852__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_24AE349496859852_ONTASKBEGIN_OFFSET))(this);
	}
};
