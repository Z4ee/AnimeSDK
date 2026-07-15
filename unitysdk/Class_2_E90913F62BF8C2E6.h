#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_E90913F62BF8C2E6_GET_FEATURENAME_OFFSET UNITYSDK_OFFSET(0x14BE20F0)
#define CLASS_2_E90913F62BF8C2E6_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x14BE2100)
#define CLASS_2_E90913F62BF8C2E6_SET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x14BE2110)
#define CLASS_2_E90913F62BF8C2E6__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE20E0)

inline static constexpr unsigned int Class_2_E90913F62BF8C2E6_TypeDefinitionIndex = 6691;

class Class_2_E90913F62BF8C2E6 : public ::System::Attribute
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::String* _FeatureName_k__BackingField; // 0x10
	::System::Boolean _IsOptional_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E90913F62BF8C2E6__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_FeatureName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90913F62BF8C2E6_GET_FEATURENAME_OFFSET))(this);
	}

	::System::Boolean get_IsOptional()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E90913F62BF8C2E6_GET_ISOPTIONAL_OFFSET))(this);
	}

	::System::Void set_IsOptional(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E90913F62BF8C2E6_SET_ISOPTIONAL_OFFSET))(this, a1);
	}
};
