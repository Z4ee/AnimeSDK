#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class QuestGetReward; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6E19E444A9831671_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18756740)
#define CLASS_2_6E19E444A9831671_METHOD_2_1B36A19E067B4133_OFFSET UNITYSDK_OFFSET(0x18756860)
#define CLASS_2_6E19E444A9831671_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x187565E0)
#define CLASS_2_6E19E444A9831671_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18756270)
#define CLASS_2_6E19E444A9831671_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x187566F0)
#define CLASS_2_6E19E444A9831671_TICK_OFFSET UNITYSDK_OFFSET(0x18756800)
#define CLASS_2_6E19E444A9831671__CTOR_OFFSET UNITYSDK_OFFSET(0x18756260)

inline static constexpr unsigned int Class_2_6E19E444A9831671_TypeDefinitionIndex = 58518;

class Class_2_6E19E444A9831671 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::QuestGetReward* IGHAHBNLIJA; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* NINPFFIMKLJ; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QuestGetReward* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QuestGetReward*))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_1B36A19E067B4133(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6E19E444A9831671_METHOD_2_1B36A19E067B4133_OFFSET))(this, a1, a2);
	}
};
