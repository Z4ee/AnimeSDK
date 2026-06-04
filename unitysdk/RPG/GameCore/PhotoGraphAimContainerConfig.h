#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphAimContainerTargetBase; }
namespace RPG::GameCore { class PhotoGraphTipRangeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG_METHOD_2_4F7491B07AF3662A_OFFSET UNITYSDK_OFFSET(0x19A04170)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A046F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerConfig_TypeDefinitionIndex = 20423;

	class PhotoGraphAimContainerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PhotoGraphAimContainerLogicOperator LogicOperator; // 0x10
		::Il2CppArray<::RPG::GameCore::PhotoGraphAimContainerConfig*>* InnerContainers; // 0x18
		::System::Boolean OnlyShow; // 0x20
		::RPG::GameCore::PhotoGraphAimContainerTargetBase* AimTargetConfig; // 0x28
		::RPG::GameCore::TargetEvaluator* AimTargetType; // 0x30
		::System::Boolean OverrideCameraTip; // 0x38
		::System::Int32 TipPriority; // 0x3C
		::Il2CppArray<::RPG::GameCore::PhotoGraphTipRangeConfig*>* TipConfigs; // 0x40
		::System::String* ContainerFlagName; // 0x48
		::System::Boolean IsTopContainer; // 0x50
		::System::Boolean IsSimpleConfig; // 0x51
		::System::Boolean IsAutoIdentifyMode; // 0x52
		::System::Boolean IsAimTargetConfig; // 0x53
		::System::Boolean IsAimTargetType; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F7491B07AF3662A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContainerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERCONFIG_METHOD_2_4F7491B07AF3662A_OFFSET))(a1, a2);
		}
	};
}
