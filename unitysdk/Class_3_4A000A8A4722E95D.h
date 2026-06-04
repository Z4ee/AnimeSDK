#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChangeCharacterUIDisplay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4A000A8A4722E95D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB2AE90)
#define CLASS_3_4A000A8A4722E95D__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2AE60)

inline static constexpr unsigned int Class_3_4A000A8A4722E95D_TypeDefinitionIndex = 51322;

class Class_3_4A000A8A4722E95D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChangeCharacterUIDisplay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterUIDisplay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterUIDisplay*))((::PBYTE)hIl2Cpp + CLASS_3_4A000A8A4722E95D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A000A8A4722E95D_ONTASKBEGIN_OFFSET))(this);
	}
};
