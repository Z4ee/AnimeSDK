#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_METHOD_3_8F6EE25BAB734A0D_OFFSET UNITYSDK_OFFSET(0x1D6B82F0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_METHOD_3_E1EA4469C92FDDF4_OFFSET UNITYSDK_OFFSET(0x1D6B8930)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B82E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_Normal_TypeDefinitionIndex = 20782;

	class AdvFloatValueTickType_Normal : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E1EA4469C92FDDF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_Normal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_Normal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_METHOD_3_E1EA4469C92FDDF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F6EE25BAB734A0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_Normal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_Normal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_METHOD_3_8F6EE25BAB734A0D_OFFSET))(a1, a2);
		}
	};
}
