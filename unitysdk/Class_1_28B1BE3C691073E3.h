#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"

class Class_1_275515F210334D06;
class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_28B1BE3C691073E3_CLEAR_OFFSET UNITYSDK_OFFSET(0x13AAB060)
#define CLASS_1_28B1BE3C691073E3_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x13AAB0F0)
#define CLASS_1_28B1BE3C691073E3_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x13AAB0B0)
#define CLASS_1_28B1BE3C691073E3_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x13AAB0D0)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_0E36822E95D9F486_OFFSET UNITYSDK_OFFSET(0x13AAAC10)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x13AAAA40)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_C304F8EC40C05A9C_OFFSET UNITYSDK_OFFSET(0x13AAA9E0)
#define CLASS_1_28B1BE3C691073E3_ONALLOC_OFFSET UNITYSDK_OFFSET(0x13AAAE00)
#define CLASS_1_28B1BE3C691073E3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x13AAAEA0)
#define CLASS_1_28B1BE3C691073E3_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x13AAB100)
#define CLASS_1_28B1BE3C691073E3_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x13AAB0C0)
#define CLASS_1_28B1BE3C691073E3_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x13AAB0E0)
#define CLASS_1_28B1BE3C691073E3__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAB110)

inline static constexpr unsigned int Class_1_28B1BE3C691073E3_TypeDefinitionIndex = 71462;

class Class_1_28B1BE3C691073E3 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B* _Contexts_k__BackingField; // 0x10
	::Class_1_275515F210334D06* Field_1_1; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState, ::Class_1_275515F210334D06*>* Field_1_2; // 0x20
	::Class_3_1E4F9B0ED3BF21DE* _Services_k__BackingField; // 0x28
	::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState _CurrentState_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C304F8EC40C05A9C(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_1_B4357A1C72BABC6B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_C304F8EC40C05A9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_0E36822E95D9F486(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_0E36822E95D9F486_OFFSET))(this, a1);
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

	::System::Void set_CurrentState(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_SET_CURRENTSTATE_OFFSET))(this, a1);
	}

	::Class_3_1E4F9B0ED3BF21DE* get_Services()
	{
		return ((::Class_3_1E4F9B0ED3BF21DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_GET_SERVICES_OFFSET))(this);
	}

	::System::Void set_Services(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_SET_SERVICES_OFFSET))(this, a1);
	}

	::Class_1_B4357A1C72BABC6B* get_Contexts()
	{
		return ((::Class_1_B4357A1C72BABC6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_GET_CONTEXTS_OFFSET))(this);
	}

	::System::Void set_Contexts(::Class_1_B4357A1C72BABC6B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_SET_CONTEXTS_OFFSET))(this, a1);
	}
};
