#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F5B157998DD7E03A_METHOD_1_1ED8EC56477F9549_OFFSET UNITYSDK_OFFSET(0xC446010)
#define CLASS_1_F5B157998DD7E03A_METHOD_1_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0xC445F80)
#define CLASS_1_F5B157998DD7E03A_METHOD_1_3FB4E452DA3F30CE_OFFSET UNITYSDK_OFFSET(0xC446220)
#define CLASS_1_F5B157998DD7E03A_METHOD_1_5F960E1691DEDDF3_OFFSET UNITYSDK_OFFSET(0xC446130)
#define CLASS_1_F5B157998DD7E03A_METHOD_1_7D7D87989A4C8F82_OFFSET UNITYSDK_OFFSET(0xC446320)
#define CLASS_1_F5B157998DD7E03A_METHOD_1_A9B067B7C7C65FF8_OFFSET UNITYSDK_OFFSET(0xC4463E0)
#define CLASS_1_F5B157998DD7E03A_METHOD_1_FBCC3A46483BD8B9_OFFSET UNITYSDK_OFFSET(0xC4462C0)

inline static constexpr unsigned int Class_1_F5B157998DD7E03A_TypeDefinitionIndex = 44499;

class Class_1_F5B157998DD7E03A : public ::System::Object
{
public:
	static ::System::UInt32 Method_1_24BDA33538434DCF()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_24BDA33538434DCF_OFFSET))();
	}

	static ::System::Boolean Method_1_1ED8EC56477F9549(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_1ED8EC56477F9549_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5F960E1691DEDDF3(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_5F960E1691DEDDF3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SubMissionState Method_1_3FB4E452DA3F30CE(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_3FB4E452DA3F30CE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_FBCC3A46483BD8B9(::RPG::Client::MapDef* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_FBCC3A46483BD8B9_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* Method_1_7D7D87989A4C8F82()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_7D7D87989A4C8F82_OFFSET))();
	}

	static ::RPG::GameCore::SubMissionInfoConfig* Method_1_A9B067B7C7C65FF8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5B157998DD7E03A_METHOD_1_A9B067B7C7C65FF8_OFFSET))(a1);
	}
};
