#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2F6EB39C30A20E29_METHOD_1_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0xA7A4830)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_40F794ADA44A6657_OFFSET UNITYSDK_OFFSET(0xA7A4AD0)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_4E051ECBD6DF0052_OFFSET UNITYSDK_OFFSET(0xA7A48C0)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_5F960E1691DEDDF3_OFFSET UNITYSDK_OFFSET(0xA7A49E0)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_668B61169B7D7C80_OFFSET UNITYSDK_OFFSET(0xA7A4B70)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_7D7D87989A4C8F82_OFFSET UNITYSDK_OFFSET(0xA7A4BD0)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_945CD8129EEF238B_OFFSET UNITYSDK_OFFSET(0xA7A4C90)

inline static constexpr unsigned int Class_1_2F6EB39C30A20E29_TypeDefinitionIndex = 43953;

class Class_1_2F6EB39C30A20E29 : public ::System::Object
{
public:
	static ::System::UInt32 Method_1_24BDA33538434DCF()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_24BDA33538434DCF_OFFSET))();
	}

	static ::System::Boolean Method_1_4E051ECBD6DF0052(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_4E051ECBD6DF0052_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5F960E1691DEDDF3(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_5F960E1691DEDDF3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SubMissionState Method_1_40F794ADA44A6657(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_40F794ADA44A6657_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_668B61169B7D7C80(::RPG::Client::MapDef* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_668B61169B7D7C80_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* Method_1_7D7D87989A4C8F82()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_7D7D87989A4C8F82_OFFSET))();
	}

	static ::RPG::GameCore::SubMissionInfoConfig* Method_1_945CD8129EEF238B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_945CD8129EEF238B_OFFSET))(a1);
	}
};
