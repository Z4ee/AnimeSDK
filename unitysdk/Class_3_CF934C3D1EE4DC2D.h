#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

namespace System { class String; }

#define CLASS_3_CF934C3D1EE4DC2D_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x113E7830)
#define CLASS_3_CF934C3D1EE4DC2D_GET_URL_OFFSET UNITYSDK_OFFSET(0x113E7810)
#define CLASS_3_CF934C3D1EE4DC2D_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x113E7840)
#define CLASS_3_CF934C3D1EE4DC2D_SET_URL_OFFSET UNITYSDK_OFFSET(0x113E7820)
#define CLASS_3_CF934C3D1EE4DC2D__CTOR_OFFSET UNITYSDK_OFFSET(0x113E7850)

inline static constexpr unsigned int Class_3_CF934C3D1EE4DC2D_TypeDefinitionIndex = 39676;

class Class_3_CF934C3D1EE4DC2D : public ::UnityEngine::PropertyAttribute
{
public:
	::System::String* _url_k__BackingField; // 0x10
	::System::Boolean _isDirty_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_CF934C3D1EE4DC2D__CTOR_OFFSET))(this, a1);
	}

	::System::String* get_url()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF934C3D1EE4DC2D_GET_URL_OFFSET))(this);
	}

	::System::Void set_url(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_CF934C3D1EE4DC2D_SET_URL_OFFSET))(this, value);
	}

	::System::Boolean get_isDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF934C3D1EE4DC2D_GET_ISDIRTY_OFFSET))(this);
	}

	::System::Void set_isDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CF934C3D1EE4DC2D_SET_ISDIRTY_OFFSET))(this, value);
	}
};
