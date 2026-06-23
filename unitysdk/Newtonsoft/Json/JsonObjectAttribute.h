#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x1E7DA740)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E7DA720)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x1E7DA760)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1E7DA730)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DA790)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E7DA7A0)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DA780)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonObjectAttribute_TypeDefinitionIndex = 6999;

	class JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::Newtonsoft::Json::MemberSerialization _memberSerialization; // 0x68
		::System::Nullable_1<::Newtonsoft::Json::Required> _itemRequired; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::MemberSerialization memberSerialization)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_1_OFFSET))(this, memberSerialization);
		}

		::System::Void _ctor_2(::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_2_OFFSET))(this, id);
		}

		::Newtonsoft::Json::MemberSerialization get_MemberSerialization()
		{
			return ((::Newtonsoft::Json::MemberSerialization(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET))(this);
		}

		::System::Void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::MemberSerialization))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_MEMBERSERIALIZATION_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Required get_ItemRequired()
		{
			return ((::Newtonsoft::Json::Required(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_ITEMREQUIRED_OFFSET))(this);
		}

		::System::Void set_ItemRequired(::Newtonsoft::Json::Required value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Required))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_SET_ITEMREQUIRED_OFFSET))(this, value);
		}
	};
}
