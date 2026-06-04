#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveEvent.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveHideLineTraceReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
#include "unitysdk/Struct_2_79D6FFCF06FD9EAB.h"
#include "unitysdk/Struct_2_B2BDC8349DE264DC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_CBD04A4E767294BB_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E27B70)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_6E4A5372E1111FEB_OFFSET UNITYSDK_OFFSET(0x18E27C60)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18E27DC0)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_E47EF0C44F14B5EC_OFFSET UNITYSDK_OFFSET(0x18E27E80)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x18E27F50)
#define CLASS_1_CBD04A4E767294BB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18E27AC0)
#define CLASS_1_CBD04A4E767294BB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18E27B10)
#define CLASS_1_CBD04A4E767294BB__CTOR_OFFSET UNITYSDK_OFFSET(0x18E27FF0)

inline static constexpr unsigned int Class_1_CBD04A4E767294BB_TypeDefinitionIndex = 40141;

class Class_1_CBD04A4E767294BB : public ::System::Object
{
public:
	::Struct_2_B2BDC8349DE264DC Field_1_0; // 0x10
	::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::SplineMoveEvent>* Field_1_1; // 0x30
	::System::String* Field_1_2; // 0x38
	::RPG::Client::LittleGame::FiveDim::SplineMoveState Field_1_3; // 0x40
	::System::Boolean Field_1_4; // 0x44
	::Struct_2_79D6FFCF06FD9EAB Field_1_5; // 0x48
	::UnityEngine::Vector3 Field_1_6; // 0x68
	::System::Single Field_1_7; // 0x74
	::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason Field_1_8; // 0x78
	::System::Single Field_1_9; // 0x7C
	::RPG::GameCore::FiveDimSplineMoveDirection Field_1_10; // 0x80
	::RPG::Client::LittleGame::FiveDim::SplineMoveState Field_1_11; // 0x84
	::System::Single Field_1_12; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_6E4A5372E1111FEB(::RPG::Client::LittleGame::FiveDim::SplineMoveState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SplineMoveState))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_METHOD_1_6E4A5372E1111FEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_E47EF0C44F14B5EC(::RPG::GameCore::FiveDimSplineMoveDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSplineMoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_METHOD_1_E47EF0C44F14B5EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBD04A4E767294BB_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}
};
