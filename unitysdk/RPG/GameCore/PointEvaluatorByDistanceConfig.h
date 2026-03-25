#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PointEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_METHOD_3_18634D06A601D0C0_OFFSET UNITYSDK_OFFSET(0x174EB3E0)
#define RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_METHOD_3_D6E8CCED08A34AF0_OFFSET UNITYSDK_OFFSET(0x174EB630)
#define RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174EB3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointEvaluatorByDistanceConfig_TypeDefinitionIndex = 14325;

	class PointEvaluatorByDistanceConfig : public ::RPG::GameCore::PointEvaluatorConfig
	{
	public:
		::System::String* DistanceScoreTemplate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18634D06A601D0C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointEvaluatorByDistanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointEvaluatorByDistanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_METHOD_3_18634D06A601D0C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6E8CCED08A34AF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointEvaluatorByDistanceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointEvaluatorByDistanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORBYDISTANCECONFIG_METHOD_3_D6E8CCED08A34AF0_OFFSET))(a1, a2);
		}
	};
}
