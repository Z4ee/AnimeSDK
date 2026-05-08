#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDataType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF37710)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF37750)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER___C__FAILEXPECTEDTYPE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1AF37760)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsBaseConverter___c_TypeDefinitionIndex = 27079;

	class fsBaseConverter___c : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter___c** StaticGet___9()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsBaseConverter___c**)Il2CppClass::FromTypeDefinitionIndex(fsBaseConverter___c_TypeDefinitionIndex)->GetStaticField(0x206E0);
		}
		static ::System::Func_2<::ParadoxNotion::Serialization::FullSerializer::fsDataType, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::ParadoxNotion::Serialization::FullSerializer::fsDataType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(fsBaseConverter___c_TypeDefinitionIndex)->GetStaticField(0x206E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER___C__CTOR_OFFSET))(this);
		}

		::System::String* _FailExpectedType_b__6_0(::ParadoxNotion::Serialization::FullSerializer::fsDataType t)
		{
			return ((::System::String*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsDataType))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER___C__FAILEXPECTEDTYPE_B__6_0_OFFSET))(this, t);
		}
	};
}
