#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DamageTextType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_5A2B956A6D502C20_OFFSET UNITYSDK_OFFSET(0x19C32F30)
#define RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_95AE382F4836D24B_OFFSET UNITYSDK_OFFSET(0x19C32FB0)
#define RPG_GAMECORE_SETDAMAGETEXTSTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C32F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDamageTextStyle_TypeDefinitionIndex = 21697;

	class SetDamageTextStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x18
		::RPG::GameCore::DamageTextType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A2B956A6D502C20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDamageTextStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDamageTextStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_5A2B956A6D502C20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95AE382F4836D24B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDamageTextStyle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDamageTextStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDAMAGETEXTSTYLE_METHOD_3_95AE382F4836D24B_OFFSET))(a1, a2);
		}
	};
}
