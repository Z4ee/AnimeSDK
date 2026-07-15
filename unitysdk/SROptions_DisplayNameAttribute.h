#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DisplayNameAttribute.h"

namespace System { class String; }

#define SROPTIONS_DISPLAYNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19282380)

inline static constexpr unsigned int SROptions_DisplayNameAttribute_TypeDefinitionIndex = 42602;

class SROptions_DisplayNameAttribute : public ::System::ComponentModel::DisplayNameAttribute
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SROPTIONS_DISPLAYNAMEATTRIBUTE__CTOR_OFFSET))(this, a1);
	}
};
