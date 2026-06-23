#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4FFF0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__DISPLAYCLASS15_0__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1CC50050)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__DISPLAYCLASS15_0__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_B__1_OFFSET UNITYSDK_OFFSET(0x1CC50100)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedMethodInfo___c__DisplayClass15_0_TypeDefinitionIndex = 29472;

	class SerializedMethodInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Type*>* parameterTypes; // 0x18
		::System::Boolean isSerializedGeneric; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__DISPLAYCLASS15_0__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_B__0_OFFSET))(this, m);
		}

		::System::Boolean _UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__1(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__DISPLAYCLASS15_0__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_B__1_OFFSET))(this, m);
		}
	};
}
