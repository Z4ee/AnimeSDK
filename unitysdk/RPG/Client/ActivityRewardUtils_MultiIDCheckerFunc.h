#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8FAD680)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8FAD6C0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x8FAC8D0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x8FABD10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils_MultiIDCheckerFunc_TypeDefinitionIndex = 50104;

	class ActivityRewardUtils_MultiIDCheckerFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::System::UInt32>* arr, ::System::Func_2<::System::UInt32, ::System::Boolean>* checker)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_INVOKE_OFFSET))(this, arr, checker);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::UInt32>* arr, ::System::Func_2<::System::UInt32, ::System::Boolean>* checker, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_BEGININVOKE_OFFSET))(this, arr, checker, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
