#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveEvent.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveHideLineTraceReason.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SplineMoveState.h"
#include "unitysdk/RPG/GameCore/FiveDimSplineMoveDirection.h"
#include "unitysdk/Struct_2_79D6FFCF06FD9EAB.h"
#include "unitysdk/Struct_2_9B8E093CD6AB8AC9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_CBD04A4E767294BB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C5FA110)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_6E4A5372E1111FEB_OFFSET UNITYSDK_OFFSET(0x1C5FA210)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1C5FA370)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_E47EF0C44F14B5EC_OFFSET UNITYSDK_OFFSET(0x1C5FA430)
#define CLASS_1_CBD04A4E767294BB_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x1C5FA4F0)
#define CLASS_1_CBD04A4E767294BB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C5FA050)
#define CLASS_1_CBD04A4E767294BB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C5FA0B0)
#define CLASS_1_CBD04A4E767294BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA590)

inline static constexpr unsigned int Class_1_CBD04A4E767294BB_TypeDefinitionIndex = 41914;

class Class_1_CBD04A4E767294BB : public ::System::Object
{
public:
	::Struct_2_9B8E093CD6AB8AC9 MMNBDLPBJAG; // 0x10
	::RPG::PoolList_1<::RPG::Client::LittleGame::FiveDim::SplineMoveEvent>* BBAAGLNGLAB; // 0x38
	::System::String* ODMGJKCAICF; // 0x40
	::RPG::Client::LittleGame::FiveDim::SplineMoveState MEPFOEEGBEA; // 0x48
	::System::Boolean NOOJOFHAIAA; // 0x4C
	::UnityEngine::Vector3 IPECNJCOCLC; // 0x50
	::RPG::GameCore::FiveDimSplineMoveDirection LJDHGFECMHJ; // 0x5C
	::RPG::Client::LittleGame::FiveDim::SplineMoveState EOCKCIGOFMG; // 0x60
	::System::Single LBHOAPLLECN; // 0x64
	::RPG::Client::LittleGame::FiveDim::SplineMoveHideLineTraceReason BPJGFIHELIF; // 0x68
	::System::Single HLIBNBMOCIC; // 0x6C
	::System::Single JBCFPAEELBL; // 0x70
	::System::Single JEJEAABCFLB; // 0x74
	::Struct_2_79D6FFCF06FD9EAB KOLJBCGKDJP; // 0x78

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
