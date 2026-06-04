#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"
#include "unitysdk/Newtonsoft/Json/MemberSerialization.h"
#include "unitysdk/Newtonsoft/Json/Required.h"
#include "unitysdk/System/Nullable_1.h"

#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1881AD40)
#define NEWTONSOFT_JSON_JSONOBJECTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1881AD50)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonObjectAttribute_TypeDefinitionIndex = 9253;

	class JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Nullable_1<::Newtonsoft::Json::Required> _itemRequired; // 0x38
		::Newtonsoft::Json::MemberSerialization _memberSerialization; // 0x40

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
