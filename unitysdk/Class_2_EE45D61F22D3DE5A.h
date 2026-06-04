#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class RandomSelector; }
namespace RPG::GameCore { class RandomSelectorCase; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EE45D61F22D3DE5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA0BC90)
#define CLASS_2_EE45D61F22D3DE5A_METHOD_2_AAD4BA400DBF0191_OFFSET UNITYSDK_OFFSET(0xBA0C380)
#define CLASS_2_EE45D61F22D3DE5A_METHOD_2_F0BF762408B8C912_OFFSET UNITYSDK_OFFSET(0xBA0BFB0)
#define CLASS_2_EE45D61F22D3DE5A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA0BF40)
#define CLASS_2_EE45D61F22D3DE5A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA0C510)
#define CLASS_2_EE45D61F22D3DE5A_TICK_OFFSET UNITYSDK_OFFSET(0xBA0BD40)
#define CLASS_2_EE45D61F22D3DE5A__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0BC80)

inline static constexpr unsigned int Class_2_EE45D61F22D3DE5A_TypeDefinitionIndex = 49717;

class Class_2_EE45D61F22D3DE5A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RandomSelector* Field_2_0; // 0x18
	::Struct_2_D3027B1CDFF61281 Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RandomSelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_AAD4BA400DBF0191(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_METHOD_2_AAD4BA400DBF0191_OFFSET))(this, a1);
	}

	::RPG::GameCore::RandomSelectorCase* Method_2_F0BF762408B8C912()
	{
		return ((::RPG::GameCore::RandomSelectorCase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE45D61F22D3DE5A_METHOD_2_F0BF762408B8C912_OFFSET))(this);
	}
};
