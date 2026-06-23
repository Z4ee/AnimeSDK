#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_CANREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E483950)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_GETREFERENCEDUNITYOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E484E30)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_RESET_OFFSET UNITYSDK_OFFSET(0x1E484EB0)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_SETREFERENCEDUNITYOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E484C10)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONCLAIMED_OFFSET UNITYSDK_OFFSET(0x1E484FB0)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONFREED_OFFSET UNITYSDK_OFFSET(0x1E484F30)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_TRYRESOLVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E484E40)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E484B70)
#define SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E484A90)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int UnityReferenceResolver_TypeDefinitionIndex = 7608;

	class UnityReferenceResolver : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::Int32>* referenceIndexMapping; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER__CTOR_1_OFFSET))(this, referencedUnityObjects);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Object*>* GetReferencedUnityObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_GETREFERENCEDUNITYOBJECTS_OFFSET))(this);
		}

		::System::Void SetReferencedUnityObjects(::System::Collections::Generic::List_1<::UnityEngine::Object*>* referencedUnityObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_SETREFERENCEDUNITYOBJECTS_OFFSET))(this, referencedUnityObjects);
		}

		::System::Boolean CanReference(::System::Object* value, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_CANREFERENCE_OFFSET))(this, value, index);
		}

		::System::Boolean TryResolveReference(::System::Int32 index, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_TRYRESOLVEREFERENCE_OFFSET))(this, index, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_RESET_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_Utilities_ICacheNotificationReceiver_OnFreed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONFREED_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_Utilities_ICacheNotificationReceiver_OnClaimed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UNITYREFERENCERESOLVER_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONCLAIMED_OFFSET))(this);
		}
	};
}
