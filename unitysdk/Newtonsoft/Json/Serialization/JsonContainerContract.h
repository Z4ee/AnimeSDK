#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContract.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x172E5480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x172E5310)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x172E5490)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x172E54B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x172E54D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x172E54F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x172E5320)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x172E54A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x172E54C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x172E54E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x172E5500)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x172E4540)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContainerContract_TypeDefinitionIndex = 9633;

	class JsonContainerContract : public ::Newtonsoft::Json::Serialization::JsonContract
	{
	public:
		::Newtonsoft::Json::Serialization::JsonContract* _finalItemContract; // 0x80
		::Newtonsoft::Json::Serialization::JsonContract* _itemContract; // 0x88
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0x90
		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> _ItemReferenceLoopHandling_k__BackingField; // 0x98
		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> _ItemTypeNameHandling_k__BackingField; // 0xA0
		::System::Nullable_1<::System::Boolean> _ItemIsReference_k__BackingField; // 0xA8

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT__CTOR_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_ItemContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET))(this);
		}

		::System::Void set_ItemContract(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_FinalItemContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET))(this);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_ItemIsReference()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> get_ItemReferenceLoopHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> get_ItemTypeNameHandling()
		{
			return ((::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, a1);
		}
	};
}
