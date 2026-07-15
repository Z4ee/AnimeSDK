#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RequestGroupStateChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9500E690955A5FE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D507F0)
#define CLASS_2_9500E690955A5FE1_METHOD_2_FC0CFB0AEEB99E45_OFFSET UNITYSDK_OFFSET(0x17D50F60)
#define CLASS_2_9500E690955A5FE1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D50990)
#define CLASS_2_9500E690955A5FE1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D508A0)
#define CLASS_2_9500E690955A5FE1_TICK_OFFSET UNITYSDK_OFFSET(0x17D50930)
#define CLASS_2_9500E690955A5FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D507E0)

inline static constexpr unsigned int Class_2_9500E690955A5FE1_TypeDefinitionIndex = 50776;

class Class_2_9500E690955A5FE1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RequestGroupStateChange* Field_2_1; // 0x20
	::System::UInt64 Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::UInt32 Field_2_4; // 0x34
	::System::UInt32 Field_2_5; // 0x38
	::System::UInt32 Field_2_6; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_9500E690955A5FE1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9500E690955A5FE1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9500E690955A5FE1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9500E690955A5FE1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9500E690955A5FE1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_FC0CFB0AEEB99E45(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9500E690955A5FE1_METHOD_2_FC0CFB0AEEB99E45_OFFSET))(this, a1, a2);
	}
};
