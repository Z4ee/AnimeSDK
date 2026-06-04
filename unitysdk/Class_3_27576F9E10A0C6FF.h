#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GroupToMemberEntityDataAdapter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27576F9E10A0C6FF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAB32E30)
#define CLASS_3_27576F9E10A0C6FF__CTOR_OFFSET UNITYSDK_OFFSET(0xAB32E00)

inline static constexpr unsigned int Class_3_27576F9E10A0C6FF_TypeDefinitionIndex = 49477;

class Class_3_27576F9E10A0C6FF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::GroupToMemberEntityDataAdapter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupToMemberEntityDataAdapter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupToMemberEntityDataAdapter*))((::PBYTE)hIl2Cpp + CLASS_3_27576F9E10A0C6FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27576F9E10A0C6FF_ONTASKBEGIN_OFFSET))(this);
	}
};
