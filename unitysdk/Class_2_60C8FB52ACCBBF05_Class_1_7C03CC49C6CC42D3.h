#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitlePopWindowController; }
namespace System { class String; }

#define CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3_HIDE_OFFSET UNITYSDK_OFFSET(0x16D21E10)
#define CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3_METHOD_1_0A5ADB5E7BBF1405_OFFSET UNITYSDK_OFFSET(0x16D21C80)
#define CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3_SHOW_OFFSET UNITYSDK_OFFSET(0x16D21830)
#define CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3__CTOR_OFFSET UNITYSDK_OFFSET(0x16D21FE0)

inline static constexpr unsigned int Class_2_60C8FB52ACCBBF05_Class_1_7C03CC49C6CC42D3_TypeDefinitionIndex = 86526;

class Class_2_60C8FB52ACCBBF05_Class_1_7C03CC49C6CC42D3 : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitlePopWindowController** StaticGet_Field_1_0()
	{
		return (::MoleMole::UIGeneralSubtitlePopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_2_60C8FB52ACCBBF05_Class_1_7C03CC49C6CC42D3_TypeDefinitionIndex)->GetStaticField(0x401F0);
	}
	::MoleMole::UIGeneralSubtitlePopWindowController* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3__CTOR_OFFSET))(this);
	}

	::System::Void Show(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3_SHOW_OFFSET))(this, a1);
	}

	::System::Void Hide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3_HIDE_OFFSET))(this);
	}

	static ::System::Void Method_1_0A5ADB5E7BBF1405(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_60C8FB52ACCBBF05_CLASS_1_7C03CC49C6CC42D3_METHOD_1_0A5ADB5E7BBF1405_OFFSET))(a1);
	}
};
