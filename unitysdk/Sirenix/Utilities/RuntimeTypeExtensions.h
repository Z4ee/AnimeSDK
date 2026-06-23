#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ICustomAttributeProvider; }

#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_CREATENICENAME_OFFSET UNITYSDK_OFFSET(0x1DE549E0)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1DE55340)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DE55220)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETCACHEDNICENAME_OFFSET UNITYSDK_OFFSET(0x1DE546F0)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETNICENAME_OFFSET UNITYSDK_OFFSET(0x1DE54610)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_INHERITSFROM_OFFSET UNITYSDK_OFFSET(0x1DE54E80)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_TYPENAMEGAUNTLET_OFFSET UNITYSDK_OFFSET(0x1DE55110)
#define SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE55400)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int RuntimeTypeExtensions_TypeDefinitionIndex = 6476;

	class RuntimeTypeExtensions : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_CachedNiceNames_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTypeExtensions_TypeDefinitionIndex)->GetStaticField(0x5A10);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_TypeNameAlternatives()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTypeExtensions_TypeDefinitionIndex)->GetStaticField(0x5A18);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_CachedNiceNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeTypeExtensions_TypeDefinitionIndex)->GetStaticField(0x5A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::String* GetNiceName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETNICENAME_OFFSET))(type);
		}

		static ::System::String* GetCachedNiceName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETCACHEDNICENAME_OFFSET))(type);
		}

		static ::System::String* CreateNiceName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_CREATENICENAME_OFFSET))(type);
		}

		static ::System::String* TypeNameGauntlet(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_TYPENAMEGAUNTLET_OFFSET))(type);
		}

		static ::System::Boolean InheritsFrom(::System::Type* type, ::System::Type* baseType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_INHERITSFROM_OFFSET))(type, baseType);
		}

		static ::Il2CppArray<::System::Attribute*>* GetAttributes(::System::Reflection::ICustomAttributeProvider* member)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ICustomAttributeProvider*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETATTRIBUTES_OFFSET))(member);
		}

		static ::Il2CppArray<::System::Attribute*>* GetAttributes_1(::System::Reflection::ICustomAttributeProvider* member, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Reflection::ICustomAttributeProvider*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_RUNTIMETYPEEXTENSIONS_GETATTRIBUTES_1_OFFSET))(member, inherit);
		}
	};
}
