#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DamageTextType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_8A9D8980A3BB8CA6_OFFSET UNITYSDK_OFFSET(0x1D4EA1D0)
#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_95AE382F4836D24B_OFFSET UNITYSDK_OFFSET(0x1D4EA210)
#define RPG_GAMECORE_SETDAMAGETEXTSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDamageTextStyle_TypeDefinitionIndex = 22693;

	class SetDamageTextStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x18
		::RPG::GameCore::DamageTextType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8A9D8980A3BB8CA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDamageTextStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDamageTextStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_8A9D8980A3BB8CA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95AE382F4836D24B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDamageTextStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDamageTextStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_95AE382F4836D24B_OFFSET))(a1, a2);
		}
	};
}
