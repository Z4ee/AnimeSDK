#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_RELEASEASSETDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x185B6180)
#define RPG_CUSTOMRP_RELEASEASSETDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x185B61B0)
#define RPG_CUSTOMRP_RELEASEASSETDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x185AE810)
#define RPG_CUSTOMRP_RELEASEASSETDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x185B6090)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReleaseAssetDel_TypeDefinitionIndex = 37205;

	class ReleaseAssetDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
