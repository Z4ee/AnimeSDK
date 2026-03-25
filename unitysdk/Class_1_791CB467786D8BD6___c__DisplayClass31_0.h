#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE457BC0)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__0_OFFSET UNITYSDK_OFFSET(0xE457E80)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__1_OFFSET UNITYSDK_OFFSET(0xE457FB0)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__2_OFFSET UNITYSDK_OFFSET(0xE458010)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__3_OFFSET UNITYSDK_OFFSET(0xE458030)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__4_OFFSET UNITYSDK_OFFSET(0xE457F70)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__5_OFFSET UNITYSDK_OFFSET(0xE457F90)

inline static constexpr unsigned int Class_1_791CB467786D8BD6___c__DisplayClass31_0_TypeDefinitionIndex = 62221;

class Class_1_791CB467786D8BD6___c__DisplayClass31_0 : public ::System::Object
{
public:
	::System::String* uiName; // 0x10
	::System::Action* __9__4; // 0x18
	::RPG::Client::LuaUIGameFlowContext* lastUIContext; // 0x20
	::RPG::Client::Promises::Promise* result; // 0x28
	::System::Action_1<::System::Exception*>* __9__5; // 0x30
	::RPG::Client::LuaUIGameFlowContext* nextUIContext; // 0x38
	::Il2CppArray<::System::Object*>* args; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
	}

	::System::Void __AsyncSwitchSectionUI_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__0_OFFSET))(this);
	}

	::System::Void __AsyncSwitchSectionUI_b__4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__4_OFFSET))(this);
	}

	::System::Void __AsyncSwitchSectionUI_b__5(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__5_OFFSET))(this, ex);
	}

	::System::Void __AsyncSwitchSectionUI_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__1_OFFSET))(this);
	}

	::System::Void __AsyncSwitchSectionUI_b__2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__2_OFFSET))(this);
	}

	::System::Void __AsyncSwitchSectionUI_b__3(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS31_0___ASYNCSWITCHSECTIONUI_B__3_OFFSET))(this, ex);
	}
};
