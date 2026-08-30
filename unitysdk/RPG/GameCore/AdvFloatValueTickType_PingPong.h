#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_PINGPONG_METHOD_3_616E1B98A29C9760_OFFSET UNITYSDK_OFFSET(0x1D6B8960)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_PINGPONG_METHOD_3_6E36DA3B54D4A145_OFFSET UNITYSDK_OFFSET(0x1D6B84B0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_PINGPONG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B84A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_PingPong_TypeDefinitionIndex = 20784;

	class AdvFloatValueTickType_PingPong : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Boolean Positive; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_PINGPONG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_616E1B98A29C9760(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_PingPong*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_PingPong*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_PINGPONG_METHOD_3_616E1B98A29C9760_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6E36DA3B54D4A145(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvFloatValueTickType_PingPong* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvFloatValueTickType_PingPong*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_PINGPONG_METHOD_3_6E36DA3B54D4A145_OFFSET))(a1, a2);
		}
	};
}
