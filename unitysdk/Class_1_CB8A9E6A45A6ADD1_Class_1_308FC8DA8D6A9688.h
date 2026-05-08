#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PRDConfig; }
namespace System { class Action; }

#define CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_308FC8DA8D6A9688_METHOD_1_D138A380CFE4E25A_OFFSET UNITYSDK_OFFSET(0x116EC2A0)
#define CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_308FC8DA8D6A9688__CTOR_OFFSET UNITYSDK_OFFSET(0x116EC290)

inline static constexpr unsigned int Class_1_CB8A9E6A45A6ADD1_Class_1_308FC8DA8D6A9688_TypeDefinitionIndex = 53706;

class Class_1_CB8A9E6A45A6ADD1_Class_1_308FC8DA8D6A9688 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_308FC8DA8D6A9688__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D138A380CFE4E25A(::MoleMole::Config::PRDConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PRDConfig*))((::PBYTE)hIl2Cpp + CLASS_1_CB8A9E6A45A6ADD1_CLASS_1_308FC8DA8D6A9688_METHOD_1_D138A380CFE4E25A_OFFSET))(this, a1);
	}
};
