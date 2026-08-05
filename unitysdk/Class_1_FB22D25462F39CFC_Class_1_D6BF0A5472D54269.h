#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachments; }
namespace System { class Action; }

#define CLASS_1_FB22D25462F39CFC_CLASS_1_D6BF0A5472D54269_METHOD_1_DABD97AF91CBF368_OFFSET UNITYSDK_OFFSET(0x17515E30)
#define CLASS_1_FB22D25462F39CFC_CLASS_1_D6BF0A5472D54269__CTOR_OFFSET UNITYSDK_OFFSET(0x17515E20)

inline static constexpr unsigned int Class_1_FB22D25462F39CFC_Class_1_D6BF0A5472D54269_TypeDefinitionIndex = 71809;

class Class_1_FB22D25462F39CFC_Class_1_D6BF0A5472D54269 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_CLASS_1_D6BF0A5472D54269__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DABD97AF91CBF368(::MoleMole::Config::ConfigAttachments* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachments*))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_CLASS_1_D6BF0A5472D54269_METHOD_1_DABD97AF91CBF368_OFFSET))(this, a1);
	}
};
