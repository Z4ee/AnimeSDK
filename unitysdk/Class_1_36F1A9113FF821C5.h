#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DynamicCollisionRegisterReason.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_36F1A9113FF821C5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9E8710)
#define CLASS_1_36F1A9113FF821C5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1A9E8640)
#define CLASS_1_36F1A9113FF821C5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A9E8690)
#define CLASS_1_36F1A9113FF821C5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1A9E86D0)
#define CLASS_1_36F1A9113FF821C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E8900)

inline static constexpr unsigned int Class_1_36F1A9113FF821C5_TypeDefinitionIndex = 40674;

class Class_1_36F1A9113FF821C5 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::Struct_2_F8D9CEC872B937AF Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0xB0
	::System::Boolean Field_1_4; // 0xB1
	::System::Boolean Field_1_5; // 0xB2
	::RPG::Client::LittleGame::FiveDim::DynamicCollisionRegisterReason Field_1_6; // 0xB3
	::Struct_2_EAC1BB0F093534A5 Field_1_7; // 0xB4
	::UnityEngine::Bounds Field_1_8; // 0x11C
	::Struct_2_EAC1BB0F093534A5 Field_1_9; // 0x134
	::System::UInt32 Field_1_10; // 0x19C
	::UnityEngine::Bounds Field_1_11; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F1A9113FF821C5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F1A9113FF821C5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F1A9113FF821C5_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F1A9113FF821C5_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36F1A9113FF821C5_CLEAR_OFFSET))(this);
	}
};
