#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_848BA58F81F05F34_1;
namespace MoleMole { class UIChatPlusPageController; }
namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12F7B250)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x12F7BEA0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x12F7BEF0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x12F7BF80)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0x12F7BF70)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET UNITYSDK_OFFSET(0x12F7B260)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass38_0_TypeDefinitionIndex = 51466;

	class UIChatPlusPageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::PlayChatPlusStoryNode* config; // 0x10
		::Class_3_848BA58F81F05F34_1* __9__5; // 0x18
		::System::Action_1<::System::Boolean>* finishFunc; // 0x20
		::System::Action* voiceEndFunc; // 0x28
		::MoleMole::UIChatPlusPageController* __4__this; // 0x30
		::System::Boolean isSkip; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_g__DoPlayStoryNode_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__5(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__5_OFFSET))(this, pendingId, playingId);
		}

		::System::Void _PlayStoryNode_b__3(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYSTORYNODE_B__3_OFFSET))(this, pendingId, playingId);
		}
	};
}
