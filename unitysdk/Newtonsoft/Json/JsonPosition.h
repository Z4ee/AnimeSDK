#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerType.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define NEWTONSOFT_JSON_JSONPOSITION_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x1881B190)
#define NEWTONSOFT_JSON_JSONPOSITION_CALCULATELENGTH_OFFSET UNITYSDK_OFFSET(0x383D5D0)
#define NEWTONSOFT_JSON_JSONPOSITION_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0x1881B3F0)
#define NEWTONSOFT_JSON_JSONPOSITION_TYPEHASINDEX_OFFSET UNITYSDK_OFFSET(0x1881ADB0)
#define NEWTONSOFT_JSON_JSONPOSITION_WRITETO_OFFSET UNITYSDK_OFFSET(0x383D5E0)
#define NEWTONSOFT_JSON_JSONPOSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1881B760)
#define NEWTONSOFT_JSON_JSONPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x383D580)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPosition_TypeDefinitionIndex = 9242;

	struct alignas(8) JsonPosition
	{
		static ::Il2CppArray<::System::Char>** StaticGet_SpecialCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JsonPosition_TypeDefinitionIndex)->GetStaticField(0x2DC70);
		}
		::Newtonsoft::Json::JsonContainerType Type; // 0x10
		::System::Int32 Position; // 0x14
		::System::String* PropertyName; // 0x18
		::System::Boolean HasIndex; // 0x20

		::System::Void _ctor(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION__CCTOR_OFFSET))();
		}

		::System::Int32 CalculateLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_CALCULATELENGTH_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_WRITETO_OFFSET))(this, a1);
		}

		static ::System::Boolean TypeHasIndex(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_TYPEHASINDEX_OFFSET))(a1);
		}

		/*
		static ::System::String* BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* a1, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> a2)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_BUILDPATH_OFFSET))(a1, a2);
		}
		*/

		static ::System::String* FormatMessage(::Newtonsoft::Json::IJsonLineInfo* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_FORMATMESSAGE_OFFSET))(a1, a2, a3);
		}
	};
}
