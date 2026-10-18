#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }

#define CLASS_1_45E6CA349D5D1707_METHOD_1_C697C26278BBC189_OFFSET UNITYSDK_OFFSET(0xBFB4560)
#define CLASS_1_45E6CA349D5D1707__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB5000)

inline static constexpr unsigned int Class_1_45E6CA349D5D1707_TypeDefinitionIndex = 60894;

class Class_1_45E6CA349D5D1707 : public ::System::Object
{
public:
	::System::String* BAHLDFMIJFG; // 0x10
	::System::String* IFCEOHEAIGI; // 0x18
	::System::UInt32 MAFCGLEKCLI; // 0x20
	::System::UInt32 MCEKAIHAODE; // 0x24
	::System::Boolean OHLOEABKKME; // 0x28
	::System::Boolean KCHFENMKNDO; // 0x29
	::System::UInt32 MHLFGAGGIDA; // 0x2C
	::System::UInt32 IHBCONHLJGP; // 0x30
	::UnityEngine::Vector3 LBJPPLGGBNN; // 0x34
	::UnityEngine::Quaternion POHDKIIOAJB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45E6CA349D5D1707__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C697C26278BBC189(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_45E6CA349D5D1707_METHOD_1_C697C26278BBC189_OFFSET))(this, a1);
	}
};
