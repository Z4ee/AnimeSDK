#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_METHOD_3_7644CB9DDC69AF1A_OFFSET UNITYSDK_OFFSET(0x19425050)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_METHOD_3_C5AED7EABE7FA327_OFFSET UNITYSDK_OFFSET(0x19424DA0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19424D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_Wave_TypeDefinitionIndex = 19871;

	class AdvFloatValueTickType_Wave : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* InitSpeed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7644CB9DDC69AF1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_Wave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_Wave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_METHOD_3_7644CB9DDC69AF1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5AED7EABE7FA327(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_Wave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_Wave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_METHOD_3_C5AED7EABE7FA327_OFFSET))(a1, a2);
		}
	};
}
