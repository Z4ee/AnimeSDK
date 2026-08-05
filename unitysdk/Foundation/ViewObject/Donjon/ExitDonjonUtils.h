#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_34;
class Class_3_025FF4981524A424_403;
class Class_3_568600B6F5743120;
class Class_3_E6DBB0638F698853_73;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDBIGSCENEDUNGEON_OFFSET UNITYSDK_OFFSET(0x15418D70)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDCURRENTXKOVDUNGEON_OFFSET UNITYSDK_OFFSET(0x15418C00)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ONBIGSCENEDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x15419450)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_REQUESTBIGSCENEDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x154191F0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils_TypeDefinitionIndex = 69989;

	class ExitDonjonUtils : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationTokenSource** StaticGet__endBigSceneDungeonCts()
		{
			return (::System::Threading::CancellationTokenSource**)Il2CppClass::FromTypeDefinitionIndex(ExitDonjonUtils_TypeDefinitionIndex)->GetStaticField(0x3E830);
		}

		static ::System::Void EndCurrentXKovDungeon(::System::Boolean success, ::System::Int32 escapeId, ::System::Action_2<::System::Boolean, ::Class_3_568600B6F5743120*>* onResultContextPrepared)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_3_568600B6F5743120*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDCURRENTXKOVDUNGEON_OFFSET))(success, escapeId, onResultContextPrepared);
		}

		static ::System::Void EndBigSceneDungeon(::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Func_1<::Class_3_E6DBB0638F698853_73*>* onBuildEndBigSceneDungeon)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Func_1<::Class_3_E6DBB0638F698853_73*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ENDBIGSCENEDUNGEON_OFFSET))(success, onResultContextPrepared, onBuildEndBigSceneDungeon);
		}

		static ::System::Void RequestBigSceneDungeonEnd(::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Func_1<::Class_3_E6DBB0638F698853_73*>* onBuildEndBigSceneDungeon)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::System::Func_1<::Class_3_E6DBB0638F698853_73*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_REQUESTBIGSCENEDUNGEONEND_OFFSET))(success, onResultContextPrepared, onBuildEndBigSceneDungeon);
		}

		static ::Cysharp::Threading::Tasks::UniTask OnBigSceneDungeonEnd(::Class_3_025FF4981524A424_403* rsp, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* ntfs, ::System::Boolean success, ::System::Action* onResultContextPrepared, ::System::Threading::CancellationToken ct)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::Class_3_025FF4981524A424_403*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*, ::System::Boolean, ::System::Action*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS_ONBIGSCENEDUNGEONEND_OFFSET))(rsp, ntfs, success, onResultContextPrepared, ct);
		}
	};
}
