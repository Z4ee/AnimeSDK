#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CakeRacePauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5DC3B3F6E0145846_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1561A3D0)
#define CLASS_3_5DC3B3F6E0145846__CTOR_OFFSET UNITYSDK_OFFSET(0x1561A3A0)

inline static constexpr unsigned int Class_3_5DC3B3F6E0145846_TypeDefinitionIndex = 50234;

class Class_3_5DC3B3F6E0145846 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CakeRacePauseGame*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRacePauseGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRacePauseGame*))((::PBYTE)hIl2Cpp + CLASS_3_5DC3B3F6E0145846__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5DC3B3F6E0145846_ONTASKBEGIN_OFFSET))(this);
	}
};
