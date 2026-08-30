#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class RefreshMazeBuffTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B362BDD3B61EF086_METHOD_3_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x160D73A0)
#define CLASS_3_B362BDD3B61EF086_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160D7350)
#define CLASS_3_B362BDD3B61EF086__CTOR_OFFSET UNITYSDK_OFFSET(0x160D7320)

inline static constexpr unsigned int Class_3_B362BDD3B61EF086_TypeDefinitionIndex = 58525;

class Class_3_B362BDD3B61EF086 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RefreshMazeBuffTime*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshMazeBuffTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshMazeBuffTime*))((::PBYTE)hIl2Cpp + CLASS_3_B362BDD3B61EF086__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B362BDD3B61EF086_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B362BDD3B61EF086_METHOD_3_B877181B6123B7F6_OFFSET))(this);
	}
};
