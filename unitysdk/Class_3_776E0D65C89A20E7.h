#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureRevivePlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_776E0D65C89A20E7_METHOD_3_EF880DF3B384C6F7_OFFSET UNITYSDK_OFFSET(0xB506A60)
#define CLASS_3_776E0D65C89A20E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5065C0)
#define CLASS_3_776E0D65C89A20E7__CTOR_OFFSET UNITYSDK_OFFSET(0xB506590)

inline static constexpr unsigned int Class_3_776E0D65C89A20E7_TypeDefinitionIndex = 54118;

class Class_3_776E0D65C89A20E7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureRevivePlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureRevivePlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureRevivePlayer*))((::PBYTE)hIl2Cpp + CLASS_3_776E0D65C89A20E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_776E0D65C89A20E7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_EF880DF3B384C6F7(::RPG::Client::MemberData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + CLASS_3_776E0D65C89A20E7_METHOD_3_EF880DF3B384C6F7_OFFSET))(this, a1);
	}
};
