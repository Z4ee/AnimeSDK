#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RequestGroupStateChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9500E690955A5FE1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A67570)
#define CLASS_2_9500E690955A5FE1_METHOD_2_FC0CFB0AEEB99E45_OFFSET UNITYSDK_OFFSET(0x15A67CE0)
#define CLASS_2_9500E690955A5FE1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A67710)
#define CLASS_2_9500E690955A5FE1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A67620)
#define CLASS_2_9500E690955A5FE1_TICK_OFFSET UNITYSDK_OFFSET(0x15A676B0)
#define CLASS_2_9500E690955A5FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x15A67560)

inline static constexpr unsigned int Class_2_9500E690955A5FE1_TypeDefinitionIndex = 53458;

class Class_2_9500E690955A5FE1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RequestGroupStateChange* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::UInt32 DEMEIKDPBAL; // 0x28
	::System::UInt32 ACHIDNBOBLA; // 0x2C
	::System::UInt32 PEEFHNHDBMF; // 0x30
	::System::UInt32 AJJFAODDKFB; // 0x34
	::System::UInt64 FDIBNPCCJAE; // 0x38

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
