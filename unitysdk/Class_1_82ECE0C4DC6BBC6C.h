#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_82ECE0C4DC6BBC6C_METHOD_1_167533AD7C206B29_1_OFFSET UNITYSDK_OFFSET(0xB214110)
#define CLASS_1_82ECE0C4DC6BBC6C_METHOD_1_167533AD7C206B29_OFFSET UNITYSDK_OFFSET(0xB213DB0)
#define CLASS_1_82ECE0C4DC6BBC6C__CTOR_OFFSET UNITYSDK_OFFSET(0xB214470)

inline static constexpr unsigned int Class_1_82ECE0C4DC6BBC6C_TypeDefinitionIndex = 57579;

class Class_1_82ECE0C4DC6BBC6C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::RPG::Client::ScheduleTask*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::ScheduleData_ScheduleDataUniqueKey, ::RPG::Client::ScheduleTask*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82ECE0C4DC6BBC6C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_167533AD7C206B29(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + CLASS_1_82ECE0C4DC6BBC6C_METHOD_1_167533AD7C206B29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_167533AD7C206B29_1(::RPG::Client::ScheduleData* a1, ::System::Action_1<::RPG::Client::ScheduleData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + CLASS_1_82ECE0C4DC6BBC6C_METHOD_1_167533AD7C206B29_1_OFFSET))(this, a1, a2);
	}
};
