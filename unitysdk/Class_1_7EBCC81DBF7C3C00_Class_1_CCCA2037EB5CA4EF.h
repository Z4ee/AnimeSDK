#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }

#define CLASS_1_7EBCC81DBF7C3C00_CLASS_1_CCCA2037EB5CA4EF_METHOD_1_AA31B4AA9DF275D3_OFFSET UNITYSDK_OFFSET(0x17953A20)
#define CLASS_1_7EBCC81DBF7C3C00_CLASS_1_CCCA2037EB5CA4EF__CTOR_OFFSET UNITYSDK_OFFSET(0x17953A10)

inline static constexpr unsigned int Class_1_7EBCC81DBF7C3C00_Class_1_CCCA2037EB5CA4EF_TypeDefinitionIndex = 57762;

class Class_1_7EBCC81DBF7C3C00_Class_1_CCCA2037EB5CA4EF : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00_CLASS_1_CCCA2037EB5CA4EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA31B4AA9DF275D3(::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00_CLASS_1_CCCA2037EB5CA4EF_METHOD_1_AA31B4AA9DF275D3_OFFSET))(this, a1);
	}
};
