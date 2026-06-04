#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITriggerMonopolyModifier; }

#define CLASS_2_3C7C6CFCFCC0B338_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEE8610)
#define CLASS_2_3C7C6CFCFCC0B338_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xAEE7FA0)
#define CLASS_2_3C7C6CFCFCC0B338_METHOD_2_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0xAEE8080)
#define CLASS_2_3C7C6CFCFCC0B338_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAEE7E60)
#define CLASS_2_3C7C6CFCFCC0B338_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAEE8580)
#define CLASS_2_3C7C6CFCFCC0B338_TICK_OFFSET UNITYSDK_OFFSET(0xAEE84A0)
#define CLASS_2_3C7C6CFCFCC0B338__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE7E50)

inline static constexpr unsigned int Class_2_3C7C6CFCFCC0B338_TypeDefinitionIndex = 54972;

class Class_2_3C7C6CFCFCC0B338 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UITriggerMonopolyModifier* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C

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

	::System::Void Method_2_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_METHOD_2_52C18C0DA8AC23E5_OFFSET))(this);
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
