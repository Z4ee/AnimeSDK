#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class BidirectionalDictionary_2; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace Newtonsoft::Json::Utilities { template <typename T> class EnumValue_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETNAMES_OFFSET UNITYSDK_OFFSET(0x1E2F90A0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1E2F8BF0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INITIALIZEENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1E2F87A0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_PARSEENUMNAME_OFFSET UNITYSDK_OFFSET(0x1E2F9540)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_RESOLVEDENUMNAME_OFFSET UNITYSDK_OFFSET(0x1E2F98F0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TOENUMNAME_OFFSET UNITYSDK_OFFSET(0x1E2F9970)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9C50)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int EnumUtils_TypeDefinitionIndex = 7052;

	class EnumUtils : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*>** StaticGet_EnumMemberNamesPerType()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(EnumUtils_TypeDefinitionIndex)->GetStaticField(0x5EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>* InitializeEnumType(::System::Type* type)
		{
			return ((::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INITIALIZEENUMTYPE_OFFSET))(type);
		}

		static ::System::Collections::Generic::IList_1<::System::Object*>* GetValues(::System::Type* enumType)
		{
			return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETVALUES_OFFSET))(enumType);
		}

		static ::System::Collections::Generic::IList_1<::System::String*>* GetNames(::System::Type* enumType)
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETNAMES_OFFSET))(enumType);
		}

		static ::System::Object* ParseEnumName(::System::String* enumText, ::System::Boolean isNullable, ::System::Type* t)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_PARSEENUMNAME_OFFSET))(enumText, isNullable, t);
		}

		static ::System::String* ToEnumName(::System::Type* enumType, ::System::String* enumText, ::System::Boolean camelCaseText)
		{
			return ((::System::String*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TOENUMNAME_OFFSET))(enumType, enumText, camelCaseText);
		}

		static ::System::String* ResolvedEnumName(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>* map, ::System::String* enumText)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_RESOLVEDENUMNAME_OFFSET))(map, enumText);
		}
	};
}
