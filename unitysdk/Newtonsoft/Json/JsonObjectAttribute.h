#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/System/Nullable_1.h"

#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x16440270)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16440280)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonObjectAttribute_TypeDefinitionIndex = 8204;

	class JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::Newtonsoft::Json::MemberSerialization _memberSerialization; // 0x38
		::System::Nullable_1<::Newtonsoft::Json::Required> _itemRequired; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::MemberSerialization get_MemberSerialization()
		{
			return ((::Newtonsoft::Json::MemberSerialization(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET))(this);
		}
	};
}
