#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffShopItemData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEBUFFSHOPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC7BF30)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC7BF70)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA___C__SYNCITEM_B__0_0_OFFSET UNITYSDK_OFFSET(0x1BC7BF80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopData___c_TypeDefinitionIndex = 67326;

	class RogueBuffShopData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueBuffShopData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueBuffShopData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffShopData___c_TypeDefinitionIndex)->GetStaticField(0x670D0);
		}
		static ::System::Func_2<::RPG::Client::RogueBuffShopItemData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::RogueBuffShopItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffShopData___c_TypeDefinitionIndex)->GetStaticField(0x670D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SyncItem_b__0_0(::RPG::Client::RogueBuffShopItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueBuffShopItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA___C__SYNCITEM_B__0_0_OFFSET))(this, a1);
		}
	};
}
