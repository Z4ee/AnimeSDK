#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_2B63569881989351_OFFSET UNITYSDK_OFFSET(0x1B1AB030)
#define RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_F7A73482A0F0C884_OFFSET UNITYSDK_OFFSET(0x1B1AAFE0)
#define RPG_GAMECORE_MODIFYFATELEVELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AB020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFateLevelParam_TypeDefinitionIndex = 22453;

	class ModifyFateLevelParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateLevelParamType ValueType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7A73482A0F0C884(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFateLevelParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFateLevelParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_F7A73482A0F0C884_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B63569881989351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFateLevelParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFateLevelParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_2B63569881989351_OFFSET))(a1, a2);
		}
	};
}
