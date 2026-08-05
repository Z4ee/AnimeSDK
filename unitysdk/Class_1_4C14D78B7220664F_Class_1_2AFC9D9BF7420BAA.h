#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace System { class Action; }

#define CLASS_1_4C14D78B7220664F_CLASS_1_2AFC9D9BF7420BAA_METHOD_1_9B281703E322B3C5_OFFSET UNITYSDK_OFFSET(0x1C128C80)
#define CLASS_1_4C14D78B7220664F_CLASS_1_2AFC9D9BF7420BAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1284E0)

inline static constexpr unsigned int Class_1_4C14D78B7220664F_Class_1_2AFC9D9BF7420BAA_TypeDefinitionIndex = 51702;

class Class_1_4C14D78B7220664F_Class_1_2AFC9D9BF7420BAA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_CLASS_1_2AFC9D9BF7420BAA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B281703E322B3C5(::MoleMole::Config::ConfigSkinMdb* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinMdb*))((::PBYTE)hIl2Cpp + CLASS_1_4C14D78B7220664F_CLASS_1_2AFC9D9BF7420BAA_METHOD_1_9B281703E322B3C5_OFFSET))(this, a1);
	}
};
