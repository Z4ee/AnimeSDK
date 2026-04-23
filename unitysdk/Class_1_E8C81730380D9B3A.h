#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E8C81730380D9B3A_GET_MUTED_OFFSET UNITYSDK_OFFSET(0xB48ED40)
#define CLASS_1_E8C81730380D9B3A_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xB48ED60)
#define CLASS_1_E8C81730380D9B3A_INVOKE_OFFSET UNITYSDK_OFFSET(0xB48ED70)
#define CLASS_1_E8C81730380D9B3A_SET_MUTED_OFFSET UNITYSDK_OFFSET(0xB48ED50)
#define CLASS_1_E8C81730380D9B3A__CTOR_OFFSET UNITYSDK_OFFSET(0xB48ED30)

inline static constexpr unsigned int Class_1_E8C81730380D9B3A_TypeDefinitionIndex = 67347;

class Class_1_E8C81730380D9B3A : public ::System::Object
{
public:
	::RPG::Client::NotifyType _NotifyType_k__BackingField; // 0x10
	::System::Boolean _Muted_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_E8C81730380D9B3A__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_Muted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8C81730380D9B3A_GET_MUTED_OFFSET))(this);
	}

	::System::Void set_Muted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E8C81730380D9B3A_SET_MUTED_OFFSET))(this, value);
	}

	::RPG::Client::NotifyType get_NotifyType()
	{
		return ((::RPG::Client::NotifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8C81730380D9B3A_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void Invoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E8C81730380D9B3A_INVOKE_OFFSET))(this, a1);
	}
};
