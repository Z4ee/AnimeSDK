#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_B3A86C68B4F5D00F;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CEE6EB4854035A8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1889A0F0)
#define CLASS_2_CEE6EB4854035A8A_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1889A9B0)
#define CLASS_2_CEE6EB4854035A8A_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1889A8C0)
#define CLASS_2_CEE6EB4854035A8A_METHOD_2_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0x1889A2B0)
#define CLASS_2_CEE6EB4854035A8A_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1889A740)
#define CLASS_2_CEE6EB4854035A8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1889A260)
#define CLASS_2_CEE6EB4854035A8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1889A690)
#define CLASS_2_CEE6EB4854035A8A_TICK_OFFSET UNITYSDK_OFFSET(0x1889A6E0)
#define CLASS_2_CEE6EB4854035A8A__CTOR_OFFSET UNITYSDK_OFFSET(0x18899FF0)
#define CLASS_2_CEE6EB4854035A8A___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x1889A9C0)

inline static constexpr unsigned int Class_2_CEE6EB4854035A8A_TypeDefinitionIndex = 52887;

class Class_2_CEE6EB4854035A8A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x18
	::Class_3_07C3C4D2990C49EE* BKCCFPHPIHM; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::Class_3_B3A86C68B4F5D00F* OFKGLJOAMLD; // 0x30
	::Class_3_07C3C4D2990C49EE* CKMKMCAOLOG; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B3A86C68B4F5D00F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B3A86C68B4F5D00F*))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_ONSKIP_OFFSET))(this);
	}

	::System::Void Method_2_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_METHOD_2_8CB9BDF340E2FC64_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void __ShowUI_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A___SHOWUI_B__6_0_OFFSET))(this);
	}
};
