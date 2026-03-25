#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraPhaseConditionType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAPHASECONDITION_METHOD_2_9A38BB6BE6B9CB4B_OFFSET UNITYSDK_OFFSET(0x170A9EE0)
#define RPG_GAMECORE_CHIMERAPHASECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x170AA040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPhaseCondition_TypeDefinitionIndex = 14581;

	class ChimeraPhaseCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraPhaseConditionType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamArray; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A38BB6BE6B9CB4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraPhaseCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraPhaseCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASECONDITION_METHOD_2_9A38BB6BE6B9CB4B_OFFSET))(a1, a2);
		}
	};
}
