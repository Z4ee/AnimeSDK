#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_METHOD_3_2086E56A1A232E17_OFFSET UNITYSDK_OFFSET(0x18917810)
#define RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_METHOD_3_57E087CAE7935EE4_OFFSET UNITYSDK_OFFSET(0x18915FC0)
#define RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18915FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPushBoxMoveConfig_TypeDefinitionIndex = 15808;

	class FiveDimPushBoxMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2086E56A1A232E17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPushBoxMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPushBoxMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_METHOD_3_2086E56A1A232E17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57E087CAE7935EE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPushBoxMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPushBoxMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUSHBOXMOVECONFIG_METHOD_3_57E087CAE7935EE4_OFFSET))(a1, a2);
		}
	};
}
