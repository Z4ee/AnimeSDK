#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CLASS_2_5B9124D8E6FB634C_GET_ACTIONPLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x1E779450)
#define CLASS_2_5B9124D8E6FB634C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E779280)

inline static constexpr unsigned int Class_2_5B9124D8E6FB634C_TypeDefinitionIndex = 42511;

class Class_2_5B9124D8E6FB634C : public ::System::Attribute
{
public:
	::System::Type* _ActionPlayerType_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_2_5B9124D8E6FB634C__CTOR_OFFSET))(this, a1);
	}

	::System::Type* get_ActionPlayerType()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9124D8E6FB634C_GET_ACTIONPLAYERTYPE_OFFSET))(this);
	}
};
