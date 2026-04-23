#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MusicBeatSyncGroup.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1906F7D569574D54_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F4DD40)
#define CLASS_1_1906F7D569574D54_METHOD_1_1E3B200FE62F7C8E_OFFSET UNITYSDK_OFFSET(0x17F4DEA0)
#define CLASS_1_1906F7D569574D54_METHOD_1_4C409DF5E54C7553_OFFSET UNITYSDK_OFFSET(0x17F4E010)
#define CLASS_1_1906F7D569574D54_METHOD_1_FCE42AE3B5155F9B_OFFSET UNITYSDK_OFFSET(0x17F4DF20)
#define CLASS_1_1906F7D569574D54_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F4DDE0)
#define CLASS_1_1906F7D569574D54_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F4DE60)
#define CLASS_1_1906F7D569574D54__CTOR_OFFSET UNITYSDK_OFFSET(0x17F4E2F0)

inline static constexpr unsigned int Class_1_1906F7D569574D54_TypeDefinitionIndex = 39220;

class Class_1_1906F7D569574D54 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* Field_1_3; // 0x10
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup, ::System::Int32>* Field_1_2; // 0x18
	::System::Action_1<::System::Single>* Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_1E3B200FE62F7C8E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54_METHOD_1_1E3B200FE62F7C8E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_FCE42AE3B5155F9B(::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MusicBeatSyncGroup))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54_METHOD_1_FCE42AE3B5155F9B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C409DF5E54C7553()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1906F7D569574D54_METHOD_1_4C409DF5E54C7553_OFFSET))(this);
	}
};
