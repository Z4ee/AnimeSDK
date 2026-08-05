#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPageCamera; }
namespace MoleMole::Config { class ConfigUICameraStretch; }

#define CLASS_1_1A7CB0711D16001A__CTOR_OFFSET UNITYSDK_OFFSET(0x19943800)

inline static constexpr unsigned int Class_1_1A7CB0711D16001A_TypeDefinitionIndex = 90725;

class Class_1_1A7CB0711D16001A : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPageCamera* Field_1_1; // 0x10
	::MoleMole::Config::ConfigUICameraStretch* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A7CB0711D16001A__CTOR_OFFSET))(this);
	}
};
