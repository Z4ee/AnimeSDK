#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/Class_1_7B7970D0E94833DA.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_3_6D73516CC6FEADD7;
class Class_3_F33F9DC5F4112336;
namespace MoleMole { class ComprehensiveAttack_ForceExitSettingData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D24637F5237CFC57_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15C986F0)
#define CLASS_2_D24637F5237CFC57_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x15C97FA0)
#define CLASS_2_D24637F5237CFC57_METHOD_2_773777C52C25754A_OFFSET UNITYSDK_OFFSET(0x15C98560)
#define CLASS_2_D24637F5237CFC57_METHOD_2_A80279F3FDB3383E_OFFSET UNITYSDK_OFFSET(0x15C98880)
#define CLASS_2_D24637F5237CFC57_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15C989F0)
#define CLASS_2_D24637F5237CFC57__CTOR_OFFSET UNITYSDK_OFFSET(0x15C987C0)

inline static constexpr unsigned int Class_2_D24637F5237CFC57_TypeDefinitionIndex = 54313;

class Class_2_D24637F5237CFC57 : public ::Class_1_7B7970D0E94833DA
{
public:
	::Class_3_6D73516CC6FEADD7* Field_2_1; // 0x28
	::MoleMole::ComprehensiveAttack_ForceExitSettingData* Field_2_4; // 0x30
	::Il2CppArray<::System::Int32>* Field_2_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_10; // 0x40
	::Class_3_F33F9DC5F4112336* Field_2_0; // 0x48
	::System::Single Field_2_8; // 0x50
	::System::Single Field_2_7; // 0x54
	::System::Boolean Field_2_9; // 0x58
	::System::Boolean Field_2_6; // 0x59
	::System::Int32 Field_2_3; // 0x5C
	::System::Int32 Field_2_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D24637F5237CFC57__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D24637F5237CFC57_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D24637F5237CFC57_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::BehaviorDesigner::Runtime::Tasks::TaskStatus Method_2_773777C52C25754A(::UnityEngine::AnimatorStateInfo a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D24637F5237CFC57_METHOD_2_773777C52C25754A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A80279F3FDB3383E(::Class_3_F33F9DC5F4112336* a1, ::Class_3_6D73516CC6FEADD7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_3_6D73516CC6FEADD7*))((::PBYTE)hIl2Cpp + CLASS_2_D24637F5237CFC57_METHOD_2_A80279F3FDB3383E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D24637F5237CFC57_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
