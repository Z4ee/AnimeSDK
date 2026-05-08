#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B333590)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3335D0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B3335E0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedConstructorInfo___c_TypeDefinitionIndex = 27612;

	class SerializedConstructorInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SerializedConstructorInfo___c_TypeDefinitionIndex)->GetStaticField(0x20E70);
		}
		static ::ParadoxNotion::Serialization::SerializedConstructorInfo___c** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::SerializedConstructorInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SerializedConstructorInfo___c_TypeDefinitionIndex)->GetStaticField(0x20E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* _UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_b__10_0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDCONSTRUCTORINFO___C__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_B__10_0_OFFSET))(this, p);
		}
	};
}
