#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace System { class Action; }

#define CLASS_1_45C9EB18BB7721EA_CLASS_1_5D21C3FA138D2C0A_METHOD_1_ABF944B59575A21D_OFFSET UNITYSDK_OFFSET(0x158C0FC0)
#define CLASS_1_45C9EB18BB7721EA_CLASS_1_5D21C3FA138D2C0A__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0FB0)

inline static constexpr unsigned int Class_1_45C9EB18BB7721EA_Class_1_5D21C3FA138D2C0A_TypeDefinitionIndex = 67463;

class Class_1_45C9EB18BB7721EA_Class_1_5D21C3FA138D2C0A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45C9EB18BB7721EA_CLASS_1_5D21C3FA138D2C0A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ABF944B59575A21D(::MoleMole::Config::ConfigZenkovSpecialAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZenkovSpecialAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_45C9EB18BB7721EA_CLASS_1_5D21C3FA138D2C0A_METHOD_1_ABF944B59575A21D_OFFSET))(this, a1);
	}
};
