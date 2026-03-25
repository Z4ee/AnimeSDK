#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CompilerFramework/DiagnosticSeverity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B5BAE7EF32C11912_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x165A16F0)
#define CLASS_1_B5BAE7EF32C11912_EQUALS_OFFSET UNITYSDK_OFFSET(0x165A8D30)
#define CLASS_1_B5BAE7EF32C11912_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x165A8DD0)
#define CLASS_1_B5BAE7EF32C11912_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x165A8F20)
#define CLASS_1_B5BAE7EF32C11912_GET_DEFAULTSEVERITY_OFFSET UNITYSDK_OFFSET(0x165A8F30)
#define CLASS_1_B5BAE7EF32C11912_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x165A8EF0)
#define CLASS_1_B5BAE7EF32C11912_GET_HELPLINKURI_OFFSET UNITYSDK_OFFSET(0x165A8F00)
#define CLASS_1_B5BAE7EF32C11912_GET_ID_OFFSET UNITYSDK_OFFSET(0x165A8ED0)
#define CLASS_1_B5BAE7EF32C11912_GET_ISENABLEDBYDEFAULT_OFFSET UNITYSDK_OFFSET(0x165A8F40)
#define CLASS_1_B5BAE7EF32C11912_GET_MESSAGEFORMAT_OFFSET UNITYSDK_OFFSET(0x165A8F10)
#define CLASS_1_B5BAE7EF32C11912_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x165A8EE0)
#define CLASS_1_B5BAE7EF32C11912__CTOR_OFFSET UNITYSDK_OFFSET(0x165A7460)
#define CLASS_1_B5BAE7EF32C11912___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x165A8F50)
#define CLASS_1_B5BAE7EF32C11912___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x165A8F60)

inline static constexpr unsigned int Class_1_B5BAE7EF32C11912_TypeDefinitionIndex = 32174;

class Class_1_B5BAE7EF32C11912 : public ::System::Object
{
public:
	::System::String* _Title_k__BackingField; // 0x10
	::System::String* _Id_k__BackingField; // 0x18
	::System::String* _Category_k__BackingField; // 0x20
	::System::String* _Description_k__BackingField; // 0x28
	::System::String* _MessageFormat_k__BackingField; // 0x30
	::System::String* _HelpLinkUri_k__BackingField; // 0x38
	::RPG::Client::CompilerFramework::DiagnosticSeverity _DefaultSeverity_k__BackingField; // 0x40
	::System::Boolean _IsEnabledByDefault_k__BackingField; // 0x44

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::RPG::Client::CompilerFramework::DiagnosticSeverity a5, ::System::Boolean a6, ::System::String* a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::RPG::Client::CompilerFramework::DiagnosticSeverity, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals_1(::Class_1_B5BAE7EF32C11912* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B5BAE7EF32C11912*))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_EQUALS_1_OFFSET))(this, a1);
	}

	::System::String* get_Id()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_ID_OFFSET))(this);
	}

	::System::String* get_Title()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_TITLE_OFFSET))(this);
	}

	::System::String* get_Description()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_DESCRIPTION_OFFSET))(this);
	}

	::System::String* get_HelpLinkUri()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_HELPLINKURI_OFFSET))(this);
	}

	::System::String* get_MessageFormat()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_MESSAGEFORMAT_OFFSET))(this);
	}

	::System::String* get_Category()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_CATEGORY_OFFSET))(this);
	}

	::RPG::Client::CompilerFramework::DiagnosticSeverity get_DefaultSeverity()
	{
		return ((::RPG::Client::CompilerFramework::DiagnosticSeverity(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_DEFAULTSEVERITY_OFFSET))(this);
	}

	::System::Boolean get_IsEnabledByDefault()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912_GET_ISENABLEDBYDEFAULT_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5BAE7EF32C11912___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
