#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5429D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D542A10)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__TRYDESERIALIZEMIGRATION_B__58_0_OFFSET UNITYSDK_OFFSET(0x1D542A20)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsSerializer___c_TypeDefinitionIndex = 30453;

	class fsSerializer___c : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::FullSerializer::fsSerializer___c** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsSerializer___c**)Il2CppClass::FromTypeDefinitionIndex(fsSerializer___c_TypeDefinitionIndex)->GetStaticField(0x23820);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(fsSerializer___c_TypeDefinitionIndex)->GetStaticField(0x23828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryDeserializeMigration_b__58_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__TRYDESERIALIZEMIGRATION_B__58_0_OFFSET))(this, m);
		}
	};
}
