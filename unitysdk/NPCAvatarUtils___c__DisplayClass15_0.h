#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define NPCAVATARUTILS___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18268590)
#define NPCAVATARUTILS___C__DISPLAYCLASS15_0__RENDERERFADEOPERATIONASYNC_G__ONTASKCALL_0_OFFSET UNITYSDK_OFFSET(0x182685A0)

inline static constexpr unsigned int NPCAvatarUtils___c__DisplayClass15_0_TypeDefinitionIndex = 59889;

class NPCAvatarUtils___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* cs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Void _RendererFadeOperationAsync_g__OnTaskCall_0(::System::Boolean success)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCAVATARUTILS___C__DISPLAYCLASS15_0__RENDERERFADEOPERATIONASYNC_G__ONTASKCALL_0_OFFSET))(this, success);
	}
};
