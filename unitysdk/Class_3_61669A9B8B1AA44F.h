#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class MemberToMemberEntityDataAdapter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_61669A9B8B1AA44F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1839C350)
#define CLASS_3_61669A9B8B1AA44F__CTOR_OFFSET UNITYSDK_OFFSET(0x1839C320)

inline static constexpr unsigned int Class_3_61669A9B8B1AA44F_TypeDefinitionIndex = 50612;

class Class_3_61669A9B8B1AA44F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::MemberToMemberEntityDataAdapter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MemberToMemberEntityDataAdapter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MemberToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + CLASS_3_61669A9B8B1AA44F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61669A9B8B1AA44F_ONTASKBEGIN_OFFSET))(this);
	}
};
