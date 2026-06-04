#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x188196F0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET UNITYSDK_OFFSET(0x188196E0)
#define NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x188196C0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonContainerAttribute_TypeDefinitionIndex = 9250;

	class JsonContainerAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Object*>* _ItemConverterParameters_k__BackingField; // 0x10
		::System::Type* _ItemConverterType_k__BackingField; // 0x18
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _itemTypeNameHandling; // 0x20
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _itemReferenceLoopHandling; // 0x28
		::System::Nullable_1<::System::Boolean> _itemIsReference; // 0x30
		::System::Nullable_1<::System::Boolean> _isReference; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Type* get_ItemConverterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_ItemConverterParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONTAINERATTRIBUTE_GET_ITEMCONVERTERPARAMETERS_OFFSET))(this);
		}
	};
}
