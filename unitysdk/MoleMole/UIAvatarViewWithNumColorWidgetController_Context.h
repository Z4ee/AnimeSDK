#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C;
class Class_3_09CC5D2676B783CA;
class Class_3_21B05F71874D603A;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1601B660)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1601B8A0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1601B610)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarViewWithNumColorWidgetController_Context_TypeDefinitionIndex = 84461;

	class UIAvatarViewWithNumColorWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* PlayerName; // 0x28
		::System::String* HeadPortraitPath; // 0x30
		::Class_1_BE6BF7909AD9D940* briefInfo; // 0x38
		::Foundation::AssetPath AvatarIconFullPath; // 0x40
		::System::Action* OnClickInvite; // 0x50
		::Class_3_09CC5D2676B783CA* PlayerBrief; // 0x58
		::System::String* AttributePath; // 0x60
		::System::String* UpTipKey; // 0x68
		::System::Int32 index; // 0x70
		::System::Int32 PowerNum; // 0x74
		::System::Int32 OtherMessageID; // 0x78
		::System::Boolean IsReady; // 0x7C
		::System::Boolean EnableInfoBtn; // 0x7D
		::System::Boolean EnableTips; // 0x7E
		::System::Boolean ShowAttribute; // 0x7F
		::System::Boolean EnableAdd; // 0x80
		::System::Boolean ShowPower; // 0x81
		::System::Boolean IsLeader; // 0x82
		::System::Boolean IsRealPlayer; // 0x83
		::System::Single ShowTextTimer; // 0x84
		::System::Boolean IsFrameTexture; // 0x88
		::System::Boolean ShowSelf; // 0x89
		::System::Boolean HideName; // 0x8A
		::System::Boolean ShowLoading; // 0x8B
		::System::Int32 SelfMessageID; // 0x8C
		::System::Boolean IsPowerEnough; // 0x90
		::System::Boolean IsReject; // 0x91
		::System::Boolean EnableWait; // 0x92
		::System::Boolean IsShowText; // 0x93
		::System::Boolean EnableInvite; // 0x94
		::System::Boolean EnableKick; // 0x95

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C* coopPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CA81EEAA0E1B3609_Class_1_431CA56DE0945A7C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, coopPlayerInfo);
		}

		::System::Void _ctor_2(::Class_3_21B05F71874D603A* embattleFightInfo, ::System::Boolean showPlayerIcon)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_21B05F71874D603A*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_CONTEXT__CTOR_2_OFFSET))(this, embattleFightInfo, showPlayerIcon);
		}
	};
}
