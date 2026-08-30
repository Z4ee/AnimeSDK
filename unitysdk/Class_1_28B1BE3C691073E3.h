#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameCollectCoinState.h"
#include "unitysdk/System/Object.h"

class Class_1_275515F210334D06_1;
class Class_1_B4357A1C72BABC6B;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_28B1BE3C691073E3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8D0A70)
#define CLASS_1_28B1BE3C691073E3_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A8D0B00)
#define CLASS_1_28B1BE3C691073E3_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1A8D0AC0)
#define CLASS_1_28B1BE3C691073E3_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1A8D0AE0)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_2EC3A49691A7B294_OFFSET UNITYSDK_OFFSET(0x1A8D0550)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1A8D02B0)
#define CLASS_1_28B1BE3C691073E3_METHOD_1_C304F8EC40C05A9C_OFFSET UNITYSDK_OFFSET(0x1A8D0250)
#define CLASS_1_28B1BE3C691073E3_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A8D0810)
#define CLASS_1_28B1BE3C691073E3_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A8D08B0)
#define CLASS_1_28B1BE3C691073E3_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1A8D0B10)
#define CLASS_1_28B1BE3C691073E3_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1A8D0AD0)
#define CLASS_1_28B1BE3C691073E3_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1A8D0AF0)
#define CLASS_1_28B1BE3C691073E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D0B20)

inline static constexpr unsigned int Class_1_28B1BE3C691073E3_TypeDefinitionIndex = 76461;

class Class_1_28B1BE3C691073E3 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState, ::Class_1_275515F210334D06_1*>* GDEEJGLLLHA; // 0x10
	::Class_1_275515F210334D06_1* OCJIOHEOJKA; // 0x18
	::Class_1_B4357A1C72BABC6B* _Contexts_k__BackingField; // 0x20
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

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_2EC3A49691A7B294(::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameCollectCoinState))((::PBYTE)hIl2Cpp + CLASS_1_28B1BE3C691073E3_METHOD_1_2EC3A49691A7B294_OFFSET))(this, a1);
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
