#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/EB51RacingResultState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_41DC55EACF71282F__CTOR_OFFSET UNITYSDK_OFFSET(0xB694010)

inline static constexpr unsigned int Class_1_41DC55EACF71282F_TypeDefinitionIndex = 82056;

class Class_1_41DC55EACF71282F : public ::System::Object
{
public:
	::System::String* ACFGMFBOFJB; // 0x10
	::System::String* DOBAKDMANPL; // 0x18
	::System::String* JIKBDNPAIFO; // 0x20
	::System::String* ABOAHHIAIMC; // 0x28
	::RPG::Client::TextID POFLNFDFEKB; // 0x30
	::System::Int32 GBJLLAJJEOL; // 0x40
	::RPG::Client::B51Racing::EB51RacingResultState JPLBGHENAPG; // 0x44
	::System::Boolean DHHGLHOOCMA; // 0x48
	::System::Boolean ODLCDAGDNDE; // 0x49
	::System::Boolean ONEPBLBGLKO; // 0x4A
	::System::Boolean NKPLIFKDJEO; // 0x4B
	::System::Boolean HFICBGPNKKP; // 0x4C
	::System::Boolean PBFLDDKDJNB; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41DC55EACF71282F__CTOR_OFFSET))(this);
	}
};
