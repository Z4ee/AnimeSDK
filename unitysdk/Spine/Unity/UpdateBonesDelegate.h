#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class ISkeletonAnimation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SPINE_UNITY_UPDATEBONESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183426C0)
#define SPINE_UNITY_UPDATEBONESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183426F0)
#define SPINE_UNITY_UPDATEBONESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1831FC40)
#define SPINE_UNITY_UPDATEBONESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x183425D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateBonesDelegate_TypeDefinitionIndex = 43877;

	class UpdateBonesDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Spine::Unity::ISkeletonAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::ISkeletonAnimation* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_UPDATEBONESDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
