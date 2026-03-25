#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveEvent.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveHideLineTraceReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
#include "unitysdk/Struct_2_79D6FFCF06FD9EAB.h"
#include "unitysdk/Struct_2_F8B6C42A2650A8EC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_79CBDAE7F30B6481_CLEAR_OFFSET UNITYSDK_OFFSET(0x169E89F0)
#define CLASS_1_79CBDAE7F30B6481_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x169E8C70)
#define CLASS_1_79CBDAE7F30B6481_METHOD_1_70C856AE64234BE0_OFFSET UNITYSDK_OFFSET(0x169E8B80)
#define CLASS_1_79CBDAE7F30B6481_METHOD_1_9CD5F2908E8EDDEF_OFFSET UNITYSDK_OFFSET(0x169E8BF0)
#define CLASS_1_79CBDAE7F30B6481_METHOD_1_CB9CAB8F1F8E61D5_OFFSET UNITYSDK_OFFSET(0x169E8AD0)
#define CLASS_1_79CBDAE7F30B6481_ONALLOC_OFFSET UNITYSDK_OFFSET(0x169E8940)
#define CLASS_1_79CBDAE7F30B6481_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x169E8990)
#define CLASS_1_79CBDAE7F30B6481__CTOR_OFFSET UNITYSDK_OFFSET(0x169E8D00)

inline static constexpr unsigned int Class_1_79CBDAE7F30B6481_TypeDefinitionIndex = 33570;

class Class_1_79CBDAE7F30B6481 : public ::System::Object
{
public:
	::Struct_2_F8B6C42A2650A8EC Field_1_2; // 0x10
	::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::SplineMoveEvent>* Field_1_8; // 0x30
	::System::String* Field_1_10; // 0x38
	::UnityEngine::Vector3 Field_1_11; // 0x40
	::System::Single Field_1_12; // 0x4C
	::Struct_2_79D6FFCF06FD9EAB Field_1_3; // 0x50
	::RPG::Client::LittleGame::FiveDim::SplineMoveState Field_1_1; // 0x70
	::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason Field_1_9; // 0x74
	::RPG::Client::LittleGame::FiveDim::SplineMoveState Field_1_7; // 0x78
	::System::Single Field_1_4; // 0x7C
	::RPG::GameCore::FiveDimSplineMoveDirection Field_1_6; // 0x80
	::System::Single Field_1_5; // 0x84
	::System::Boolean Field_1_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CB9CAB8F1F8E61D5(::RPG::Client::LittleGame::FiveDim::SplineMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SplineMoveState))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_METHOD_1_CB9CAB8F1F8E61D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_70C856AE64234BE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_METHOD_1_70C856AE64234BE0_OFFSET))(this);
	}

	::System::Void Method_1_9CD5F2908E8EDDEF(::RPG::GameCore::FiveDimSplineMoveDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSplineMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_METHOD_1_9CD5F2908E8EDDEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79CBDAE7F30B6481_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}
};
