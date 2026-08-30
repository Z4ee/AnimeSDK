#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_D36839C61E9EA81F_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x1A3FD580)
#define CLASS_3_D36839C61E9EA81F_METHOD_3_C6C799B3DFBE236B_OFFSET UNITYSDK_OFFSET(0x1A3FD540)
#define CLASS_3_D36839C61E9EA81F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FD570)

inline static constexpr unsigned int Class_3_D36839C61E9EA81F_TypeDefinitionIndex = 21201;

class Class_3_D36839C61E9EA81F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FOJDEJPDKEJ; // 0x18
	::RPG::GameCore::SetJumpEnergyType DANFCNOENDC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D36839C61E9EA81F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6C799B3DFBE236B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D36839C61E9EA81F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D36839C61E9EA81F*&))((::PBYTE)hIl2Cpp + CLASS_3_D36839C61E9EA81F_METHOD_3_C6C799B3DFBE236B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D36839C61E9EA81F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D36839C61E9EA81F*))((::PBYTE)hIl2Cpp + CLASS_3_D36839C61E9EA81F_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
