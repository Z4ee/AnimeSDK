#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define BEWILDERED_SMARTLIBRARY_UNIQUEID_EQUALS_OFFSET UNITYSDK_OFFSET(0xADE3F0)
#define BEWILDERED_SMARTLIBRARY_UNIQUEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9DAA20)
#define BEWILDERED_SMARTLIBRARY_UNIQUEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DA9E0)
#define BEWILDERED_SMARTLIBRARY_UNIQUEID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xADE480)
#define BEWILDERED_SMARTLIBRARY_UNIQUEID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xADE400)
#define BEWILDERED_SMARTLIBRARY_UNIQUEID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C370)

namespace Bewildered::SmartLibrary
{
	inline static constexpr unsigned int UniqueID_TypeDefinitionIndex = 94413;

	struct alignas(8) UniqueID
	{
		static ::Bewildered::SmartLibrary::UniqueID* StaticGet_Empty()
		{
			return (::Bewildered::SmartLibrary::UniqueID*)Il2CppClass::FromTypeDefinitionIndex(UniqueID_TypeDefinitionIndex)->GetStaticField(0x524E0);
		}
		::System::Guid _guid; // 0x10
		::Il2CppArray<::System::Byte>* _serializedGuid; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_UNIQUEID__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_UNIQUEID_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_UNIQUEID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_UNIQUEID_TOSTRING_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_UNIQUEID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEWILDERED_SMARTLIBRARY_UNIQUEID_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
