#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/ObjectIntPair_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class Extension; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3532F0)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B353330)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B353340)
#define GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1B353350)

namespace Google::Protobuf
{
	inline static constexpr unsigned int ExtensionRegistry___c_TypeDefinitionIndex = 5366;

	class ExtensionRegistry___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::ExtensionRegistry___c** StaticGet___9()
		{
			return (::Google::Protobuf::ExtensionRegistry___c**)Il2CppClass::FromTypeDefinitionIndex(ExtensionRegistry___c_TypeDefinitionIndex)->GetStaticField(0x1CA30);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>, ::Google::Protobuf::Extension*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>, ::Google::Protobuf::Extension*>**)Il2CppClass::FromTypeDefinitionIndex(ExtensionRegistry___c_TypeDefinitionIndex)->GetStaticField(0x1CA38);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>, ::Google::Protobuf::ObjectIntPair_1<::System::Type*>>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>, ::Google::Protobuf::ObjectIntPair_1<::System::Type*>>**)Il2CppClass::FromTypeDefinitionIndex(ExtensionRegistry___c_TypeDefinitionIndex)->GetStaticField(0x1CA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::ObjectIntPair_1<::System::Type*> __ctor_b__2_0(::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*> a1)
		{
			return ((::Google::Protobuf::ObjectIntPair_1<::System::Type*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

		::Google::Protobuf::Extension* __ctor_b__2_1(::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*> a1)
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Google::Protobuf::ObjectIntPair_1<::System::Type*>, ::Google::Protobuf::Extension*>))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_EXTENSIONREGISTRY___C___CTOR_B__2_1_OFFSET))(this, a1);
		}
	};
}
