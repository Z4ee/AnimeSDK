#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UILoadingTransferPopWindowController___c__DisplayClass48_0; }

#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1744A110)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__2_OFFSET UNITYSDK_OFFSET(0x1744A120)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__3_OFFSET UNITYSDK_OFFSET(0x1744A150)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransferPopWindowController___c__DisplayClass48_1_TypeDefinitionIndex = 85306;

	class UILoadingTransferPopWindowController___c__DisplayClass48_1 : public ::System::Object
	{
	public:
		::MoleMole::MultipleVideoPlayerManager* mpm; // 0x10
		::MoleMole::UILoadingTransferPopWindowController___c__DisplayClass48_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitVideoPlayer_b__2(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__2_OFFSET))(this, vp);
		}

		::System::Void _InitVideoPlayer_b__3(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___C__DISPLAYCLASS48_1__INITVIDEOPLAYER_B__3_OFFSET))(this, vp);
		}
	};
}
