#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_AD749595B9849A2E_OFFSET UNITYSDK_OFFSET(0x16E8B350)
#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_F2371ACD59D5E15F_OFFSET UNITYSDK_OFFSET(0x16E8B3D0)
#define RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8B3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourSetCountDownAnimSpeed_TypeDefinitionIndex = 9957;

	class ParkourSetCountDownAnimSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Speed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD749595B9849A2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ParkourSetCountDownAnimSpeed*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_AD749595B9849A2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2371ACD59D5E15F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ParkourSetCountDownAnimSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ParkourSetCountDownAnimSpeed*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURSETCOUNTDOWNANIMSPEED_METHOD_3_F2371ACD59D5E15F_OFFSET))(a1, a2);
		}
	};
}
