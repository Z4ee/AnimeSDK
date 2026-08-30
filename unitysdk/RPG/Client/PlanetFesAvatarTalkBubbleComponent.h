#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3614E0)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HASTALKDOING_OFFSET UNITYSDK_OFFSET(0x1C361A80)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HIDETALKBUBBLE_OFFSET UNITYSDK_OFFSET(0x1C3619A0)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x1C3615A0)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_SHOWTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0x1C3616E0)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C361B20)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C361B10)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__RECORDAVATARTALK_OFFSET UNITYSDK_OFFSET(0x1C3618F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarTalkBubbleComponent_TypeDefinitionIndex = 66697;

	class PlanetFesAvatarTalkBubbleComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::PlanetFesAvatarTalkBubbleComponent*>** StaticGet__InDoingTalkBubble()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::PlanetFesAvatarTalkBubbleComponent*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarTalkBubbleComponent_TypeDefinitionIndex)->GetStaticField(0x5A080);
		}
		::XLua::LuaTable* _TalkBubblePanel; // 0x18
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>* _ShowTalkCallLua; // 0x20
		::System::Action_1<::XLua::LuaTable*>* _HideTalkCallLua; // 0x28
		::System::Single _TalkDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::XLua::LuaTable* a1, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>* a2, ::System::Action_1<::XLua::LuaTable*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::TextID>*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowTalkBubble(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_SHOWTALKBUBBLE_OFFSET))(this, a1);
		}

		::System::Void HideTalkBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HIDETALKBUBBLE_OFFSET))(this);
		}

		::System::Boolean HasTalkDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HASTALKDOING_OFFSET))(this);
		}

		::System::Void _RecordAvatarTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__RECORDAVATARTALK_OFFSET))(this);
		}
	};
}
