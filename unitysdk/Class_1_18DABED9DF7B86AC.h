#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F77D015F1B3064A4;
namespace RPG::Client { class BattleUITeamBlockItemViewData; }
namespace UnityEngine { class Transform; }

#define CLASS_1_18DABED9DF7B86AC_METHOD_1_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0xB99FDE0)
#define CLASS_1_18DABED9DF7B86AC_METHOD_1_43120711DC71F4B2_OFFSET UNITYSDK_OFFSET(0xB99FD40)
#define CLASS_1_18DABED9DF7B86AC_METHOD_1_A447D5012C7E072F_OFFSET UNITYSDK_OFFSET(0xB99FE40)
#define CLASS_1_18DABED9DF7B86AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB99FDD0)

inline static constexpr unsigned int Class_1_18DABED9DF7B86AC_TypeDefinitionIndex = 71182;

class Class_1_18DABED9DF7B86AC : public ::System::Object
{
public:
	::Class_1_F77D015F1B3064A4* CNHBIOJOFDK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18DABED9DF7B86AC__CTOR_OFFSET))(this);
	}

	static ::Class_1_18DABED9DF7B86AC* Method_1_43120711DC71F4B2(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_18DABED9DF7B86AC*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_18DABED9DF7B86AC_METHOD_1_43120711DC71F4B2_OFFSET))(a1);
	}

	::System::Void Method_1_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_18DABED9DF7B86AC_METHOD_1_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_1_A447D5012C7E072F(::RPG::Client::BattleUITeamBlockItemViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleUITeamBlockItemViewData*))((::PBYTE)hIl2Cpp + CLASS_1_18DABED9DF7B86AC_METHOD_1_A447D5012C7E072F_OFFSET))(this, a1);
	}
};
