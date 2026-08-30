#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BF41658285EE2AD3_METHOD_1_ABABB11E2A0ED9C5_1_OFFSET UNITYSDK_OFFSET(0x170817B0)
#define CLASS_1_BF41658285EE2AD3_METHOD_1_ABABB11E2A0ED9C5_OFFSET UNITYSDK_OFFSET(0x17081490)
#define CLASS_1_BF41658285EE2AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x17081AD0)

inline static constexpr unsigned int Class_1_BF41658285EE2AD3_TypeDefinitionIndex = 62492;

class Class_1_BF41658285EE2AD3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::RPG::Client::ScheduleTask*>* IFPFIFOFAMB; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::RPG::Client::ScheduleTask*>* LGAKKMDBELN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF41658285EE2AD3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ABABB11E2A0ED9C5(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF41658285EE2AD3_METHOD_1_ABABB11E2A0ED9C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABABB11E2A0ED9C5_1(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF41658285EE2AD3_METHOD_1_ABABB11E2A0ED9C5_1_OFFSET))(this, a1, a2);
	}
};
