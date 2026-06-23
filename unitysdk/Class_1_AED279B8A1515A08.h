#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_EEA0111A28582B57;
class Class_2_79AE422BA06F6D26_23;
class Class_2_883E8B558C123D1C;
namespace MoleMole { class UIActivityWeekRewardComponentPopWindowController; }

#define CLASS_1_AED279B8A1515A08_METHOD_1_14399C2402857AF7_OFFSET UNITYSDK_OFFSET(0x10578310)
#define CLASS_1_AED279B8A1515A08_METHOD_1_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x105779F0)
#define CLASS_1_AED279B8A1515A08_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x10577620)
#define CLASS_1_AED279B8A1515A08_METHOD_1_9B23FC08130ED5FB_OFFSET UNITYSDK_OFFSET(0x10578050)
#define CLASS_1_AED279B8A1515A08_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105782C0)
#define CLASS_1_AED279B8A1515A08_METHOD_1_D66F8BF220AC0CB8_OFFSET UNITYSDK_OFFSET(0x10577270)
#define CLASS_1_AED279B8A1515A08__CTOR_OFFSET UNITYSDK_OFFSET(0x10577210)

inline static constexpr unsigned int Class_1_AED279B8A1515A08_TypeDefinitionIndex = 59800;

class Class_1_AED279B8A1515A08 : public ::System::Object
{
public:
	::Class_2_883E8B558C123D1C* Field_1_6; // 0x10
	::MoleMole::UIActivityWeekRewardComponentPopWindowController* Field_1_0; // 0x18
	::Class_2_79AE422BA06F6D26_23* Field_1_1; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_2; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D66F8BF220AC0CB8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08_METHOD_1_D66F8BF220AC0CB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_1_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08_METHOD_1_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_1_9B23FC08130ED5FB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08_METHOD_1_9B23FC08130ED5FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_14399C2402857AF7(::MoleMole::UIActivityWeekRewardComponentPopWindowController* a1, ::Class_1_EEA0111A28582B57* a2, ::Class_2_883E8B558C123D1C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityWeekRewardComponentPopWindowController*, ::Class_1_EEA0111A28582B57*, ::Class_2_883E8B558C123D1C*))((::PBYTE)hIl2Cpp + CLASS_1_AED279B8A1515A08_METHOD_1_14399C2402857AF7_OFFSET))(this, a1, a2, a3);
	}
};
