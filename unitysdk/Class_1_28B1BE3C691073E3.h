#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_1_275515F210334D06;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_28B1BE3C691073E3_CLEAR_OFFSET UNITYSDK_OFFSET(0xA52E380)
#define CLASS_1_28B1BE3C691073E3_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0xA52E410)
#define CLASS_1_28B1BE3C691073E3_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA52E3D0)
#define CLASS_1_28B1BE3C691073E3_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xA52E3F0)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_0F05647B327B5F21_OFFSET UNITYSDK_OFFSET(0xA52DF80)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xA52DE00)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_C304F8EC40C05A9C_OFFSET UNITYSDK_OFFSET(0xA52DDA0)
#define CLASS_1_28B1BE3C691073E3_ONALLOC_OFFSET UNITYSDK_OFFSET(0xA52E120)
#define CLASS_1_28B1BE3C691073E3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA52E1C0)
#define CLASS_1_28B1BE3C691073E3_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0xA52E420)
#define CLASS_1_28B1BE3C691073E3_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA52E3E0)
#define CLASS_1_28B1BE3C691073E3_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xA52E400)
#define CLASS_1_28B1BE3C691073E3__CTOR_OFFSET UNITYSDK_OFFSET(0xA52E430)

inline static constexpr unsigned int Class_1_28B1BE3C691073E3_TypeDefinitionIndex = 70643;

class Class_1_28B1BE3C691073E3 : public ::System::Object
{
public:
	::Class_1_275515F210334D06* Field_1_3; // 0x10
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState, ::Class_1_275515F210334D06*>* Field_1_4; // 0x18
	::Class_1_24C2E7EF22229C6A* _Contexts_k__BackingField; // 0x20
	::Class_3_1A92845FAFA5EC77* _Services_k__BackingField; // 0x28
	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _CurrentState_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C304F8EC40C05A9C(::Class_3_1A92845FAFA5EC77* a1, ::Class_1_24C2E7EF22229C6A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_C304F8EC40C05A9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_1_0F05647B327B5F21(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_0F05647B327B5F21_OFFSET))(this, a1);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_CLEAR_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState get_CurrentState()
	{
		return ((::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_GET_CURRENTSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_SET_CURRENTSTATE_OFFSET))(this, value);
	}

	::Class_3_1A92845FAFA5EC77* get_Services()
	{
		return ((::Class_3_1A92845FAFA5EC77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_3_1A92845FAFA5EC77* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_SET_SERVICES_OFFSET))(this, value);
	}

	::Class_1_24C2E7EF22229C6A* get_Contexts()
	{
		return ((::Class_1_24C2E7EF22229C6A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Class_1_24C2E7EF22229C6A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_SET_CONTEXTS_OFFSET))(this, value);
	}
};
