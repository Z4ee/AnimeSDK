#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_461BA0847EF9B96D_METHOD_1_ED49E43DE9158B60_1_OFFSET UNITYSDK_OFFSET(0xC335360)
#define CLASS_1_461BA0847EF9B96D_METHOD_1_ED49E43DE9158B60_OFFSET UNITYSDK_OFFSET(0xC335020)
#define CLASS_1_461BA0847EF9B96D__CTOR_OFFSET UNITYSDK_OFFSET(0xC3356A0)

inline static constexpr unsigned int Class_1_461BA0847EF9B96D_TypeDefinitionIndex = 62409;

class Class_1_461BA0847EF9B96D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::RPG::Client::ScheduleTask*>* LGAKKMDBELN; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::RPG::Client::ScheduleTask*>* IFPFIFOFAMB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_461BA0847EF9B96D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ED49E43DE9158B60(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + CLASS_1_461BA0847EF9B96D_METHOD_1_ED49E43DE9158B60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ED49E43DE9158B60_1(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + CLASS_1_461BA0847EF9B96D_METHOD_1_ED49E43DE9158B60_1_OFFSET))(this, a1, a2);
	}
};
