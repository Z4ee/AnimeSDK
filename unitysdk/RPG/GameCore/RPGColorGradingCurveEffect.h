#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_METHOD_3_77F82516FBC9F917_OFFSET UNITYSDK_OFFSET(0x19AA8950)
#define RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_METHOD_3_BDC2051E4D5359D9_OFFSET UNITYSDK_OFFSET(0x19AA88B0)
#define RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA8910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RPGColorGradingCurveEffect_TypeDefinitionIndex = 22443;

	class RPGColorGradingCurveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::String* CustomLUT; // 0x20
		::System::Single TransitionDuration; // 0x28
		::System::Single CenterX; // 0x2C
		::System::Single CenterY; // 0x30
		::System::Single CustomLUTIntensityBegin; // 0x34
		::System::Single CustomLUTIntensityEnd; // 0x38
		::System::Single StartRadiusBegin; // 0x3C
		::System::Single StartRadiusEnd; // 0x40
		::System::Single BlendRadiusBegin; // 0x44
		::System::Single BlendRadiusEnd; // 0x48
		::System::Single Roundness; // 0x4C
		::System::String* CurveName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDC2051E4D5359D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RPGColorGradingCurveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RPGColorGradingCurveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_METHOD_3_BDC2051E4D5359D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77F82516FBC9F917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RPGColorGradingCurveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RPGColorGradingCurveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RPGCOLORGRADINGCURVEEFFECT_METHOD_3_77F82516FBC9F917_OFFSET))(a1, a2);
		}
	};
}
