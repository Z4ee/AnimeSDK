#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class Action; }

#define CLASS_1_0AD6F4D2D74D60AE_CLASS_1_C8613E34CA54266F_METHOD_1_8D49209026D3A06D_OFFSET UNITYSDK_OFFSET(0xF0A9250)
#define CLASS_1_0AD6F4D2D74D60AE_CLASS_1_C8613E34CA54266F__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A9240)

inline static constexpr unsigned int Class_1_0AD6F4D2D74D60AE_Class_1_C8613E34CA54266F_TypeDefinitionIndex = 47355;

class Class_1_0AD6F4D2D74D60AE_Class_1_C8613E34CA54266F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_CLASS_1_C8613E34CA54266F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D49209026D3A06D(::MoleMole::Config::ConfigTeamInspireZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamInspireZone*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_CLASS_1_C8613E34CA54266F_METHOD_1_8D49209026D3A06D_OFFSET))(this, a1);
	}
};
