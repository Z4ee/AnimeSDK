#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A98F487E59440D0B;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D7080)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__0_OFFSET UNITYSDK_OFFSET(0x1A308430)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__1_OFFSET UNITYSDK_OFFSET(0x1A308480)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__2_OFFSET UNITYSDK_OFFSET(0x1A3084E0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__3_OFFSET UNITYSDK_OFFSET(0x1A308820)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__4_OFFSET UNITYSDK_OFFSET(0x1A308460)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass135_0_TypeDefinitionIndex = 62820;

	class UIGalgamePageController___c__DisplayClass135_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* triggerAfterVOAudioList; // 0x10
		::Class_2_A98F487E59440D0B* textPlayNode; // 0x18
		::System::String* avatarName; // 0x20
		::MoleMole::UIGalgamePageController* __4__this; // 0x28
		::System::Boolean hasSound; // 0x30
		::System::Boolean hasVoice; // 0x31
		::System::Boolean hasOneShotSound; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__4_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__1_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__2_OFFSET))(this);
		}

		::System::Void _PlayPictureStoryNode_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS135_0__PLAYPICTURESTORYNODE_B__3_OFFSET))(this);
		}
	};
}
