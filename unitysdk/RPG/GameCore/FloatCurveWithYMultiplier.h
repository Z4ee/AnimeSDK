#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER_METHOD_2_32B91A6B07FC6A7C_OFFSET UNITYSDK_OFFSET(0x19752C40)
#define RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x197602D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurveWithYMultiplier_TypeDefinitionIndex = 15823;

	class FloatCurveWithYMultiplier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FloatCurve* Curve; // 0x10
		::System::Single CurveMultiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_32B91A6B07FC6A7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloatCurveWithYMultiplier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloatCurveWithYMultiplier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER_METHOD_2_32B91A6B07FC6A7C_OFFSET))(a1, a2);
		}
	};
}
