#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_7803F76B95FB6F99;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CEE6EB4854035A8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7320C0)
#define CLASS_2_CEE6EB4854035A8A_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA732830)
#define CLASS_2_CEE6EB4854035A8A_METHOD_2_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0xA7321A0)
#define CLASS_2_CEE6EB4854035A8A_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA732740)
#define CLASS_2_CEE6EB4854035A8A_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA7325C0)
#define CLASS_2_CEE6EB4854035A8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA732150)
#define CLASS_2_CEE6EB4854035A8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA732510)
#define CLASS_2_CEE6EB4854035A8A_TICK_OFFSET UNITYSDK_OFFSET(0xA732560)
#define CLASS_2_CEE6EB4854035A8A__CTOR_OFFSET UNITYSDK_OFFSET(0xA731FC0)
#define CLASS_2_CEE6EB4854035A8A___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0xA732840)

inline static constexpr unsigned int Class_2_CEE6EB4854035A8A_TypeDefinitionIndex = 49209;

class Class_2_CEE6EB4854035A8A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_7803F76B95FB6F99* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::RPG::Client::LuaUIController* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7803F76B95FB6F99* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7803F76B95FB6F99*))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEE6EB4854035A8A_METHOD_2_025E4B1A2211CF52_OFFSET))(this);
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
