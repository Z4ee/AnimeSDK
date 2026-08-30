#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyDescriptor.h"

namespace System { class Type; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1BEB51F0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JPropertyDescriptor_TypeDefinitionIndex = 9694;

	class JPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor
	{
	public:
		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYDESCRIPTOR_GET_PROPERTYTYPE_OFFSET))(this);
		}
	};
}
