#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class FormationMoveAddStream; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6485C8A7E38B4E35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E47100)
#define CLASS_3_6485C8A7E38B4E35__CTOR_OFFSET UNITYSDK_OFFSET(0x16E470D0)

inline static constexpr unsigned int Class_3_6485C8A7E38B4E35_TypeDefinitionIndex = 58281;

class Class_3_6485C8A7E38B4E35 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::FormationMoveAddStream*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveAddStream* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveAddStream*))((::PBYTE)hIl2Cpp + CLASS_3_6485C8A7E38B4E35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6485C8A7E38B4E35_ONTASKBEGIN_OFFSET))(this);
	}
};
