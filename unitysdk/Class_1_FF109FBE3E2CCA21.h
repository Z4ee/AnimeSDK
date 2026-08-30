#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

#define CLASS_1_FF109FBE3E2CCA21_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1618A190)
#define CLASS_1_FF109FBE3E2CCA21_METHOD_1_8BCD1D0CAC952C62_OFFSET UNITYSDK_OFFSET(0x1618A0E0)
#define CLASS_1_FF109FBE3E2CCA21__CTOR_OFFSET UNITYSDK_OFFSET(0x1618A180)

inline static constexpr unsigned int Class_1_FF109FBE3E2CCA21_TypeDefinitionIndex = 68231;

class Class_1_FF109FBE3E2CCA21 : public ::System::Object
{
public:
	::RPG::Client::NotifyHandler* MBOEDFCNCJF; // 0x10
	::RPG::Client::NotifyType GMCNLFICNOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF109FBE3E2CCA21__CTOR_OFFSET))(this);
	}

	static ::Class_1_FF109FBE3E2CCA21* Method_1_8BCD1D0CAC952C62(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
	{
		return ((::Class_1_FF109FBE3E2CCA21*(*)(::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + CLASS_1_FF109FBE3E2CCA21_METHOD_1_8BCD1D0CAC952C62_OFFSET))(a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF109FBE3E2CCA21_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
