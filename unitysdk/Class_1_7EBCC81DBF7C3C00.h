#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7EBCC81DBF7C3C00_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x137E38C0)
#define CLASS_1_7EBCC81DBF7C3C00_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x137E3AE0)
#define CLASS_1_7EBCC81DBF7C3C00__CCTOR_OFFSET UNITYSDK_OFFSET(0x137E38B0)
#define CLASS_1_7EBCC81DBF7C3C00__CTOR_OFFSET UNITYSDK_OFFSET(0x137E38A0)

inline static constexpr unsigned int Class_1_7EBCC81DBF7C3C00_TypeDefinitionIndex = 57760;

class Class_1_7EBCC81DBF7C3C00 : public ::System::Object
{
public:
	static ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::AvatarScriptAndAnimOverrideConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7EBCC81DBF7C3C00_TypeDefinitionIndex)->GetStaticField(0x341F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};
