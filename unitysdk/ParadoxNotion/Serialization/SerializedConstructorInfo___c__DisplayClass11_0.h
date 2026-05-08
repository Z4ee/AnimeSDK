#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B333620)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__DISPLAYCLASS11_0__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1B333630)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedConstructorInfo___c__DisplayClass11_0_TypeDefinitionIndex = 27611;

	class SerializedConstructorInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* parameterTypes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__0(::System::Reflection::ConstructorInfo* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__DISPLAYCLASS11_0__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_B__0_OFFSET))(this, c);
		}
	};
}
