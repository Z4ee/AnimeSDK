#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

class Class_2_4446D357C89B715C;
namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define CLASS_2_6D9FE4914E089F6D_METHOD_2_AAE2768E79420046_OFFSET UNITYSDK_OFFSET(0x12AED1F0)
#define CLASS_2_6D9FE4914E089F6D_METHOD_2_EA80642E2908C486_1_OFFSET UNITYSDK_OFFSET(0x12AED320)
#define CLASS_2_6D9FE4914E089F6D_METHOD_2_EA80642E2908C486_OFFSET UNITYSDK_OFFSET(0x12AED170)
#define CLASS_2_6D9FE4914E089F6D_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x12AED080)
#define CLASS_2_6D9FE4914E089F6D_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12AECC90)
#define CLASS_2_6D9FE4914E089F6D__CTOR_OFFSET UNITYSDK_OFFSET(0x12AED0E0)

inline static constexpr unsigned int Class_2_6D9FE4914E089F6D_TypeDefinitionIndex = 80734;

class Class_2_6D9FE4914E089F6D : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::Class_2_6D9FE4914E089F6D** StaticGet_Field_2_0()
	{
		return (::Class_2_6D9FE4914E089F6D**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D9FE4914E089F6D_TypeDefinitionIndex)->GetStaticField(0x4BAD0);
	}
	::Class_2_4446D357C89B715C* Field_2_2; // 0x18
	::MoleMole::UILoginMessageBoxPopWindowController* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D9FE4914E089F6D__CTOR_OFFSET))(this);
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D9FE4914E089F6D_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D9FE4914E089F6D_ONCLOSE_OFFSET))(this);
	}

	::System::Void Method_2_EA80642E2908C486()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D9FE4914E089F6D_METHOD_2_EA80642E2908C486_OFFSET))(this);
	}

	static ::Class_2_6D9FE4914E089F6D* Method_2_AAE2768E79420046()
	{
		return ((::Class_2_6D9FE4914E089F6D*(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D9FE4914E089F6D_METHOD_2_AAE2768E79420046_OFFSET))();
	}

	::System::Void Method_2_EA80642E2908C486_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D9FE4914E089F6D_METHOD_2_EA80642E2908C486_1_OFFSET))(this);
	}
};
