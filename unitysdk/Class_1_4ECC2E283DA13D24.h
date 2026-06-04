#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_824;
namespace RPG::Client { class PlanetFesMiniGame; }
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4ECC2E283DA13D24_METHOD_1_2F7B83E444DFAEAF_OFFSET UNITYSDK_OFFSET(0x1390EC90)
#define CLASS_1_4ECC2E283DA13D24_METHOD_1_5713834D8C94B5EF_OFFSET UNITYSDK_OFFSET(0x1390E8B0)
#define CLASS_1_4ECC2E283DA13D24_METHOD_1_E3876436F11D807C_OFFSET UNITYSDK_OFFSET(0x1390E5D0)
#define CLASS_1_4ECC2E283DA13D24__CTOR_OFFSET UNITYSDK_OFFSET(0x1390ED20)

inline static constexpr unsigned int Class_1_4ECC2E283DA13D24_TypeDefinitionIndex = 62292;

class Class_1_4ECC2E283DA13D24 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ECC2E283DA13D24__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesGameType, ::RPG::Client::PlanetFesMiniGame*>* Method_1_E3876436F11D807C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesGameType, ::RPG::Client::PlanetFesMiniGame*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ECC2E283DA13D24_METHOD_1_E3876436F11D807C_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* Method_1_5713834D8C94B5EF(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4ECC2E283DA13D24_METHOD_1_5713834D8C94B5EF_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_824* Method_1_2F7B83E444DFAEAF(::RPG::GameCore::PlanetFesGameType a1)
	{
		return ((::Class_0_16E4307DCC419505_824*(*)(::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + CLASS_1_4ECC2E283DA13D24_METHOD_1_2F7B83E444DFAEAF_OFFSET))(a1);
	}
};
