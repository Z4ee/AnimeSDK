#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_METHOD_3_4BA5FD92D739C215_OFFSET UNITYSDK_OFFSET(0x1BE1CD50)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_METHOD_3_B18473434E8F8E70_OFFSET UNITYSDK_OFFSET(0x1BE1D590)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1CD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_Loop_TypeDefinitionIndex = 20233;

	class AdvFloatValueTickType_Loop : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Boolean Positive; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B18473434E8F8E70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_Loop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_Loop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_METHOD_3_B18473434E8F8E70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BA5FD92D739C215(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_Loop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_Loop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_METHOD_3_4BA5FD92D739C215_OFFSET))(a1, a2);
		}
	};
}
