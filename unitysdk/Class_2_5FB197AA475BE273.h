#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define CLASS_2_5FB197AA475BE273_GET_ALIAS_OFFSET UNITYSDK_OFFSET(0xD80E6E0)
#define CLASS_2_5FB197AA475BE273_GET_COMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xD80E6F0)
#define CLASS_2_5FB197AA475BE273__CTOR_OFFSET UNITYSDK_OFFSET(0xD80E700)

inline static constexpr unsigned int Class_2_5FB197AA475BE273_TypeDefinitionIndex = 49461;

class Class_2_5FB197AA475BE273 : public ::System::Attribute
{
public:
	::System::String* _Alias_k__BackingField; // 0x10
	::System::Type* _ComponentType_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_5FB197AA475BE273__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Alias()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FB197AA475BE273_GET_ALIAS_OFFSET))(this);
	}

	::System::Type* get_ComponentType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FB197AA475BE273_GET_COMPONENTTYPE_OFFSET))(this);
	}
};
