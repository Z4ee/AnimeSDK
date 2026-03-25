#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_673;
namespace RPG::Client { class PlanetFesMiniGame; }
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62C26F9109370A5E_METHOD_1_2C5314C131D2A726_OFFSET UNITYSDK_OFFSET(0x8942D80)
#define CLASS_1_62C26F9109370A5E_METHOD_1_CEA57AF42FBB401D_OFFSET UNITYSDK_OFFSET(0x8942A90)
#define CLASS_1_62C26F9109370A5E_METHOD_1_E3876436F11D807C_OFFSET UNITYSDK_OFFSET(0x8942810)
#define CLASS_1_62C26F9109370A5E__CTOR_OFFSET UNITYSDK_OFFSET(0x8942E10)

inline static constexpr unsigned int Class_1_62C26F9109370A5E_TypeDefinitionIndex = 54205;

class Class_1_62C26F9109370A5E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesGameType, ::RPG::Client::PlanetFesMiniGame*>* Method_1_E3876436F11D807C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesGameType, ::RPG::Client::PlanetFesMiniGame*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E_METHOD_1_E3876436F11D807C_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* Method_1_CEA57AF42FBB401D(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E_METHOD_1_CEA57AF42FBB401D_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_673* Method_1_2C5314C131D2A726(::RPG::GameCore::PlanetFesGameType a1)
	{
		return ((::Class_0_16E4307DCC419505_673*(*)(::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E_METHOD_1_2C5314C131D2A726_OFFSET))(a1);
	}
};
