#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_GET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0x19759190)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x197596B0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_SET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0x19759710)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19759720)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_Property_TypeDefinitionIndex = 70208;

	class MaterialPropertiesCollection_Property : public ::System::Object
	{
	public:
		::System::String* propertyName; // 0x10
		::System::Int32 _propertyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_propertyID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_GET_PROPERTYID_OFFSET))(this);
		}

		::System::Void set_propertyID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_SET_PROPERTYID_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_METHOD_1_9681042564541CD6_OFFSET))(this);
		}
	};
}
