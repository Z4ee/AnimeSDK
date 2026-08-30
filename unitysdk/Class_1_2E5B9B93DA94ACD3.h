#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define CLASS_1_2E5B9B93DA94ACD3_METHOD_1_401D9792CCB3DD84_1_OFFSET UNITYSDK_OFFSET(0xC3CF8D0)
#define CLASS_1_2E5B9B93DA94ACD3_METHOD_1_401D9792CCB3DD84_OFFSET UNITYSDK_OFFSET(0xC3CF800)
#define CLASS_1_2E5B9B93DA94ACD3_METHOD_1_C2D0A28EDD88D4E9_OFFSET UNITYSDK_OFFSET(0xC3CF9A0)
#define CLASS_1_2E5B9B93DA94ACD3__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CF7F0)

inline static constexpr unsigned int Class_1_2E5B9B93DA94ACD3_TypeDefinitionIndex = 74930;

class Class_1_2E5B9B93DA94ACD3 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* GLBBINMGMDL; // 0x10
	::RPG::Client::ActivityIdleLive::SpecialEquip* AFOBIFOCBMD; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_2E5B9B93DA94ACD3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_401D9792CCB3DD84(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_2E5B9B93DA94ACD3_METHOD_1_401D9792CCB3DD84_OFFSET))(this, a1);
	}

	::System::Void Method_1_401D9792CCB3DD84_1(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_2E5B9B93DA94ACD3_METHOD_1_401D9792CCB3DD84_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C2D0A28EDD88D4E9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E5B9B93DA94ACD3_METHOD_1_C2D0A28EDD88D4E9_OFFSET))(this, a1);
	}
};
