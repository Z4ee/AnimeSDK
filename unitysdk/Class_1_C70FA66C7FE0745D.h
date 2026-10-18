#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class ParkourGameTalkEventInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourTalkEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C70FA66C7FE0745D_METHOD_1_2857E587A86D1531_OFFSET UNITYSDK_OFFSET(0xBE46020)
#define CLASS_1_C70FA66C7FE0745D_METHOD_1_2CDB94095CACFE05_OFFSET UNITYSDK_OFFSET(0xBE460E0)
#define CLASS_1_C70FA66C7FE0745D_METHOD_1_42AA9A78CFDCA6A5_OFFSET UNITYSDK_OFFSET(0xBE45B10)
#define CLASS_1_C70FA66C7FE0745D_METHOD_1_7ADE47E2339C1C58_OFFSET UNITYSDK_OFFSET(0xBE45CB0)
#define CLASS_1_C70FA66C7FE0745D_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xBE45B60)
#define CLASS_1_C70FA66C7FE0745D_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xBE46170)
#define CLASS_1_C70FA66C7FE0745D__CTOR_OFFSET UNITYSDK_OFFSET(0xBE46260)

inline static constexpr unsigned int Class_1_C70FA66C7FE0745D_TypeDefinitionIndex = 61851;

class Class_1_C70FA66C7FE0745D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourGameTalkEventInfo*>* MIMGEEGJBOK; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*>* PGNFCGAOBOH; // 0x18
	::RPG::Client::BaseGameFlow* BEGDKHKENMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42AA9A78CFDCA6A5(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D_METHOD_1_42AA9A78CFDCA6A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_7ADE47E2339C1C58(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D_METHOD_1_7ADE47E2339C1C58_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2857E587A86D1531(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D_METHOD_1_2857E587A86D1531_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2CDB94095CACFE05(::System::UInt32 a1, ::RPG::Client::ParkourGame::MonoParkourTalkEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ParkourGame::MonoParkourTalkEvent*))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D_METHOD_1_2CDB94095CACFE05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70FA66C7FE0745D_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
