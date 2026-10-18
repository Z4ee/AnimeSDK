#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER_METHOD_2_71E20BFE5BF8D53F_OFFSET UNITYSDK_OFFSET(0x1D6D7CC0)
#define RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurveWithMultiplier_TypeDefinitionIndex = 16650;

	class FloatCurveWithMultiplier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FloatCurve* Curve; // 0x10
		::RPG::MVector2 CurveMultiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_71E20BFE5BF8D53F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloatCurveWithMultiplier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloatCurveWithMultiplier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER_METHOD_2_71E20BFE5BF8D53F_OFFSET))(a1, a2);
		}
	};
}
