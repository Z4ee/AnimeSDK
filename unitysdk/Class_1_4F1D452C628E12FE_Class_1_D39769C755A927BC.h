#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { class Action; }

#define CLASS_1_4F1D452C628E12FE_CLASS_1_D39769C755A927BC_METHOD_1_B70F531128A2E381_OFFSET UNITYSDK_OFFSET(0x12783240)
#define CLASS_1_4F1D452C628E12FE_CLASS_1_D39769C755A927BC__CTOR_OFFSET UNITYSDK_OFFSET(0x12783230)

inline static constexpr unsigned int Class_1_4F1D452C628E12FE_Class_1_D39769C755A927BC_TypeDefinitionIndex = 87731;

class Class_1_4F1D452C628E12FE_Class_1_D39769C755A927BC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_CLASS_1_D39769C755A927BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B70F531128A2E381(::MoleMole::Config::ConfigBattlePhotoActivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBattlePhotoActivity*))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_CLASS_1_D39769C755A927BC_METHOD_1_B70F531128A2E381_OFFSET))(this, a1);
	}
};
