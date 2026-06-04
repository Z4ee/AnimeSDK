#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_FE1D7619D3D998AA_TRIGGER_OFFSET UNITYSDK_OFFSET(0x14215770)
#define CLASS_1_FE1D7619D3D998AA__CTOR_OFFSET UNITYSDK_OFFSET(0x142158C0)

inline static constexpr unsigned int Class_1_FE1D7619D3D998AA_TypeDefinitionIndex = 61917;

class Class_1_FE1D7619D3D998AA : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::UInt32 Field_1_1; // 0x10
	::RPG::Client::MonopolyEffectShowType Field_1_2; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_FE1D7619D3D998AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE1D7619D3D998AA_TRIGGER_OFFSET))(this);
	}
};
