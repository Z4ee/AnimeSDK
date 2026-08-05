#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocator_FormatterInfo.h"
#include "unitysdk/Sirenix/Serialization/FormatterLocator_FormatterLocatorInfo.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IFormatter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace Sirenix::Serialization { class IUnityGeneratedFormatter; }
namespace Sirenix::Serialization { template <typename T> class IFormatter_1; }
namespace Sirenix::Serialization::Utilities { template <typename T1, typename T2, typename T3> class DoubleLookupDictionary_3; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_ADD_FORMATTERRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F44F660)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_CREATEFORMATTER_OFFSET UNITYSDK_OFFSET(0x1F44FF10)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETALLCOMPATIBLEPREDEFINEDFORMATTERS_OFFSET UNITYSDK_OFFSET(0x1F450F30)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETALLPOSSIBLEMISSINGAOTTYPES_OFFSET UNITYSDK_OFFSET(0x1F450ED0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETFORMATTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F451E30)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1F44FAA0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_LOGAOTERROR_OFFSET UNITYSDK_OFFSET(0x1F450D10)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_REGISTERUNITYGENERATEDFORMATTER_OFFSET UNITYSDK_OFFSET(0x1F44F700)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_REMOVE_FORMATTERRESOLVE_OFFSET UNITYSDK_OFFSET(0x1F44F6B0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR_TRYGETUNITYGENERATEDFORMATTER_OFFSET UNITYSDK_OFFSET(0x1F44F890)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F44E5D0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterLocator_TypeDefinitionIndex = 7438;

	class FormatterLocator : public ::System::Object
	{
	public:
		static ::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter*>** StaticGet_TypeFormatterMap()
		{
			return (::Sirenix::Serialization::Utilities::DoubleLookupDictionary_3<::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator_TypeDefinitionIndex)->GetStaticField(0x65B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::IFormatter*>** StaticGet_FormatterInstances()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::IFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator_TypeDefinitionIndex)->GetStaticField(0x65B8);
		}
		static ::System::Collections::Generic::List_1<::Sirenix::Serialization::FormatterLocator_FormatterInfo>** StaticGet_FormatterInfos()
		{
			return (::System::Collections::Generic::List_1<::Sirenix::Serialization::FormatterLocator_FormatterInfo>**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator_TypeDefinitionIndex)->GetStaticField(0x65C0);
		}
		static ::System::Collections::Generic::List_1<::Sirenix::Serialization::FormatterLocator_FormatterLocatorInfo>** StaticGet_FormatterLocators()
		{
			return (::System::Collections::Generic::List_1<::Sirenix::Serialization::FormatterLocator_FormatterLocatorInfo>**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator_TypeDefinitionIndex)->GetStaticField(0x65C8);
		}
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator_TypeDefinitionIndex)->GetStaticField(0x65D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::IUnityGeneratedFormatter*>** StaticGet_UnityGeneratedFormatterCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::IUnityGeneratedFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(FormatterLocator_TypeDefinitionIndex)->GetStaticField(0x65D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__CCTOR_OFFSET))();
		}

		static ::System::Void add_FormatterResolve(::System::Func_2<::System::Type*, ::Sirenix::Serialization::IFormatter*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Type*, ::Sirenix::Serialization::IFormatter*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_ADD_FORMATTERRESOLVE_OFFSET))(value);
		}

		static ::System::Void remove_FormatterResolve(::System::Func_2<::System::Type*, ::Sirenix::Serialization::IFormatter*>* value)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Type*, ::Sirenix::Serialization::IFormatter*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_REMOVE_FORMATTERRESOLVE_OFFSET))(value);
		}

		static ::System::Void RegisterUnityGeneratedFormatter(::System::Type* type, ::Sirenix::Serialization::IUnityGeneratedFormatter* formatter)
		{
			return ((::System::Void(*)(::System::Type*, ::Sirenix::Serialization::IUnityGeneratedFormatter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_REGISTERUNITYGENERATEDFORMATTER_OFFSET))(type, formatter);
		}

		static ::System::Boolean TryGetUnityGeneratedFormatter(::System::Type* type, ::Sirenix::Serialization::IUnityGeneratedFormatter*& formatter)
		{
			return ((::System::Boolean(*)(::System::Type*, ::Sirenix::Serialization::IUnityGeneratedFormatter*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_TRYGETUNITYGENERATEDFORMATTER_OFFSET))(type, formatter);
		}

		static ::Sirenix::Serialization::IFormatter* GetFormatter(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::Sirenix::Serialization::IFormatter*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETFORMATTER_OFFSET))(type, policy);
		}

		static ::System::Void LogAOTError(::System::Type* type, ::System::Exception* ex)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Exception*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_LOGAOTERROR_OFFSET))(type, ex);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* GetAllPossibleMissingAOTTypes(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETALLPOSSIBLEMISSINGAOTTYPES_OFFSET))(type);
		}

		static ::System::Collections::Generic::List_1<::Sirenix::Serialization::IFormatter*>* GetAllCompatiblePredefinedFormatters(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::Serialization::IFormatter*>*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETALLCOMPATIBLEPREDEFINEDFORMATTERS_OFFSET))(type, policy);
		}

		static ::Sirenix::Serialization::IFormatter* CreateFormatter(::System::Type* type, ::Sirenix::Serialization::ISerializationPolicy* policy)
		{
			return ((::Sirenix::Serialization::IFormatter*(*)(::System::Type*, ::Sirenix::Serialization::ISerializationPolicy*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_CREATEFORMATTER_OFFSET))(type, policy);
		}

		static ::Sirenix::Serialization::IFormatter* GetFormatterInstance(::System::Type* type)
		{
			return ((::Sirenix::Serialization::IFormatter*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR_GETFORMATTERINSTANCE_OFFSET))(type);
		}
	};
}
