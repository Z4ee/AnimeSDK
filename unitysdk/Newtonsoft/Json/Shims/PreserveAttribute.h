#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_SHIMS_PRESERVEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17309FA0)

namespace Newtonsoft::Json::Shims
{
	inline static constexpr unsigned int PreserveAttribute_TypeDefinitionIndex = 9629;

	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SHIMS_PRESERVEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
