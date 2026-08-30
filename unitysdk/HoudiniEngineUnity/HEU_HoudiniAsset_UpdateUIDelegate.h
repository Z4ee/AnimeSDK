#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B429F10)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B429F40)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B413A40)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B429EA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset_UpdateUIDelegate_TypeDefinitionIndex = 39099;

	class HEU_HoudiniAsset_UpdateUIDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET_UPDATEUIDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
