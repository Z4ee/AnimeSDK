#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ElfShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_ABE2AA3B670B3E96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1527E2D0)
#define CLASS_2_ABE2AA3B670B3E96_METHOD_2_6A61469FD94C414E_OFFSET UNITYSDK_OFFSET(0x1527EA10)
#define CLASS_2_ABE2AA3B670B3E96_METHOD_2_84C1BB3395B8838E_OFFSET UNITYSDK_OFFSET(0x1527E790)
#define CLASS_2_ABE2AA3B670B3E96_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x1527E8A0)
#define CLASS_2_ABE2AA3B670B3E96_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x1527E560)
#define CLASS_2_ABE2AA3B670B3E96_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1527E3B0)
#define CLASS_2_ABE2AA3B670B3E96_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1527EBA0)
#define CLASS_2_ABE2AA3B670B3E96_TICK_OFFSET UNITYSDK_OFFSET(0x1527EBF0)
#define CLASS_2_ABE2AA3B670B3E96__CTOR_OFFSET UNITYSDK_OFFSET(0x1527E2C0)
#define CLASS_2_ABE2AA3B670B3E96___ONUIEXIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1527ECE0)
#define CLASS_2_ABE2AA3B670B3E96___SHOWUI_B__3_0_OFFSET UNITYSDK_OFFSET(0x1527EC50)

inline static constexpr unsigned int Class_2_ABE2AA3B670B3E96_TypeDefinitionIndex = 58250;

class Class_2_ABE2AA3B670B3E96 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* KJBMODOOOPC; // 0x0
	::RPG::GameCore::ElfShowUI* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* BKCCFPHPIHM; // 0x20
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_84C1BB3395B8838E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_METHOD_2_84C1BB3395B8838E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_METHOD_2_8F059A365E90744C_OFFSET))(this);
	}

	::System::Void Method_2_6A61469FD94C414E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_METHOD_2_6A61469FD94C414E_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96_TICK_OFFSET))(this, a1);
	}

	::System::Void __ShowUI_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96___SHOWUI_B__3_0_OFFSET))(this);
	}

	::System::Void __OnUIExit_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABE2AA3B670B3E96___ONUIEXIT_B__6_0_OFFSET))(this);
	}
};
