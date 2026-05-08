#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_4;
class Class_3_025FF4981524A424_370;
class Class_3_4EE04B418903C4E1_73;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDBIGSCENEDUNGEON_OFFSET UNITYSDK_OFFSET(0x1407F0F0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ONBIGSCENEDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x1407F450)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_REQUESTBIGSCENEDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x1407F200)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils_TypeDefinitionIndex = 67964;

	class ExitDonjonUtils : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationTokenSource** StaticGet__endBigSceneDungeonCts()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils_TypeDefinitionIndex)->GetStaticField(0x3B9F0);
		}

		static ::System::Void EndBigSceneDungeon(::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Func_1<::Class_3_4EE04B418903C4E1_73*>* onBuildEndBigSceneDungeon)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Func_1<::Class_3_4EE04B418903C4E1_73*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDBIGSCENEDUNGEON_OFFSET))(success, onResultContextPrepared, onBuildEndBigSceneDungeon);
		}

		static ::System::Void RequestBigSceneDungeonEnd(::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Func_1<::Class_3_4EE04B418903C4E1_73*>* onBuildEndBigSceneDungeon)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Func_1<::Class_3_4EE04B418903C4E1_73*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_REQUESTBIGSCENEDUNGEONEND_OFFSET))(success, onResultContextPrepared, onBuildEndBigSceneDungeon);
		}

		static ::Cysharp::Threading::Tasks::UniTask OnBigSceneDungeonEnd(::Class_3_025FF4981524A424_370* rsp, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* ntfs, ::System::Action* onResultContextPrepared, ::System::Threading::CancellationToken ct)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Class_3_025FF4981524A424_370*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*, ::System::Action*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ONBIGSCENEDUNGEONEND_OFFSET))(rsp, ntfs, onResultContextPrepared, ct);
		}
	};
}
