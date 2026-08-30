#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyShowSwitchFromSpeTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A5ECC652BC1D6C49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0E57C0)
#define CLASS_2_A5ECC652BC1D6C49_METHOD_2_FB31A773A52994BE_OFFSET UNITYSDK_OFFSET(0x1A0E54A0)
#define CLASS_2_A5ECC652BC1D6C49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0E5320)
#define CLASS_2_A5ECC652BC1D6C49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A0E5730)
#define CLASS_2_A5ECC652BC1D6C49_TICK_OFFSET UNITYSDK_OFFSET(0x1A0E5840)
#define CLASS_2_A5ECC652BC1D6C49__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E5310)

inline static constexpr unsigned int Class_2_A5ECC652BC1D6C49_TypeDefinitionIndex = 58371;

class Class_2_A5ECC652BC1D6C49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*))((::PBYTE)hIl2Cpp + CLASS_2_A5ECC652BC1D6C49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5ECC652BC1D6C49_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_FB31A773A52994BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A5ECC652BC1D6C49_METHOD_2_FB31A773A52994BE_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5ECC652BC1D6C49_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5ECC652BC1D6C49_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A5ECC652BC1D6C49_TICK_OFFSET))(this, a1);
	}
};
