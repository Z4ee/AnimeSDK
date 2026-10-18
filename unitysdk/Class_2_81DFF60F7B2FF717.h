#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_81DFF60F7B2FF717_GET_CONSTKEYPREFIX_OFFSET UNITYSDK_OFFSET(0x1CC61250)
#define CLASS_2_81DFF60F7B2FF717_GET_FORCEREFLECTIONMAPPER_OFFSET UNITYSDK_OFFSET(0x1CC61260)
#define CLASS_2_81DFF60F7B2FF717__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC61200)

inline static constexpr unsigned int Class_2_81DFF60F7B2FF717_TypeDefinitionIndex = 43870;

class Class_2_81DFF60F7B2FF717 : public ::System::Attribute
{
public:
	::System::String* _ConstKeyPrefix_k__BackingField; // 0x10
	::System::Boolean _ForceReflectionMapper_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_81DFF60F7B2FF717__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_ConstKeyPrefix()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81DFF60F7B2FF717_GET_CONSTKEYPREFIX_OFFSET))(this);
	}

	::System::Boolean get_ForceReflectionMapper()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81DFF60F7B2FF717_GET_FORCEREFLECTIONMAPPER_OFFSET))(this);
	}
};
