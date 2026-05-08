#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { class Action; }

#define CLASS_1_B0FF7D590D50A770_CLASS_1_F45DD058C16BC479_METHOD_1_12244B2DF9502175_OFFSET UNITYSDK_OFFSET(0x11AFBF70)
#define CLASS_1_B0FF7D590D50A770_CLASS_1_F45DD058C16BC479__CTOR_OFFSET UNITYSDK_OFFSET(0x11AFBF60)

inline static constexpr unsigned int Class_1_B0FF7D590D50A770_Class_1_F45DD058C16BC479_TypeDefinitionIndex = 40629;

class Class_1_B0FF7D590D50A770_Class_1_F45DD058C16BC479 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_CLASS_1_F45DD058C16BC479__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_12244B2DF9502175(::MoleMole::Config::EffectLODDataConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectLODDataConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_CLASS_1_F45DD058C16BC479_METHOD_1_12244B2DF9502175_OFFSET))(this, a1);
	}
};
