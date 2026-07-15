#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_1_CF82246F32402DDA;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class ShowEvolveBuildCardSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C1AEB0C85E5F7A26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D23170)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x14D22FE0)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x14D22E10)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_16F68DFE5F1EF396_OFFSET UNITYSDK_OFFSET(0x14D23380)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_4C2F83AB6E861A93_OFFSET UNITYSDK_OFFSET(0x14D23450)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_569C8A2D03C8AA85_OFFSET UNITYSDK_OFFSET(0x14D23730)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x14D22B20)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_9533DDB47526C5C4_OFFSET UNITYSDK_OFFSET(0x14D22C60)
#define CLASS_2_C1AEB0C85E5F7A26_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14D236D0)
#define CLASS_2_C1AEB0C85E5F7A26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D22640)
#define CLASS_2_C1AEB0C85E5F7A26_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14D22F90)
#define CLASS_2_C1AEB0C85E5F7A26_TICK_OFFSET UNITYSDK_OFFSET(0x14D231C0)
#define CLASS_2_C1AEB0C85E5F7A26__CTOR_OFFSET UNITYSDK_OFFSET(0x14D22600)

inline static constexpr unsigned int Class_2_C1AEB0C85E5F7A26_TypeDefinitionIndex = 56013;

class Class_2_C1AEB0C85E5F7A26 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x18
	::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* Field_2_1; // 0x20
	::Class_1_CF82246F32402DDA* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::Il2CppArray<::System::UInt32>* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_04F02FC65FAA2E0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_04F02FC65FAA2E0C_OFFSET))(this);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C2F83AB6E861A93(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_4C2F83AB6E861A93_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_569C8A2D03C8AA85(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_569C8A2D03C8AA85_OFFSET))(this, a1);
	}

	::System::Void Method_2_16F68DFE5F1EF396(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_16F68DFE5F1EF396_OFFSET))(this, a1);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_9533DDB47526C5C4(::RPG::GameCore::EvolveBuildGearManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + CLASS_2_C1AEB0C85E5F7A26_METHOD_2_9533DDB47526C5C4_OFFSET))(this, a1);
	}
};
