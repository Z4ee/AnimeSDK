#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

namespace System { class String; }

#define CLASS_2_D2FCF5EED49DF647_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x15DF8BA0)
#define CLASS_2_D2FCF5EED49DF647_METHOD_2_1B651EE11F6EFF3D_OFFSET UNITYSDK_OFFSET(0x15DF8D30)
#define CLASS_2_D2FCF5EED49DF647_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0x15DF8BF0)
#define CLASS_2_D2FCF5EED49DF647_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15DF8BB0)
#define CLASS_2_D2FCF5EED49DF647__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF8F00)

inline static constexpr unsigned int Class_2_D2FCF5EED49DF647_TypeDefinitionIndex = 51287;

class Class_2_D2FCF5EED49DF647 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::String* Field_2_0; // 0x18
	::RPG::GameCore::FixPoint Field_2_1; // 0x20
	::RPG::GameCore::AntiLockHPStrength Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCF5EED49DF647__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCF5EED49DF647_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCF5EED49DF647_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2FCF5EED49DF647_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_1B651EE11F6EFF3D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D2FCF5EED49DF647_METHOD_2_1B651EE11F6EFF3D_OFFSET))(this, a1, a2, a3);
	}
};
