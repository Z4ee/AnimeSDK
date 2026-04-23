#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define CLASS_1_2E5B9B93DA94ACD3_METHOD_1_401D9792CCB3DD84_1_OFFSET UNITYSDK_OFFSET(0x12922F20)
#define CLASS_1_2E5B9B93DA94ACD3_METHOD_1_401D9792CCB3DD84_OFFSET UNITYSDK_OFFSET(0x12922E50)
#define CLASS_1_2E5B9B93DA94ACD3_METHOD_1_99A5531F4A7DF520_OFFSET UNITYSDK_OFFSET(0x12922FF0)
#define CLASS_1_2E5B9B93DA94ACD3__CTOR_OFFSET UNITYSDK_OFFSET(0x12922E40)

inline static constexpr unsigned int Class_1_2E5B9B93DA94ACD3_TypeDefinitionIndex = 69288;

class Class_1_2E5B9B93DA94ACD3 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::SpecialEquip* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* Field_1_1; // 0x18

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

	::System::Boolean Method_1_99A5531F4A7DF520(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E5B9B93DA94ACD3_METHOD_1_99A5531F4A7DF520_OFFSET))(this, a1);
	}
};
