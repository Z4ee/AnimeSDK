#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PointEvaluatorConfig; }
namespace RPG::GameCore { class PointGeneratorConfig; }

#define RPG_GAMECORE_POINTQUERYCONFIG_METHOD_2_9A4FF790F32C2757_OFFSET UNITYSDK_OFFSET(0x174EC2E0)
#define RPG_GAMECORE_POINTQUERYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174EC3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointQueryConfig_TypeDefinitionIndex = 14319;

	class PointQueryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PointGeneratorConfig* Generator; // 0x10
		::RPG::GameCore::PointEvaluatorConfig* PointEvaluateConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTQUERYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A4FF790F32C2757(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointQueryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointQueryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTQUERYCONFIG_METHOD_2_9A4FF790F32C2757_OFFSET))(a1, a2);
		}
	};
}
