#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB4B10B0)
#define CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB4B10F0)
#define CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4_INVOKE_OFFSET UNITYSDK_OFFSET(0xB4AF410)
#define CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4__CTOR_OFFSET UNITYSDK_OFFSET(0xB4B0FC0)

inline static constexpr unsigned int Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4_TypeDefinitionIndex = 79457;

class Class_1_0A972FE8328AB478_Class_3_6CBD457A22D17EB4 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a1, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::Collections::Immutable::IImmutableSet_1<::UnityEngine::Vector2Int>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_0A972FE8328AB478_CLASS_3_6CBD457A22D17EB4_ENDINVOKE_OFFSET))(this, a1);
	}
};
