#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_5612703F4C3B9E13_OFFSET UNITYSDK_OFFSET(0x199E4D50)
#define RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_9BFC8898B5C47F80_OFFSET UNITYSDK_OFFSET(0x199E4C10)
#define RPG_GAMECORE_PARAMCONDITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199E4CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamConditionConfig_TypeDefinitionIndex = 16225;

	class ParamConditionConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::MiConditionConfigBase* Condition; // 0x10
		::RPG::GameCore::MiParameterConfigBase* SuccValue; // 0x18
		::RPG::GameCore::MiParameterConfigBase* FailValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BFC8898B5C47F80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConditionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConditionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_9BFC8898B5C47F80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5612703F4C3B9E13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamConditionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMCONDITIONCONFIG_METHOD_4_5612703F4C3B9E13_OFFSET))(a1, a2);
		}
	};
}
