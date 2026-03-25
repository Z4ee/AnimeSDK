#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITriggerMonopolyModifier; }

#define CLASS_2_3C7C6CFCFCC0B338_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118FF0F0)
#define CLASS_2_3C7C6CFCFCC0B338_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x118FEA70)
#define CLASS_2_3C7C6CFCFCC0B338_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x118FEB50)
#define CLASS_2_3C7C6CFCFCC0B338_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118FE930)
#define CLASS_2_3C7C6CFCFCC0B338_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118FF060)
#define CLASS_2_3C7C6CFCFCC0B338_TICK_OFFSET UNITYSDK_OFFSET(0x118FEF80)
#define CLASS_2_3C7C6CFCFCC0B338__CTOR_OFFSET UNITYSDK_OFFSET(0x118FE920)

inline static constexpr unsigned int Class_2_3C7C6CFCFCC0B338_TypeDefinitionIndex = 47510;

class Class_2_3C7C6CFCFCC0B338 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::UITriggerMonopolyModifier* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UITriggerMonopolyModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UITriggerMonopolyModifier*))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_DISPOSE_OFFSET))(this);
	}
};
