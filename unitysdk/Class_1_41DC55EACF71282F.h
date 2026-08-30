#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_41DC55EACF71282F__CTOR_OFFSET UNITYSDK_OFFSET(0x18E22540)

inline static constexpr unsigned int Class_1_41DC55EACF71282F_TypeDefinitionIndex = 80728;

class Class_1_41DC55EACF71282F : public ::System::Object
{
public:
	::System::String* JIKBDNPAIFO; // 0x10
	::System::String* DOBAKDMANPL; // 0x18
	::System::String* ABOAHHIAIMC; // 0x20
	::System::String* ACFGMFBOFJB; // 0x28
	::System::Boolean DHHGLHOOCMA; // 0x30
	::System::Boolean PBFLDDKDJNB; // 0x31
	::System::Boolean HFICBGPNKKP; // 0x32
	::System::Boolean ONEPBLBGLKO; // 0x33
	::RPG::Client::B51Racing::EB51RacingResultState JPLBGHENAPG; // 0x34
	::System::Boolean ODLCDAGDNDE; // 0x38
	::System::Boolean NKPLIFKDJEO; // 0x39
	::System::Int32 GBJLLAJJEOL; // 0x3C
	::RPG::Client::TextID POFLNFDFEKB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41DC55EACF71282F__CTOR_OFFSET))(this);
	}
};
