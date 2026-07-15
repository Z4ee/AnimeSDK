#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_571E0B261F5ADBD5_OFFSET UNITYSDK_OFFSET(0x1B2AD690)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_6D9904405CD24B9E_OFFSET UNITYSDK_OFFSET(0x1B2AD4C0)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_734275E69B7A9052_OFFSET UNITYSDK_OFFSET(0x1B2AD6C0)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_D4D462E98413987F_OFFSET UNITYSDK_OFFSET(0x1B2AD500)
#define RPG_GAMECORE_BYLOCALPLAYERAVATARID__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AD4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLocalPlayerAvatarID_TypeDefinitionIndex = 19803;

	class ByLocalPlayerAvatarID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D9904405CD24B9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerAvatarID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerAvatarID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_6D9904405CD24B9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D4D462E98413987F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_D4D462E98413987F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_571E0B261F5ADBD5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_571E0B261F5ADBD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_734275E69B7A9052(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLOCALPLAYERAVATARID_METHOD_4_734275E69B7A9052_OFFSET))(a1, a2);
		}
	};
}
