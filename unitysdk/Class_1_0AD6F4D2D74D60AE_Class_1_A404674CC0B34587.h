#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class Action; }

#define CLASS_1_0AD6F4D2D74D60AE_CLASS_1_A404674CC0B34587_METHOD_1_0CA15B50CF50CC2E_OFFSET UNITYSDK_OFFSET(0x115C7320)
#define CLASS_1_0AD6F4D2D74D60AE_CLASS_1_A404674CC0B34587__CTOR_OFFSET UNITYSDK_OFFSET(0x115C7310)

inline static constexpr unsigned int Class_1_0AD6F4D2D74D60AE_Class_1_A404674CC0B34587_TypeDefinitionIndex = 44229;

class Class_1_0AD6F4D2D74D60AE_Class_1_A404674CC0B34587 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_CLASS_1_A404674CC0B34587__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CA15B50CF50CC2E(::MoleMole::Config::ConfigTeamInspireZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamInspireZone*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_CLASS_1_A404674CC0B34587_METHOD_1_0CA15B50CF50CC2E_OFFSET))(this, a1);
	}
};
