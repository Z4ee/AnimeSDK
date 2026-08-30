#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class BidirectionalDictionary_2; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1BF03120)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INITIALIZEENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1BF02B50)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_PARSEENUMNAME_OFFSET UNITYSDK_OFFSET(0x1BF038E0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_RESOLVEDENUMNAME_OFFSET UNITYSDK_OFFSET(0x1BF03CD0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TOENUMNAME_OFFSET UNITYSDK_OFFSET(0x1BF03D50)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF03FE0)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int EnumUtils_TypeDefinitionIndex = 9610;

	class EnumUtils : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*>** StaticGet_EnumMemberNamesPerType()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(EnumUtils_TypeDefinitionIndex)->GetStaticField(0x43DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS__CCTOR_OFFSET))();
		}

		static ::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>* InitializeEnumType(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_INITIALIZEENUMTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Object*>* GetValues(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_GETVALUES_OFFSET))(a1);
		}

		static ::System::Object* ParseEnumName(::System::String* a1, ::System::Boolean a2, ::System::Type* a3)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_PARSEENUMNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToEnumName(::System::Type* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Type*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_TOENUMNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ResolvedEnumName(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS_RESOLVEDENUMNAME_OFFSET))(a1, a2);
		}
	};
}
