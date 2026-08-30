#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITriggerMonopolyModifier; }

#define CLASS_2_3C7C6CFCFCC0B338_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC323320)
#define CLASS_2_3C7C6CFCFCC0B338_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xC322C40)
#define CLASS_2_3C7C6CFCFCC0B338_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xC322D20)
#define CLASS_2_3C7C6CFCFCC0B338_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC322B00)
#define CLASS_2_3C7C6CFCFCC0B338_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC323290)
#define CLASS_2_3C7C6CFCFCC0B338_TICK_OFFSET UNITYSDK_OFFSET(0xC3231B0)
#define CLASS_2_3C7C6CFCFCC0B338__CTOR_OFFSET UNITYSDK_OFFSET(0xC322AF0)

inline static constexpr unsigned int Class_2_3C7C6CFCFCC0B338_TypeDefinitionIndex = 58987;

class Class_2_3C7C6CFCFCC0B338 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UITriggerMonopolyModifier* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Single LLNIGIGFCEA; // 0x28
	::System::Boolean BNDIHDEOELB; // 0x2C

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

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C7C6CFCFCC0B338_METHOD_2_F5B4708E7805566C_OFFSET))(this);
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
