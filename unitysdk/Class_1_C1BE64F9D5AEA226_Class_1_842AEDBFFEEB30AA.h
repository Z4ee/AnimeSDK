#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }

#define CLASS_1_C1BE64F9D5AEA226_CLASS_1_842AEDBFFEEB30AA_METHOD_1_87F341A350A9C406_OFFSET UNITYSDK_OFFSET(0x156E29A0)
#define CLASS_1_C1BE64F9D5AEA226_CLASS_1_842AEDBFFEEB30AA__CTOR_OFFSET UNITYSDK_OFFSET(0x156E2990)

inline static constexpr unsigned int Class_1_C1BE64F9D5AEA226_Class_1_842AEDBFFEEB30AA_TypeDefinitionIndex = 52054;

class Class_1_C1BE64F9D5AEA226_Class_1_842AEDBFFEEB30AA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1BE64F9D5AEA226_CLASS_1_842AEDBFFEEB30AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_87F341A350A9C406(::MoleMole::Config::ConfigUIFontSize* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFontSize*))((::PBYTE)hIl2Cpp + CLASS_1_C1BE64F9D5AEA226_CLASS_1_842AEDBFFEEB30AA_METHOD_1_87F341A350A9C406_OFFSET))(this, a1);
	}
};
