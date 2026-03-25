#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_385;
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02D85B5A8CADFFFE_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x119379D0)
#define CLASS_1_02D85B5A8CADFFFE_METHOD_1_54D646EC1F9A2B93_OFFSET UNITYSDK_OFFSET(0x11937A90)
#define CLASS_1_02D85B5A8CADFFFE_METHOD_1_6E5B23CDD3730329_OFFSET UNITYSDK_OFFSET(0x119379B0)
#define CLASS_1_02D85B5A8CADFFFE_METHOD_1_7DB99518138572E3_OFFSET UNITYSDK_OFFSET(0x11937800)
#define CLASS_1_02D85B5A8CADFFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x119377F0)

inline static constexpr unsigned int Class_1_02D85B5A8CADFFFE_TypeDefinitionIndex = 46572;

class Class_1_02D85B5A8CADFFFE : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_2; // 0x10
	::RPG::GameCore::AIDecisionGroup* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_385*>* Field_1_1; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::AIDecisionGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionGroup*))((::PBYTE)hIl2Cpp + CLASS_1_02D85B5A8CADFFFE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB99518138572E3(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_02D85B5A8CADFFFE_METHOD_1_7DB99518138572E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02D85B5A8CADFFFE_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_385* Method_1_54D646EC1F9A2B93()
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02D85B5A8CADFFFE_METHOD_1_54D646EC1F9A2B93_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* Method_1_6E5B23CDD3730329()
	{
		return ((::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02D85B5A8CADFFFE_METHOD_1_6E5B23CDD3730329_OFFSET))(this);
	}
};
