#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A191518F735366A8;
namespace MoleMole { class UIMainCityPhotoPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AC680)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPhotoPopWindowController__SaveTextureToGalleryUniTask_d__21_TypeDefinitionIndex = 46638;

	struct alignas(8) UIMainCityPhotoPopWindowController__SaveTextureToGalleryUniTask_d__21
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_A191518F735366A8*> __u__1; // 0x20
		::UnityEngine::RenderTexture* rt; // 0x38
		::MoleMole::UIMainCityPhotoPopWindowController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER__SAVETEXTURETOGALLERYUNITASK_D__21_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
