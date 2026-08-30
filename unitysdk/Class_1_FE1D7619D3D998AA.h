#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_FE1D7619D3D998AA_TRIGGER_OFFSET UNITYSDK_OFFSET(0x18E3FE10)
#define CLASS_1_FE1D7619D3D998AA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E3FF60)

inline static constexpr unsigned int Class_1_FE1D7619D3D998AA_TypeDefinitionIndex = 66267;

class Class_1_FE1D7619D3D998AA : public ::System::Object
{
public:
	// static const ::System::String* NNKPLACOBCD; // 0x0
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x10
	::System::UInt32 HKAHFHHICEN; // 0x14
	::System::UInt32 AIKAPJELHNK; // 0x18
	::System::UInt32 IHHNMMBAAGN; // 0x1C

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_FE1D7619D3D998AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE1D7619D3D998AA_TRIGGER_OFFSET))(this);
	}
};
