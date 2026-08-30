#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6AB058C99D483032_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x1676B680)
#define CLASS_1_6AB058C99D483032_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1676B6A0)
#define CLASS_1_6AB058C99D483032_INVOKE_OFFSET UNITYSDK_OFFSET(0x1676B6B0)
#define CLASS_1_6AB058C99D483032_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x1676B690)
#define CLASS_1_6AB058C99D483032__CTOR_OFFSET UNITYSDK_OFFSET(0x1676B670)

inline static constexpr unsigned int Class_1_6AB058C99D483032_TypeDefinitionIndex = 73046;

class Class_1_6AB058C99D483032 : public ::System::Object
{
public:
	::RPG::Client::NotifyType _NotifyType_k__BackingField; // 0x10
	::System::Boolean _Muted_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_6AB058C99D483032__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_Muted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB058C99D483032_GET_MUTED_OFFSET))(this);
	}

	::System::Void set_Muted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6AB058C99D483032_SET_MUTED_OFFSET))(this, a1);
	}

	::RPG::Client::NotifyType get_NotifyType()
	{
		return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AB058C99D483032_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void Invoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6AB058C99D483032_INVOKE_OFFSET))(this, a1);
	}
};
