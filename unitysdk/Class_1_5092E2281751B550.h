#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_917011F650CA881D_Class_1_449A5BE32B671549;
namespace RPG::Client { class RogueTournBuildRefHttpDataItem; }

#define CLASS_1_5092E2281751B550_METHOD_1_4C3F8490F45613C7_OFFSET UNITYSDK_OFFSET(0x185FC320)
#define CLASS_1_5092E2281751B550_METHOD_1_842446766C7EDE9B_OFFSET UNITYSDK_OFFSET(0x185FC690)
#define CLASS_1_5092E2281751B550__CTOR_OFFSET UNITYSDK_OFFSET(0x185FC700)

inline static constexpr unsigned int Class_1_5092E2281751B550_TypeDefinitionIndex = 67508;

class Class_1_5092E2281751B550 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550__CTOR_OFFSET))(this);
	}

	::RPG::Client::RogueTournBuildRefHttpDataItem* Method_1_4C3F8490F45613C7(::Class_1_917011F650CA881D_Class_1_449A5BE32B671549* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefHttpDataItem*(*)(::PVOID, ::Class_1_917011F650CA881D_Class_1_449A5BE32B671549*))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_METHOD_1_4C3F8490F45613C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_842446766C7EDE9B(::System::UInt32 a1, ::System::UInt32& a2, ::System::UInt32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_5092E2281751B550_METHOD_1_842446766C7EDE9B_OFFSET))(this, a1, a2, a3);
	}
};
