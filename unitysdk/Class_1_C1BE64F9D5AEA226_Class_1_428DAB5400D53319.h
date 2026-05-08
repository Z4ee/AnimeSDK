#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class Action; }

#define CLASS_1_C1BE64F9D5AEA226_CLASS_1_428DAB5400D53319_METHOD_1_5A665AED216BDAAB_OFFSET UNITYSDK_OFFSET(0x13A1F920)
#define CLASS_1_C1BE64F9D5AEA226_CLASS_1_428DAB5400D53319__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1F910)

inline static constexpr unsigned int Class_1_C1BE64F9D5AEA226_Class_1_428DAB5400D53319_TypeDefinitionIndex = 49348;

class Class_1_C1BE64F9D5AEA226_Class_1_428DAB5400D53319 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1BE64F9D5AEA226_CLASS_1_428DAB5400D53319__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A665AED216BDAAB(::MoleMole::Config::ConfigUIFontSize* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIFontSize*))((::PBYTE)hIl2Cpp + CLASS_1_C1BE64F9D5AEA226_CLASS_1_428DAB5400D53319_METHOD_1_5A665AED216BDAAB_OFFSET))(this, a1);
	}
};
