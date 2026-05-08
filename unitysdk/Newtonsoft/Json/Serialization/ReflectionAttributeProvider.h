#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Attribute; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1C4A3E70)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C4A3E00)
#define NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3D60)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ReflectionAttributeProvider_TypeDefinitionIndex = 7021;

	class ReflectionAttributeProvider : public ::System::Object
	{
	public:
		::System::Object* _attributeProvider; // 0x10

		::System::Void _ctor(::System::Object* attributeProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER__CTOR_OFFSET))(this, attributeProvider);
		}

		::System::Collections::Generic::IList_1<::System::Attribute*>* GetAttributes(::System::Boolean inherit)
		{
			return ((::System::Collections::Generic::IList_1<::System::Attribute*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_OFFSET))(this, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Attribute*>* GetAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Collections::Generic::IList_1<::System::Attribute*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_REFLECTIONATTRIBUTEPROVIDER_GETATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}
	};
}
