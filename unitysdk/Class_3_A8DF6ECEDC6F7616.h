#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SetLittleGameLevelVarShort; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A8DF6ECEDC6F7616_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E54820)
#define CLASS_3_A8DF6ECEDC6F7616__CTOR_OFFSET UNITYSDK_OFFSET(0x18E547F0)

inline static constexpr unsigned int Class_3_A8DF6ECEDC6F7616_TypeDefinitionIndex = 53242;

class Class_3_A8DF6ECEDC6F7616 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetLittleGameLevelVarShort*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLittleGameLevelVarShort* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + CLASS_3_A8DF6ECEDC6F7616__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A8DF6ECEDC6F7616_ONTASKBEGIN_OFFSET))(this);
	}
};
