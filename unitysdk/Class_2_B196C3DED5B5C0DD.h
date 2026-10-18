#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class LoopTargetList; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B196C3DED5B5C0DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2AD90)
#define CLASS_2_B196C3DED5B5C0DD_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0xBE2B0B0)
#define CLASS_2_B196C3DED5B5C0DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE2AE70)
#define CLASS_2_B196C3DED5B5C0DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE2B240)
#define CLASS_2_B196C3DED5B5C0DD_TICK_OFFSET UNITYSDK_OFFSET(0xBE2B290)
#define CLASS_2_B196C3DED5B5C0DD__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2AD10)

inline static constexpr unsigned int Class_2_B196C3DED5B5C0DD_TypeDefinitionIndex = 55162;

class Class_2_B196C3DED5B5C0DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::LoopTargetList* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* NDOFCGDDHHD; // 0x28
	::System::Int32 CALNAPHILLA; // 0x30
	::System::Int32 DLANCNECDDA; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoopTargetList* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoopTargetList*))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B196C3DED5B5C0DD_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}
};
