#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }

#define CLASS_1_45E6CA349D5D1707_METHOD_1_C697C26278BBC189_OFFSET UNITYSDK_OFFSET(0xBFACDF0)
#define CLASS_1_45E6CA349D5D1707__CTOR_OFFSET UNITYSDK_OFFSET(0xBFAD890)

inline static constexpr unsigned int Class_1_45E6CA349D5D1707_TypeDefinitionIndex = 60894;

class Class_1_45E6CA349D5D1707 : public ::System::Object
{
public:
	::System::String* BAHLDFMIJFG; // 0x10
	::System::String* IFCEOHEAIGI; // 0x18
	::UnityEngine::Quaternion POHDKIIOAJB; // 0x20
	::UnityEngine::Vector3 LBJPPLGGBNN; // 0x30
	::System::UInt32 MAFCGLEKCLI; // 0x3C
	::System::Boolean OHLOEABKKME; // 0x40
	::System::Boolean KCHFENMKNDO; // 0x41
	::System::UInt32 IHBCONHLJGP; // 0x44
	::System::UInt32 MCEKAIHAODE; // 0x48
	::System::UInt32 MHLFGAGGIDA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E6CA349D5D1707__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C697C26278BBC189(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_45E6CA349D5D1707_METHOD_1_C697C26278BBC189_OFFSET))(this, a1);
	}
};
