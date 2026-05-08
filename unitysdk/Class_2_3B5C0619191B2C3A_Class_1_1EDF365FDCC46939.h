#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitle05EDPopWindowController; }
namespace System { class String; }

#define CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939_METHOD_1_0A5ADB5E7BBF1405_OFFSET UNITYSDK_OFFSET(0x11BDE7F0)
#define CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x11BDE650)
#define CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939_METHOD_1_E1E751B7F08D820A_OFFSET UNITYSDK_OFFSET(0x11BDE1A0)
#define CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939__CTOR_OFFSET UNITYSDK_OFFSET(0x11BDE7E0)

inline static constexpr unsigned int Class_2_3B5C0619191B2C3A_Class_1_1EDF365FDCC46939_TypeDefinitionIndex = 66579;

class Class_2_3B5C0619191B2C3A_Class_1_1EDF365FDCC46939 : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitle05EDPopWindowController** StaticGet_Field_1_0()
	{
		return (::MoleMole::UIGeneralSubtitle05EDPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B5C0619191B2C3A_Class_1_1EDF365FDCC46939_TypeDefinitionIndex)->GetStaticField(0x2D920);
	}
	::MoleMole::UIGeneralSubtitle05EDPopWindowController* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E1E751B7F08D820A(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::String*>* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939_METHOD_1_E1E751B7F08D820A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	static ::System::Void Method_1_0A5ADB5E7BBF1405(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3B5C0619191B2C3A_CLASS_1_1EDF365FDCC46939_METHOD_1_0A5ADB5E7BBF1405_OFFSET))(a1);
	}
};
