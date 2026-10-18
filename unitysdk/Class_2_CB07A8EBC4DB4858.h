#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRandomSecond; }

#define CLASS_2_CB07A8EBC4DB4858_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2AE7A0)
#define CLASS_2_CB07A8EBC4DB4858_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB2AE7E0)
#define CLASS_2_CB07A8EBC4DB4858_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB2AE930)
#define CLASS_2_CB07A8EBC4DB4858_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2AE7F0)
#define CLASS_2_CB07A8EBC4DB4858_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB2AE860)
#define CLASS_2_CB07A8EBC4DB4858_TICK_OFFSET UNITYSDK_OFFSET(0xB2AE8B0)
#define CLASS_2_CB07A8EBC4DB4858__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AE790)

inline static constexpr unsigned int Class_2_CB07A8EBC4DB4858_TypeDefinitionIndex = 58919;

class Class_2_CB07A8EBC4DB4858 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitRandomSecond* OFKGLJOAMLD; // 0x18
	::System::Single DKOFFPPGEFI; // 0x20
	::System::Single BOBKAKEJPEI; // 0x24

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRandomSecond* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRandomSecond*))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB07A8EBC4DB4858_ONSKIP_OFFSET))(this);
	}
};
