#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceChatEmojiDataItem; }
namespace RPG::Client { class CakeRaceChatMessageDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CAKERACECHATINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C63C770)
#define RPG_CLIENT_CAKERACECHATINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63C7B0)
#define RPG_CLIENT_CAKERACECHATINFO___C__GETNORMALMESSAGES_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C63C7C0)
#define RPG_CLIENT_CAKERACECHATINFO___C__GETPLAYERUSEEMOJIS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C63C7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatInfo___c_TypeDefinitionIndex = 63104;

	class CakeRaceChatInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CakeRaceChatInfo___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceChatInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceChatInfo___c_TypeDefinitionIndex)->GetStaticField(0x17100);
		}
		static ::System::Func_2<::RPG::Client::CakeRaceChatMessageDataItem*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::CakeRaceChatMessageDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceChatInfo___c_TypeDefinitionIndex)->GetStaticField(0x17108);
		}
		static ::System::Func_2<::RPG::Client::CakeRaceChatEmojiDataItem*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::CakeRaceChatEmojiDataItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceChatInfo___c_TypeDefinitionIndex)->GetStaticField(0x17110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNormalMessages_b__6_0(::RPG::Client::CakeRaceChatMessageDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceChatMessageDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO___C__GETNORMALMESSAGES_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetPlayerUseEmojis_b__8_0(::RPG::Client::CakeRaceChatEmojiDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceChatEmojiDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO___C__GETPLAYERUSEEMOJIS_B__8_0_OFFSET))(this, a1);
		}
	};
}
