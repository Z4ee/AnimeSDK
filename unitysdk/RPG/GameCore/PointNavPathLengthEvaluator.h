#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointEvaluatorByDistanceConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_METHOD_4_420771743CBF304A_OFFSET UNITYSDK_OFFSET(0x19A43D00)
#define RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_METHOD_4_D224151EEEFCD9A5_OFFSET UNITYSDK_OFFSET(0x19A448D0)
#define RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A43CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointNavPathLengthEvaluator_TypeDefinitionIndex = 14861;

	class PointNavPathLengthEvaluator : public ::RPG::GameCore::PointEvaluatorByDistanceConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D224151EEEFCD9A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointNavPathLengthEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointNavPathLengthEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_METHOD_4_D224151EEEFCD9A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_420771743CBF304A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointNavPathLengthEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointNavPathLengthEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTNAVPATHLENGTHEVALUATOR_METHOD_4_420771743CBF304A_OFFSET))(a1, a2);
		}
	};
}
