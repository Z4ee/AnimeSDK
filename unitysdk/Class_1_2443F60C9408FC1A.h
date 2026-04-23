#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NotifyHandler; }

#define CLASS_1_2443F60C9408FC1A_METHOD_1_35791085560E8BAB_OFFSET UNITYSDK_OFFSET(0x119293E0)
#define CLASS_1_2443F60C9408FC1A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11929470)
#define CLASS_1_2443F60C9408FC1A__CTOR_OFFSET UNITYSDK_OFFSET(0x11929460)

inline static constexpr unsigned int Class_1_2443F60C9408FC1A_TypeDefinitionIndex = 62918;

class Class_1_2443F60C9408FC1A : public ::System::Object
{
public:
	::RPG::Client::NotifyHandler* Field_1_1; // 0x10
	::RPG::Client::NotifyType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2443F60C9408FC1A__CTOR_OFFSET))(this);
	}

	static ::Class_1_2443F60C9408FC1A* Method_1_35791085560E8BAB(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
	{
		return ((::Class_1_2443F60C9408FC1A*(*)(::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + CLASS_1_2443F60C9408FC1A_METHOD_1_35791085560E8BAB_OFFSET))(a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2443F60C9408FC1A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
