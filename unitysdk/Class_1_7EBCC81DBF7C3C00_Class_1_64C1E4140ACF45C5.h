#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AvatarScriptAndAnimOverrideConfig; }
namespace System { class Action; }

#define CLASS_1_7EBCC81DBF7C3C00_CLASS_1_64C1E4140ACF45C5_METHOD_1_56D3E54B34F1C08E_OFFSET UNITYSDK_OFFSET(0x15594D80)
#define CLASS_1_7EBCC81DBF7C3C00_CLASS_1_64C1E4140ACF45C5__CTOR_OFFSET UNITYSDK_OFFSET(0x15594D70)

inline static constexpr unsigned int Class_1_7EBCC81DBF7C3C00_Class_1_64C1E4140ACF45C5_TypeDefinitionIndex = 76953;

class Class_1_7EBCC81DBF7C3C00_Class_1_64C1E4140ACF45C5 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00_CLASS_1_64C1E4140ACF45C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_56D3E54B34F1C08E(::MoleMole::Config::AvatarScriptAndAnimOverrideConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AvatarScriptAndAnimOverrideConfig*))((::PBYTE)hIl2Cpp + CLASS_1_7EBCC81DBF7C3C00_CLASS_1_64C1E4140ACF45C5_METHOD_1_56D3E54B34F1C08E_OFFSET))(this, a1);
	}
};
