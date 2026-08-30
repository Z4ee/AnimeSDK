#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_5ABB41FE29707534_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xFA80860)
#define CLASS_1_5ABB41FE29707534_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xFA80870)
#define CLASS_1_5ABB41FE29707534_TRIGGER_OFFSET UNITYSDK_OFFSET(0xFA805D0)
#define CLASS_1_5ABB41FE29707534__CTOR_OFFSET UNITYSDK_OFFSET(0xFA80770)

inline static constexpr unsigned int Class_1_5ABB41FE29707534_TypeDefinitionIndex = 66264;

class Class_1_5ABB41FE29707534 : public ::System::Object
{
public:
	// static const ::System::String* NNKPLACOBCD; // 0x0
	::System::UInt32 IHHNMMBAAGN; // 0x10
	::System::UInt32 HKAHFHHICEN; // 0x14
	::System::UInt32 _BuffID_k__BackingField; // 0x18
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x1C
	::System::UInt32 HAHKHFCGDPI; // 0x20

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534_TRIGGER_OFFSET))(this);
	}

	::System::UInt32 get_BuffID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534_GET_BUFFID_OFFSET))(this);
	}

	::System::Void set_BuffID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5ABB41FE29707534_SET_BUFFID_OFFSET))(this, a1);
	}
};
