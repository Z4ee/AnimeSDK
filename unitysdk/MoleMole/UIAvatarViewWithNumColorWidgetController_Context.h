#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C;
class Class_3_4666E61F66433B1E;
class Class_3_A5A83DD37E4BD4BA;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14BD7590)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x14BD77D0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD7540)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarViewWithNumColorWidgetController_Context_TypeDefinitionIndex = 53345;

	class UIAvatarViewWithNumColorWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* UpTipKey; // 0x28
		::Foundation::AssetPath HeadPortraitFullPath; // 0x30
		::System::Action* OnClickInvite; // 0x40
		::Class_1_BE6BF7909AD9D940* briefInfo; // 0x48
		::Class_3_4666E61F66433B1E* PlayerBrief; // 0x50
		::System::String* AttributePath; // 0x58
		::System::String* PlayerName; // 0x60
		::System::Int32 SelfMessageID; // 0x68
		::System::Single ShowTextTimer; // 0x6C
		::System::Int32 PowerNum; // 0x70
		::System::Boolean IsReady; // 0x74
		::System::Boolean ShowAttribute; // 0x75
		::System::Boolean ShowPower; // 0x76
		::System::Boolean IsReject; // 0x77
		::System::Int32 index; // 0x78
		::System::Boolean EnableAdd; // 0x7C
		::System::Boolean ShowSelf; // 0x7D
		::System::Boolean EnableTips; // 0x7E
		::System::Boolean EnableWait; // 0x7F
		::System::Boolean IsPowerEnough; // 0x80
		::System::Int32 OtherMessageID; // 0x84
		::System::Boolean IsShowText; // 0x88
		::System::Boolean ShowLoading; // 0x89
		::System::Boolean EnableInfoBtn; // 0x8A
		::System::Boolean IsLeader; // 0x8B
		::System::Boolean HideName; // 0x8C
		::System::Boolean IsRealPlayer; // 0x8D
		::System::Boolean EnableKick; // 0x8E
		::System::Boolean EnableInvite; // 0x8F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C* coopPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, coopPlayerInfo);
		}

		::System::Void _ctor_2(::Class_3_A5A83DD37E4BD4BA* embattleFightInfo, ::System::Boolean showPlayerIcon)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_A5A83DD37E4BD4BA*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, embattleFightInfo, showPlayerIcon);
		}
	};
}
