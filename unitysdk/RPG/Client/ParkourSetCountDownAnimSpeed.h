#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_CD61A7EF67988DC4_OFFSET UNITYSDK_OFFSET(0x1D3127C0)
#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_F2371ACD59D5E15F_OFFSET UNITYSDK_OFFSET(0x1D312800)
#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3127F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSetCountDownAnimSpeed_TypeDefinitionIndex = 10247;

	class ParkourSetCountDownAnimSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD61A7EF67988DC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ParkourSetCountDownAnimSpeed*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_CD61A7EF67988DC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2371ACD59D5E15F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ParkourSetCountDownAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_F2371ACD59D5E15F_OFFSET))(a1, a2);
		}
	};
}
