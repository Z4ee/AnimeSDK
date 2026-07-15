#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2F6EB39C30A20E29_METHOD_1_40F794ADA44A6657_OFFSET UNITYSDK_OFFSET(0x17DC0C10)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_5F960E1691DEDDF3_OFFSET UNITYSDK_OFFSET(0x17DC0B20)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_7D7D87989A4C8F82_OFFSET UNITYSDK_OFFSET(0x17DC0D10)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_A4E7C37E90F939D1_OFFSET UNITYSDK_OFFSET(0x17DC0A80)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_A9B067B7C7C65FF8_OFFSET UNITYSDK_OFFSET(0x17DC0DD0)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_D09B023A947EBBC9_OFFSET UNITYSDK_OFFSET(0x17DC09F0)
#define CLASS_1_2F6EB39C30A20E29_METHOD_1_FBCC3A46483BD8B9_OFFSET UNITYSDK_OFFSET(0x17DC0CB0)

inline static constexpr unsigned int Class_1_2F6EB39C30A20E29_TypeDefinitionIndex = 45371;

class Class_1_2F6EB39C30A20E29 : public ::System::Object
{
public:
	static ::System::UInt32 Method_1_D09B023A947EBBC9()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_D09B023A947EBBC9_OFFSET))();
	}

	static ::System::Boolean Method_1_A4E7C37E90F939D1(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_A4E7C37E90F939D1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5F960E1691DEDDF3(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_5F960E1691DEDDF3_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SubMissionState Method_1_40F794ADA44A6657(::System::UInt32 a1, ::RPG::Client::MapDef* a2)
	{
		return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_40F794ADA44A6657_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_FBCC3A46483BD8B9(::RPG::Client::MapDef* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_FBCC3A46483BD8B9_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* Method_1_7D7D87989A4C8F82()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_7D7D87989A4C8F82_OFFSET))();
	}

	static ::RPG::GameCore::SubMissionInfoConfig* Method_1_A9B067B7C7C65FF8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F6EB39C30A20E29_METHOD_1_A9B067B7C7C65FF8_OFFSET))(a1);
	}
};
