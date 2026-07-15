#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_METHOD_3_5D0F2C832F57197B_OFFSET UNITYSDK_OFFSET(0x1C5CFA20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_METHOD_3_A62124B78431AE97_OFFSET UNITYSDK_OFFSET(0x1C5CF9D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CFA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAugmentSelectRerollCntConfig_TypeDefinitionIndex = 18715;

	class GridFightModifierAddAugmentSelectRerollCntConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A62124B78431AE97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_METHOD_3_A62124B78431AE97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D0F2C832F57197B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_METHOD_3_5D0F2C832F57197B_OFFSET))(a1, a2);
		}
	};
}
