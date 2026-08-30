#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchClientRaidMap; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_0CCCE164410D7AD7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19918050)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_21AFFD96111DC5FA_OFFSET UNITYSDK_OFFSET(0x19918230)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_5FBAD89A54D9F070_1_OFFSET UNITYSDK_OFFSET(0x19918300)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x19918610)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x19918720)
#define CLASS_2_0CCCE164410D7AD7_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x19918410)
#define CLASS_2_0CCCE164410D7AD7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19918090)
#define CLASS_2_0CCCE164410D7AD7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19918110)
#define CLASS_2_0CCCE164410D7AD7_TICK_OFFSET UNITYSDK_OFFSET(0x19918160)
#define CLASS_2_0CCCE164410D7AD7__CTOR_OFFSET UNITYSDK_OFFSET(0x19918030)

inline static constexpr unsigned int Class_2_0CCCE164410D7AD7_TypeDefinitionIndex = 53562;

class Class_2_0CCCE164410D7AD7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SwitchClientRaidMap* OFKGLJOAMLD; // 0x20
	::System::Single FJGFCHGGPIL; // 0x28
	::System::UInt32 NGPCOKICELI; // 0x2C
	::System::Single JEFFJNPPBGC; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchClientRaidMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchClientRaidMap*))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_21AFFD96111DC5FA(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_21AFFD96111DC5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_5FBAD89A54D9F070_1_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0CCCE164410D7AD7_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}
};
