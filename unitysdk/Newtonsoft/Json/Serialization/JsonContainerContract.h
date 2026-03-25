#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContract.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x1647A150)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x1647A0E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1647A160)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1647A180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1647A1A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1647A1C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x1647A0F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1647A170)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1647A190)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1647A1B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1647A1D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x16479620)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContainerContract_TypeDefinitionIndex = 8293;

	class JsonContainerContract : public ::Newtonsoft::Json::Serialization::JsonContract
	{
	public:
		::Newtonsoft::Json::Serialization::JsonContract* _finalItemContract; // 0x80
		::Newtonsoft::Json::Serialization::JsonContract* _itemContract; // 0x88
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0x90
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ItemReferenceLoopHandling_k__BackingField; // 0x98
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _ItemTypeNameHandling_k__BackingField; // 0xA0
		::System::Nullable_1<::System::Boolean> _ItemIsReference_k__BackingField; // 0xA8

		::System::Void _ctor(::System::Type* underlyingType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT__CTOR_OFFSET))(this, underlyingType);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_ItemContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET))(this);
		}

		::System::Void set_ItemContract(::Newtonsoft::Json::Serialization::JsonContract* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET))(this, value);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_FinalItemContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET))(this);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_ItemIsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, value);
		}

		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, value);
		}
	};
}
