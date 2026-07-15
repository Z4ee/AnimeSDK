#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandCatchItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7D603E133CE77B88_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FF01A0)
#define CLASS_2_7D603E133CE77B88_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14FF06D0)
#define CLASS_2_7D603E133CE77B88_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14FF0240)
#define CLASS_2_7D603E133CE77B88_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14FF0680)
#define CLASS_2_7D603E133CE77B88_TICK_OFFSET UNITYSDK_OFFSET(0x14FF01E0)
#define CLASS_2_7D603E133CE77B88__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF0190)

inline static constexpr unsigned int Class_2_7D603E133CE77B88_TypeDefinitionIndex = 50880;

class Class_2_7D603E133CE77B88 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SwitchHandCatchItem* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchItem*))((::PBYTE)hIl2Cpp + CLASS_2_7D603E133CE77B88__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D603E133CE77B88_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D603E133CE77B88_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D603E133CE77B88_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D603E133CE77B88_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D603E133CE77B88_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
