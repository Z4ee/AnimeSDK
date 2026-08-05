#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2AA70)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2AAB0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__GET_EVERYTHING_B__6_0_OFFSET UNITYSDK_OFFSET(0x1FC2AAC0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__GET_STRICT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1FC2AB50)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationPolicies___c_TypeDefinitionIndex = 7537;

	class SerializationPolicies___c : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::SerializationPolicies___c** StaticGet___9()
		{
			return (::Sirenix::Serialization::SerializationPolicies___c**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies___c_TypeDefinitionIndex)->GetStaticField(0x64B0);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies___c_TypeDefinitionIndex)->GetStaticField(0x64B8);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies___c_TypeDefinitionIndex)->GetStaticField(0x64C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_Everything_b__6_0(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__GET_EVERYTHING_B__6_0_OFFSET))(this, member);
		}

		::System::Boolean _get_Strict_b__10_0(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__GET_STRICT_B__10_0_OFFSET))(this, member);
		}
	};
}
