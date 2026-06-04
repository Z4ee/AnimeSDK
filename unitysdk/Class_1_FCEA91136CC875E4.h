#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FCEA91136CC875E4_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x139CF570)
#define CLASS_1_FCEA91136CC875E4_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x139CF590)
#define CLASS_1_FCEA91136CC875E4_INVOKE_OFFSET UNITYSDK_OFFSET(0x139CF5A0)
#define CLASS_1_FCEA91136CC875E4_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x139CF580)
#define CLASS_1_FCEA91136CC875E4__CTOR_OFFSET UNITYSDK_OFFSET(0x139CF560)

inline static constexpr unsigned int Class_1_FCEA91136CC875E4_TypeDefinitionIndex = 68299;

class Class_1_FCEA91136CC875E4 : public ::System::Object
{
public:
	::System::Boolean _Muted_k__BackingField; // 0x10
	::RPG::Client::NotifyType _NotifyType_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_FCEA91136CC875E4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_Muted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEA91136CC875E4_GET_MUTED_OFFSET))(this);
	}

	::System::Void set_Muted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FCEA91136CC875E4_SET_MUTED_OFFSET))(this, a1);
	}

	::RPG::Client::NotifyType get_NotifyType()
	{
		return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCEA91136CC875E4_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void Invoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FCEA91136CC875E4_INVOKE_OFFSET))(this, a1);
	}
};
