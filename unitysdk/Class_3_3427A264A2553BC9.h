#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define CLASS_3_3427A264A2553BC9_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x137FF270)
#define CLASS_3_3427A264A2553BC9_GET_URL_OFFSET UNITYSDK_OFFSET(0x137FF250)
#define CLASS_3_3427A264A2553BC9_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x137FF280)
#define CLASS_3_3427A264A2553BC9_SET_URL_OFFSET UNITYSDK_OFFSET(0x137FF260)
#define CLASS_3_3427A264A2553BC9__CTOR_OFFSET UNITYSDK_OFFSET(0x137FF290)

inline static constexpr unsigned int Class_3_3427A264A2553BC9_TypeDefinitionIndex = 46168;

class Class_3_3427A264A2553BC9 : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* _url_k__BackingField; // 0x10
	::System::Boolean _isDirty_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3427A264A2553BC9__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_url()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3427A264A2553BC9_GET_URL_OFFSET))(this);
	}

	::System::Void set_url(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3427A264A2553BC9_SET_URL_OFFSET))(this, a1);
	}

	::System::Boolean get_isDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3427A264A2553BC9_GET_ISDIRTY_OFFSET))(this);
	}

	::System::Void set_isDirty(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3427A264A2553BC9_SET_ISDIRTY_OFFSET))(this, a1);
	}
};
