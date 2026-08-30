#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueEvent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_D7F302692E9A4951_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B84890)
#define CLASS_2_D7F302692E9A4951_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x11B847B0)
#define CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_1_OFFSET UNITYSDK_OFFSET(0x11B84CA0)
#define CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_OFFSET UNITYSDK_OFFSET(0x11B84B80)
#define CLASS_2_D7F302692E9A4951_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x11B848E0)
#define CLASS_2_D7F302692E9A4951_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B849D0)
#define CLASS_2_D7F302692E9A4951_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B84A20)
#define CLASS_2_D7F302692E9A4951_TICK_OFFSET UNITYSDK_OFFSET(0x11B84A70)
#define CLASS_2_D7F302692E9A4951__CTOR_OFFSET UNITYSDK_OFFSET(0x11B84780)

inline static constexpr unsigned int Class_2_D7F302692E9A4951_TypeDefinitionIndex = 59031;

class Class_2_D7F302692E9A4951 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitDialogueEvent* OFKGLJOAMLD; // 0x20
	::System::String* HCCMEMNAKAE; // 0x28
	::System::Boolean CGCPJBPKEOF; // 0x30
	::System::Boolean EJNDLAMCBKJ; // 0x31
	::System::Int32 EBCMGIJNDPN; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueEvent*))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_OFFSET))(this, a1);
	}

	::System::Void Method_2_75E77C70EE78E158_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_75E77C70EE78E158_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7F302692E9A4951_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}
};
