#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerType.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define NEWTONSOFT_JSON_JSONPOSITION_BUILDPATH_OFFSET UNITYSDK_OFFSET(0x16440550)
#define NEWTONSOFT_JSON_JSONPOSITION_CALCULATELENGTH_OFFSET UNITYSDK_OFFSET(0x20DB3C0)
#define NEWTONSOFT_JSON_JSONPOSITION_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0x164407C0)
#define NEWTONSOFT_JSON_JSONPOSITION_TYPEHASINDEX_OFFSET UNITYSDK_OFFSET(0x164402E0)
#define NEWTONSOFT_JSON_JSONPOSITION_WRITETO_OFFSET UNITYSDK_OFFSET(0x20DB3D0)
#define NEWTONSOFT_JSON_JSONPOSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x16440B20)
#define NEWTONSOFT_JSON_JSONPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x20DB370)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonPosition_TypeDefinitionIndex = 8193;

	struct alignas(8) JsonPosition
	{
		static ::Il2CppArray<::System::Char>** StaticGet_SpecialCharacters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JsonPosition_TypeDefinitionIndex)->GetStaticField(0x18060);
		}
		::Newtonsoft::Json::JsonContainerType Type; // 0x10
		::System::Int32 Position; // 0x14
		::System::String* PropertyName; // 0x18
		::System::Boolean HasIndex; // 0x20

		::System::Void _ctor(::Newtonsoft::Json::JsonContainerType type)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION__CTOR_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION__CCTOR_OFFSET))();
		}

		::System::Int32 CalculateLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_CALCULATELENGTH_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_WRITETO_OFFSET))(this, sb);
		}

		static ::System::Boolean TypeHasIndex(::Newtonsoft::Json::JsonContainerType type)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_TYPEHASINDEX_OFFSET))(type);
		}

		/*
		static ::System::String* BuildPath(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* positions, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> currentPosition)
		{
			return ((::System::String*(*)(::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>*, ::System::Nullable_1<::Newtonsoft::Json::JsonPosition>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_BUILDPATH_OFFSET))(positions, currentPosition);
		}
		*/

		static ::System::String* FormatMessage(::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::System::String* path, ::System::String* message)
		{
			return ((::System::String*(*)(::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONPOSITION_FORMATMESSAGE_OFFSET))(lineInfo, path, message);
		}
	};
}
