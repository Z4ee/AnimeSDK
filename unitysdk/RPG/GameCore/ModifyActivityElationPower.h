#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_METHOD_3_34ACC63A1AE3D2B7_OFFSET UNITYSDK_OFFSET(0x1D2ADEE0)
#define RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_METHOD_3_CDCE389E761A966A_OFFSET UNITYSDK_OFFSET(0x1D2ADEA0)
#define RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2ADED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyActivityElationPower_TypeDefinitionIndex = 22890;

	class ModifyActivityElationPower : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDCE389E761A966A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyActivityElationPower*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyActivityElationPower*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_METHOD_3_CDCE389E761A966A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_34ACC63A1AE3D2B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyActivityElationPower* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyActivityElationPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYACTIVITYELATIONPOWER_METHOD_3_34ACC63A1AE3D2B7_OFFSET))(a1, a2);
		}
	};
}
