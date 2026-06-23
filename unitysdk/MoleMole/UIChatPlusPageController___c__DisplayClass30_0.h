#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_848BA58F81F05F34;
namespace MoleMole { class UIChatPlusPageController; }
namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1736D430)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x1736E080)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x1736E0D0)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x1736E160)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__5_OFFSET UNITYSDK_OFFSET(0x1736E150)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET UNITYSDK_OFFSET(0x1736D440)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass30_0_TypeDefinitionIndex = 70296;

	class UIChatPlusPageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* finishFunc; // 0x10
		::MoleMole::GalGame::PlayChatPlusStoryNode* config; // 0x18
		::System::Action* voiceEndFunc; // 0x20
		::MoleMole::UIChatPlusPageController* __4__this; // 0x28
		::Class_3_848BA58F81F05F34* __9__5; // 0x30
		::System::Boolean isSkip; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_g__DoPlayStoryNode_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_G__DOPLAYSTORYNODE_0_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__5(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__5_OFFSET))(this, pendingId, playingId);
		}

		::System::Void _PlayStoryNode_b__3(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS30_0__PLAYSTORYNODE_B__3_OFFSET))(this, pendingId, playingId);
		}
	};
}
