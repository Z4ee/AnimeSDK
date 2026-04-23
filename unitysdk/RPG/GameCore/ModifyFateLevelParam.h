#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_2B63569881989351_OFFSET UNITYSDK_OFFSET(0x18B3DF60)
#define RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_8CA807F7DEA4F36A_OFFSET UNITYSDK_OFFSET(0x18B3DED0)
#define RPG_GAMECORE_MODIFYFATELEVELPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3DF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyFateLevelParam_TypeDefinitionIndex = 22263;

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

		static ::System::Void Method_3_8CA807F7DEA4F36A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFateLevelParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFateLevelParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_8CA807F7DEA4F36A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B63569881989351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyFateLevelParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyFateLevelParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYFATELEVELPARAM_METHOD_3_2B63569881989351_OFFSET))(a1, a2);
		}
	};
}
