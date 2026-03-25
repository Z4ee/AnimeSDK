#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyChangedEventArgs.h"

namespace System { class String; }

#define CLASS_3_EA1C7084CC73F614_GET_ROLEUID_OFFSET UNITYSDK_OFFSET(0x11811370)
#define CLASS_3_EA1C7084CC73F614__CTOR_OFFSET UNITYSDK_OFFSET(0x11811330)

inline static constexpr unsigned int Class_3_EA1C7084CC73F614_TypeDefinitionIndex = 52456;

class Class_3_EA1C7084CC73F614 : public ::System::ComponentModel::PropertyChangedEventArgs
{
public:
	::System::UInt32 _RoleUID_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_EA1C7084CC73F614__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_RoleUID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA1C7084CC73F614_GET_ROLEUID_OFFSET))(this);
	}
};
