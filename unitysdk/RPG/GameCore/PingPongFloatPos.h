#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PINGPONGFLOATPOS_METHOD_2_4F899698942D93A0_OFFSET UNITYSDK_OFFSET(0x18BFC430)
#define RPG_GAMECORE_PINGPONGFLOATPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFC560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongFloatPos_TypeDefinitionIndex = 16091;

	class PingPongFloatPos : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single x; // 0x10
		::System::Single z; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGFLOATPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F899698942D93A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PingPongFloatPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PingPongFloatPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGFLOATPOS_METHOD_2_4F899698942D93A0_OFFSET))(a1, a2);
		}
	};
}
