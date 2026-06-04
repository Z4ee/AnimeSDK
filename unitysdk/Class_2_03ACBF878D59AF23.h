#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterMapByCondition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_03ACBF878D59AF23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CF0280)
#define CLASS_2_03ACBF878D59AF23_METHOD_2_8A61BFE372897102_OFFSET UNITYSDK_OFFSET(0x13CF05B0)
#define CLASS_2_03ACBF878D59AF23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13CF02C0)
#define CLASS_2_03ACBF878D59AF23_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13CF0760)
#define CLASS_2_03ACBF878D59AF23_TICK_OFFSET UNITYSDK_OFFSET(0x13CF07B0)
#define CLASS_2_03ACBF878D59AF23__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF0270)

inline static constexpr unsigned int Class_2_03ACBF878D59AF23_TypeDefinitionIndex = 49349;

class Class_2_03ACBF878D59AF23 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::EnterMapByCondition* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMapByCondition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + CLASS_2_03ACBF878D59AF23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03ACBF878D59AF23_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03ACBF878D59AF23_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03ACBF878D59AF23_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03ACBF878D59AF23_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A61BFE372897102(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_03ACBF878D59AF23_METHOD_2_8A61BFE372897102_OFFSET))(this, a1, a2, a3, a4);
	}
};
