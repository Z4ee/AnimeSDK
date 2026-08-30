#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_POINTEVALUATORCONFIG_METHOD_2_0CB5F8D4399A76F0_OFFSET UNITYSDK_OFFSET(0x1D7B3ED0)
#define RPG_GAMECORE_POINTEVALUATORCONFIG_METHOD_2_9A5787E9BA923BA4_OFFSET UNITYSDK_OFFSET(0x1D7B41C0)
#define RPG_GAMECORE_POINTEVALUATORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PointEvaluatorConfig_TypeDefinitionIndex = 15456;

	class PointEvaluatorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0CB5F8D4399A76F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointEvaluatorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointEvaluatorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONFIG_METHOD_2_0CB5F8D4399A76F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_9A5787E9BA923BA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PointEvaluatorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PointEvaluatorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POINTEVALUATORCONFIG_METHOD_2_9A5787E9BA923BA4_OFFSET))(a1, a2);
		}
	};
}
