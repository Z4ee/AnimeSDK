#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MakeCharacterHUDVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F8D006A033F52E64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153A6300)
#define CLASS_3_F8D006A033F52E64__CTOR_OFFSET UNITYSDK_OFFSET(0x153A62D0)

inline static constexpr unsigned int Class_3_F8D006A033F52E64_TypeDefinitionIndex = 55369;

class Class_3_F8D006A033F52E64 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MakeCharacterHUDVisible*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MakeCharacterHUDVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MakeCharacterHUDVisible*))((::PBYTE)hIl2Cpp + CLASS_3_F8D006A033F52E64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8D006A033F52E64_ONTASKBEGIN_OFFSET))(this);
	}
};
