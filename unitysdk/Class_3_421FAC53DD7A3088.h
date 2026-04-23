#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AddTimeRewindBtnCD; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_421FAC53DD7A3088_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12879AC0)
#define CLASS_3_421FAC53DD7A3088__CTOR_OFFSET UNITYSDK_OFFSET(0x12879A90)

inline static constexpr unsigned int Class_3_421FAC53DD7A3088_TypeDefinitionIndex = 49188;

class Class_3_421FAC53DD7A3088 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddTimeRewindBtnCD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimeRewindBtnCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimeRewindBtnCD*))((::PBYTE)hIl2Cpp + CLASS_3_421FAC53DD7A3088__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_421FAC53DD7A3088_ONTASKBEGIN_OFFSET))(this);
	}
};
