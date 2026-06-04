#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_23A06E2E19BAFD4D_OFFSET UNITYSDK_OFFSET(0x19A828A0)
#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_5B08A8DD170A3241_OFFSET UNITYSDK_OFFSET(0x19A829B0)
#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A82980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PresetColliderStateBeforeFlipEraRegion_TypeDefinitionIndex = 21104;

	class PresetColliderStateBeforeFlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_23A06E2E19BAFD4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_23A06E2E19BAFD4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B08A8DD170A3241(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_5B08A8DD170A3241_OFFSET))(a1, a2);
		}
	};
}
