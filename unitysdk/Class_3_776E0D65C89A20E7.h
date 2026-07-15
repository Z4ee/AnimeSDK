#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class AdventureRevivePlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_776E0D65C89A20E7_METHOD_3_5484BE88606B6FC8_OFFSET UNITYSDK_OFFSET(0x14FF1800)
#define CLASS_3_776E0D65C89A20E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14FF1230)
#define CLASS_3_776E0D65C89A20E7__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF1200)

inline static constexpr unsigned int Class_3_776E0D65C89A20E7_TypeDefinitionIndex = 55341;

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

	::System::Void Method_3_5484BE88606B6FC8(::RPG::Client::MemberData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + CLASS_3_776E0D65C89A20E7_METHOD_3_5484BE88606B6FC8_OFFSET))(this, a1);
	}
};
