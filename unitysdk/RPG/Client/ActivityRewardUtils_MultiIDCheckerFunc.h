#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC685390)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC6853D0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xC685070)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xC685310)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils_MultiIDCheckerFunc_TypeDefinitionIndex = 61836;

	class ActivityRewardUtils_MultiIDCheckerFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Il2CppArray<::System::UInt32>* a1, ::System::Func_2<::System::UInt32, ::System::Boolean>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::UInt32>* a1, ::System::Func_2<::System::UInt32, ::System::Boolean>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_MULTIIDCHECKERFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
