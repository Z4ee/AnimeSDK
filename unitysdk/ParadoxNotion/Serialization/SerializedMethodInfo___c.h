#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F490)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F4D0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1EB9F4E0)
#define PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_B__14_1_OFFSET UNITYSDK_OFFSET(0x1EB9F520)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int SerializedMethodInfo___c_TypeDefinitionIndex = 31227;

	class SerializedMethodInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SerializedMethodInfo___c_TypeDefinitionIndex)->GetStaticField(0x257D0);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SerializedMethodInfo___c_TypeDefinitionIndex)->GetStaticField(0x257D8);
		}
		static ::ParadoxNotion::Serialization::SerializedMethodInfo___c** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::SerializedMethodInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SerializedMethodInfo___c_TypeDefinitionIndex)->GetStaticField(0x257E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* _UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_b__14_0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_B__14_0_OFFSET))(this, p);
		}

		::System::String* _UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_b__14_1(::System::Type* a)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_SERIALIZEDMETHODINFO___C__UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_B__14_1_OFFSET))(this, a);
		}
	};
}
