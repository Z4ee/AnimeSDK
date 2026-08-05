#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23A550)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23A590)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER___C__TRYDESERIALIZEMIGRATION_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E23A5A0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsSerializer___c_TypeDefinitionIndex = 29804;

	class fsSerializer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(fsSerializer___c_TypeDefinitionIndex)->GetStaticField(0x25090);
		}
		static ::ParadoxNotion::Serialization::FullSerializer::fsSerializer___c** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsSerializer___c**)Il2CppClass::FromTypeDefinitionIndex(fsSerializer___c_TypeDefinitionIndex)->GetStaticField(0x25098);
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
