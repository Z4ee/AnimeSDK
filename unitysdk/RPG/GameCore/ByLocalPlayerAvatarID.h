#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_D4D462E98413987F_OFFSET UNITYSDK_OFFSET(0x1875ACB0)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_DBD854D42A0F45A1_OFFSET UNITYSDK_OFFSET(0x1875ABE0)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID__CTOR_OFFSET UNITYSDK_OFFSET(0x1875AC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerAvatarID_TypeDefinitionIndex = 19553;

	class ByLocalPlayerAvatarID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DBD854D42A0F45A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerAvatarID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerAvatarID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_DBD854D42A0F45A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4D462E98413987F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_D4D462E98413987F_OFFSET))(a1, a2);
		}
	};
}
