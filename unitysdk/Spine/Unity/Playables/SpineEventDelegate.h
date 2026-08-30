#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine { class Event; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC15F0)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC1620)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC15E0)
#define SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC14F0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineEventDelegate_TypeDefinitionIndex = 44766;

	class SpineEventDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Event* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Event* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Event*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEEVENTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
