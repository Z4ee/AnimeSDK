#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MusicBeatSyncGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EF91D67DDE2EB89E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C14AD50)
#define CLASS_1_EF91D67DDE2EB89E_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1C14AEB0)
#define CLASS_1_EF91D67DDE2EB89E_METHOD_1_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x1C14B010)
#define CLASS_1_EF91D67DDE2EB89E_METHOD_1_FCE42AE3B5155F9B_OFFSET UNITYSDK_OFFSET(0x1C14AF30)
#define CLASS_1_EF91D67DDE2EB89E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C14ADF0)
#define CLASS_1_EF91D67DDE2EB89E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C14AE70)
#define CLASS_1_EF91D67DDE2EB89E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14B2F0)

inline static constexpr unsigned int Class_1_EF91D67DDE2EB89E_TypeDefinitionIndex = 41756;

class Class_1_EF91D67DDE2EB89E : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* GJNGAFMMPLN; // 0x10
	::System::Action_1<::System::Single>* CKOMJEKKNIB; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* DIBHOODKFJN; // 0x20
	::System::Boolean PCKBADNFMNO; // 0x28
	::System::Int32 IMHCADLGBMI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_FCE42AE3B5155F9B(::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E_METHOD_1_FCE42AE3B5155F9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF91D67DDE2EB89E_METHOD_1_E727F9956B5BD78B_OFFSET))(this);
	}
};
