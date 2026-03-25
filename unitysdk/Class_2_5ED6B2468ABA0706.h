#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSelectWheelItem; }

#define CLASS_2_5ED6B2468ABA0706_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1165A9A0)
#define CLASS_2_5ED6B2468ABA0706_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1165AB90)
#define CLASS_2_5ED6B2468ABA0706_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1165A800)
#define CLASS_2_5ED6B2468ABA0706_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1165AAE0)
#define CLASS_2_5ED6B2468ABA0706_TICK_OFFSET UNITYSDK_OFFSET(0x1165AB30)
#define CLASS_2_5ED6B2468ABA0706__CTOR_OFFSET UNITYSDK_OFFSET(0x1165A7F0)

inline static constexpr unsigned int Class_2_5ED6B2468ABA0706_TypeDefinitionIndex = 43321;

class Class_2_5ED6B2468ABA0706 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitSelectWheelItem* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSelectWheelItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSelectWheelItem*))((::PBYTE)hIl2Cpp + CLASS_2_5ED6B2468ABA0706__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED6B2468ABA0706_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED6B2468ABA0706_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED6B2468ABA0706_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5ED6B2468ABA0706_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5ED6B2468ABA0706_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}
};
