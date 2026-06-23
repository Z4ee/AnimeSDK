#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Threading { class CancellationTokenSource; }

#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15953570)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_REFRESH_OFFSET UNITYSDK_OFFSET(0x15953830)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_REGISTER_OFFSET UNITYSDK_OFFSET(0x15953130)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_STARTLOOP_OFFSET UNITYSDK_OFFSET(0x15953260)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_STOPIFEMPTY_OFFSET UNITYSDK_OFFSET(0x159534B0)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_STOPLOOP_OFFSET UNITYSDK_OFFSET(0x15953730)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_TICKLOOP_OFFSET UNITYSDK_OFFSET(0x159537B0)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x15953370)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15953D70)
#define FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x15953B50)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int AvatarTriggerTickHelper_TypeDefinitionIndex = 66469;

	class AvatarTriggerTickHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_UseGlobalTick()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarTriggerTickHelper_TypeDefinitionIndex)->GetStaticField(0xF1C0);
		}
		::System::Collections::Generic::HashSet_1<::System::Action*>* _currentList; // 0x10
		::System::Threading::CancellationTokenSource* _cts; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Action*>* _delayAddList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Action*>* _delayRemoveList; // 0x28
		::System::Boolean _running; // 0x30
		::System::Boolean _iterating; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER__CCTOR_OFFSET))();
		}

		::System::Void Register(::System::Action* updateAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_REGISTER_OFFSET))(this, updateAction);
		}

		::System::Void Unregister(::System::Action* updateAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_UNREGISTER_OFFSET))(this, updateAction);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_DISPOSE_OFFSET))(this);
		}

		::System::Void StartLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_STARTLOOP_OFFSET))(this);
		}

		::System::Void StopLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_STOPLOOP_OFFSET))(this);
		}

		::System::Void StopIfEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_STOPIFEMPTY_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_REFRESH_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid TickLoop(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_AVATARTRIGGERTICKHELPER_TICKLOOP_OFFSET))(this, cancellationToken);
		}
	};
}
