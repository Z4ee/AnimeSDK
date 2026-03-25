#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CalculateMissionCustomValue; }
namespace RPG::GameCore { class MissionCustomValuePair; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AD4C6748743BD198_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10621660)
#define CLASS_2_AD4C6748743BD198_METHOD_2_390FABC99AD6B7EE_OFFSET UNITYSDK_OFFSET(0x10621AD0)
#define CLASS_2_AD4C6748743BD198_METHOD_2_E7070A6C038BF402_OFFSET UNITYSDK_OFFSET(0x10621830)
#define CLASS_2_AD4C6748743BD198_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x106216A0)
#define CLASS_2_AD4C6748743BD198_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10621A20)
#define CLASS_2_AD4C6748743BD198_TICK_OFFSET UNITYSDK_OFFSET(0x10621A70)
#define CLASS_2_AD4C6748743BD198__CTOR_OFFSET UNITYSDK_OFFSET(0x10621650)

inline static constexpr unsigned int Class_2_AD4C6748743BD198_TypeDefinitionIndex = 42619;

class Class_2_AD4C6748743BD198 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CalculateMissionCustomValue* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalculateMissionCustomValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalculateMissionCustomValue*))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_E7070A6C038BF402()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198_METHOD_2_E7070A6C038BF402_OFFSET))(this);
	}

	::System::UInt32 Method_2_390FABC99AD6B7EE(::RPG::GameCore::MissionCustomValuePair* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MissionCustomValuePair*))((::PBYTE)hIl2Cpp + CLASS_2_AD4C6748743BD198_METHOD_2_390FABC99AD6B7EE_OFFSET))(this, a1);
	}
};
