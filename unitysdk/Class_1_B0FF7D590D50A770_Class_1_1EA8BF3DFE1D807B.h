#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { class Action; }

#define CLASS_1_B0FF7D590D50A770_CLASS_1_1EA8BF3DFE1D807B_METHOD_1_4F3C1657541064FC_OFFSET UNITYSDK_OFFSET(0x1645C9B0)
#define CLASS_1_B0FF7D590D50A770_CLASS_1_1EA8BF3DFE1D807B__CTOR_OFFSET UNITYSDK_OFFSET(0x1645C9A0)

inline static constexpr unsigned int Class_1_B0FF7D590D50A770_Class_1_1EA8BF3DFE1D807B_TypeDefinitionIndex = 50052;

class Class_1_B0FF7D590D50A770_Class_1_1EA8BF3DFE1D807B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_CLASS_1_1EA8BF3DFE1D807B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4F3C1657541064FC(::MoleMole::Config::EffectLODDataConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectLODDataConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B0FF7D590D50A770_CLASS_1_1EA8BF3DFE1D807B_METHOD_1_4F3C1657541064FC_OFFSET))(this, a1);
	}
};
