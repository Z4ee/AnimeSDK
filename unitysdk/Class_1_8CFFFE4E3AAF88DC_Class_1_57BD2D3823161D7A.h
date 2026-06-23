#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class Action; }

#define CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_57BD2D3823161D7A_METHOD_1_52DFD5F253519C70_OFFSET UNITYSDK_OFFSET(0x1700DCB0)
#define CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_57BD2D3823161D7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1700DBB0)

inline static constexpr unsigned int Class_1_8CFFFE4E3AAF88DC_Class_1_57BD2D3823161D7A_TypeDefinitionIndex = 46395;

class Class_1_8CFFFE4E3AAF88DC_Class_1_57BD2D3823161D7A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_57BD2D3823161D7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_52DFD5F253519C70(::MoleMole::Config::ConfigHack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_57BD2D3823161D7A_METHOD_1_52DFD5F253519C70_OFFSET))(this, a1);
	}
};
