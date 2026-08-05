#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { class Action; }

#define CLASS_1_BEC6CF45E604A1D1_CLASS_1_CCD5E2ADFE3AD444_METHOD_1_3AE9F799D6152F9A_OFFSET UNITYSDK_OFFSET(0x13284860)
#define CLASS_1_BEC6CF45E604A1D1_CLASS_1_CCD5E2ADFE3AD444__CTOR_OFFSET UNITYSDK_OFFSET(0x13284850)

inline static constexpr unsigned int Class_1_BEC6CF45E604A1D1_Class_1_CCD5E2ADFE3AD444_TypeDefinitionIndex = 89186;

class Class_1_BEC6CF45E604A1D1_Class_1_CCD5E2ADFE3AD444 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_CLASS_1_CCD5E2ADFE3AD444__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3AE9F799D6152F9A(::MoleMole::Config::ConfigLinkZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_CLASS_1_CCD5E2ADFE3AD444_METHOD_1_3AE9F799D6152F9A_OFFSET))(this, a1);
	}
};
