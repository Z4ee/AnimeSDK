#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/ShowIfAttribute.h"
#include "unitysdk/RootMotion/ShowIfMode.h"

namespace System { class Object; }
namespace System { class String; }

#define ROOTMOTION_SHOWRANGEIFATTRIBUTE_GET_MAX_OFFSET UNITYSDK_OFFSET(0x1C1EEFF0)
#define ROOTMOTION_SHOWRANGEIFATTRIBUTE_GET_MIN_OFFSET UNITYSDK_OFFSET(0x1C1EEFD0)
#define ROOTMOTION_SHOWRANGEIFATTRIBUTE_SET_MAX_OFFSET UNITYSDK_OFFSET(0x1C1EF000)
#define ROOTMOTION_SHOWRANGEIFATTRIBUTE_SET_MIN_OFFSET UNITYSDK_OFFSET(0x1C1EEFE0)
#define ROOTMOTION_SHOWRANGEIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EF010)

namespace RootMotion
{
	inline static constexpr unsigned int ShowRangeIfAttribute_TypeDefinitionIndex = 36538;

	class ShowRangeIfAttribute : public ::RootMotion::ShowIfAttribute
	{
	public:
		::System::Single _min_k__BackingField; // 0x30
		::System::Single _max_k__BackingField; // 0x34

		::System::Void _ctor(::System::Single min, ::System::Single max, ::System::String* propertyName, ::System::Object* propertyValue, ::System::Object* otherPropertyValue, ::System::Boolean indent, ::RootMotion::ShowIfMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::Object*, ::System::Object*, ::System::Boolean, ::RootMotion::ShowIfMode))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWRANGEIFATTRIBUTE__CTOR_OFFSET))(this, min, max, propertyName, propertyValue, otherPropertyValue, indent, mode);
		}

		::System::Single get_min()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWRANGEIFATTRIBUTE_GET_MIN_OFFSET))(this);
		}

		::System::Void set_min(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWRANGEIFATTRIBUTE_SET_MIN_OFFSET))(this, value);
		}

		::System::Single get_max()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWRANGEIFATTRIBUTE_GET_MAX_OFFSET))(this);
		}

		::System::Void set_max(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_SHOWRANGEIFATTRIBUTE_SET_MAX_OFFSET))(this, value);
		}
	};
}
