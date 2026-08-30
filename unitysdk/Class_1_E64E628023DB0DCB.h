#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E64E628023DB0DCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C024630)
#define CLASS_1_E64E628023DB0DCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C024590)
#define CLASS_1_E64E628023DB0DCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C0247C0)
#define CLASS_1_E64E628023DB0DCB_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C024910)
#define CLASS_1_E64E628023DB0DCB_GET_DEFAULTSEVERITY_OFFSET UNITYSDK_OFFSET(0x1C024920)
#define CLASS_1_E64E628023DB0DCB_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1C0248E0)
#define CLASS_1_E64E628023DB0DCB_GET_HELPLINKURI_OFFSET UNITYSDK_OFFSET(0x1C0248F0)
#define CLASS_1_E64E628023DB0DCB_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C0248C0)
#define CLASS_1_E64E628023DB0DCB_GET_ISENABLEDBYDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C024930)
#define CLASS_1_E64E628023DB0DCB_GET_MESSAGEFORMAT_OFFSET UNITYSDK_OFFSET(0x1C024900)
#define CLASS_1_E64E628023DB0DCB_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C0248D0)
#define CLASS_1_E64E628023DB0DCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C024550)

inline static constexpr unsigned int Class_1_E64E628023DB0DCB_TypeDefinitionIndex = 40312;

class Class_1_E64E628023DB0DCB : public ::System::Object
{
public:
	::System::String* _MessageFormat_k__BackingField; // 0x10
	::System::String* _Title_k__BackingField; // 0x18
	::System::String* _Category_k__BackingField; // 0x20
	::System::String* _Id_k__BackingField; // 0x28
	::System::String* _Description_k__BackingField; // 0x30
	::System::String* _HelpLinkUri_k__BackingField; // 0x38
	::RPG::Client::CompilerFramework::DiagnosticSeverity _DefaultSeverity_k__BackingField; // 0x40
	::System::Boolean _IsEnabledByDefault_k__BackingField; // 0x44

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::RPG::Client::CompilerFramework::DiagnosticSeverity a5, ::System::Boolean a6, ::System::String* a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::RPG::Client::CompilerFramework::DiagnosticSeverity, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::Class_1_E64E628023DB0DCB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E64E628023DB0DCB*))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::String* get_Id()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_ID_OFFSET))(this);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_TITLE_OFFSET))(this);
	}

	::System::String* get_Description()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_DESCRIPTION_OFFSET))(this);
	}

	::System::String* get_HelpLinkUri()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_HELPLINKURI_OFFSET))(this);
	}

	::System::String* get_MessageFormat()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_MESSAGEFORMAT_OFFSET))(this);
	}

	::System::String* get_Category()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_CATEGORY_OFFSET))(this);
	}

	::RPG::Client::CompilerFramework::DiagnosticSeverity get_DefaultSeverity()
	{
		return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_DEFAULTSEVERITY_OFFSET))(this);
	}

	::System::Boolean get_IsEnabledByDefault()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E64E628023DB0DCB_GET_ISENABLEDBYDEFAULT_OFFSET))(this);
	}
};
