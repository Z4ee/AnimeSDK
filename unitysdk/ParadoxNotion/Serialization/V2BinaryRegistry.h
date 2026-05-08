#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B0FCCB0)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_KEYTABLE_OFFSET UNITYSDK_OFFSET(0x1B0FCB10)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_TYPETABLE_OFFSET UNITYSDK_OFFSET(0x1B0FCBD0)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETKEYTABLE_OFFSET UNITYSDK_OFFSET(0x1B0FCC90)
#define PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETTYPETABLE_OFFSET UNITYSDK_OFFSET(0x1B0FCCA0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int V2BinaryRegistry_TypeDefinitionIndex = 27316;

	class V2BinaryRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__keyTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x1FAD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__typeTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(V2BinaryRegistry_TypeDefinitionIndex)->GetStaticField(0x1FAD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* get_KeyTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_KEYTABLE_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* get_TypeTable()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_GET_TYPETABLE_OFFSET))();
		}

		static ::System::Void SetKeyTable(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* table)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETKEYTABLE_OFFSET))(table);
		}

		static ::System::Void SetTypeTable(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* table)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_SETTYPETABLE_OFFSET))(table);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_V2BINARYREGISTRY_CLEAR_OFFSET))();
		}
	};
}
