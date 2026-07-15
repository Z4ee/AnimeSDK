#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionLoadFinish; }

#define CLASS_2_F0036DA2B4B7E9C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E78D10)
#define CLASS_2_F0036DA2B4B7E9C1_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15E78EA0)
#define CLASS_2_F0036DA2B4B7E9C1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E78F20)
#define CLASS_2_F0036DA2B4B7E9C1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E78D90)
#define CLASS_2_F0036DA2B4B7E9C1_TICK_OFFSET UNITYSDK_OFFSET(0x15E78DE0)
#define CLASS_2_F0036DA2B4B7E9C1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E78D00)

inline static constexpr unsigned int Class_2_F0036DA2B4B7E9C1_TypeDefinitionIndex = 50591;

class Class_2_F0036DA2B4B7E9C1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionLoadFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionLoadFinish*))((::PBYTE)hIl2Cpp + CLASS_2_F0036DA2B4B7E9C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0036DA2B4B7E9C1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0036DA2B4B7E9C1_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0036DA2B4B7E9C1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0036DA2B4B7E9C1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0036DA2B4B7E9C1_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
