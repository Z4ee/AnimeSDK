#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace MessagePack::Internal { class DynamicAssembly; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1D34E2B0)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D34E190)
#define MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34E180)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicEnumResolver_TypeDefinitionIndex = 30470;

	class DynamicEnumResolver : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::MessagePack::Internal::DynamicAssembly*>** StaticGet_DynamicAssembly()
		{
			return (::System::Lazy_1<::MessagePack::Internal::DynamicAssembly*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver_TypeDefinitionIndex)->GetStaticField(0x24AD0);
		}
		static ::MessagePack::Resolvers::DynamicEnumResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicEnumResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver_TypeDefinitionIndex)->GetStaticField(0x24AD8);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicEnumResolver_TypeDefinitionIndex)->GetStaticField(0x7B20);
		}
		// static const ::System::String* ModuleName; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::TypeInfo* BuildType(::System::Type* enumType)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICENUMRESOLVER_BUILDTYPE_OFFSET))(enumType);
		}
	};
}
