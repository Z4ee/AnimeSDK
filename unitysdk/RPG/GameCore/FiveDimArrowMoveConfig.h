#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_METHOD_3_C863CCBFA08CAF12_OFFSET UNITYSDK_OFFSET(0x188EB1E0)
#define RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_METHOD_3_F440F39542D393B3_OFFSET UNITYSDK_OFFSET(0x188EB190)
#define RPG_GAMECORE_FIVEDIMARROWMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188EB1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimArrowMoveConfig_TypeDefinitionIndex = 15807;

	class FiveDimArrowMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::System::String* MoveHitEvent; // 0x40
		::System::String* OnHitEvent; // 0x48
		::System::String* OnAttachEvent; // 0x50
		::System::String* OnDetachEvent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F440F39542D393B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimArrowMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimArrowMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_METHOD_3_F440F39542D393B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C863CCBFA08CAF12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimArrowMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimArrowMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMARROWMOVECONFIG_METHOD_3_C863CCBFA08CAF12_OFFSET))(a1, a2);
		}
	};
}
