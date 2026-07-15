#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ExitGameFlow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FB2C5B1080580105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19360E40)
#define CLASS_3_FB2C5B1080580105__CTOR_OFFSET UNITYSDK_OFFSET(0x19360E10)

inline static constexpr unsigned int Class_3_FB2C5B1080580105_TypeDefinitionIndex = 55542;

class Class_3_FB2C5B1080580105 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ExitGameFlow*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitGameFlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitGameFlow*))((::PBYTE)hIl2Cpp + CLASS_3_FB2C5B1080580105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FB2C5B1080580105_ONTASKBEGIN_OFFSET))(this);
	}
};
