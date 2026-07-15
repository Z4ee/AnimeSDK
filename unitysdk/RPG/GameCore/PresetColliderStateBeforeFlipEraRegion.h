#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_5B08A8DD170A3241_OFFSET UNITYSDK_OFFSET(0x1BA165E0)
#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_79F4BAB570420AC4_OFFSET UNITYSDK_OFFSET(0x1BA16510)
#define RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA165D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PresetColliderStateBeforeFlipEraRegion_TypeDefinitionIndex = 21519;

	class PresetColliderStateBeforeFlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79F4BAB570420AC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_79F4BAB570420AC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B08A8DD170A3241(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PresetColliderStateBeforeFlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRESETCOLLIDERSTATEBEFOREFLIPERAREGION_METHOD_3_5B08A8DD170A3241_OFFSET))(a1, a2);
		}
	};
}
