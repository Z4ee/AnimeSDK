#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DynamicCollisionRegisterReason.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_36F1A9113FF821C5_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDDC090)
#define CLASS_1_36F1A9113FF821C5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1CDDBFC0)
#define CLASS_1_36F1A9113FF821C5_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CDDC010)
#define CLASS_1_36F1A9113FF821C5_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CDDC050)
#define CLASS_1_36F1A9113FF821C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDC290)

inline static constexpr unsigned int Class_1_36F1A9113FF821C5_TypeDefinitionIndex = 41627;

class Class_1_36F1A9113FF821C5 : public ::System::Object
{
public:
	::UnityEngine::Collider* KHMJGBNKOFE; // 0x10
	::Struct_2_F8D9CEC872B937AF BGBEHLOFHAM; // 0x18
	::UnityEngine::Transform* ADCDKNLDDFN; // 0xA8
	::UnityEngine::Bounds BAHCKDEFBEN; // 0xB0
	::System::UInt32 KPGOIAGMDNN; // 0xC8
	::Struct_2_EAC1BB0F093534A5 HNFHBHNLJOH; // 0xCC
	::UnityEngine::Bounds PLCLBIMIGHB; // 0x134
	::Struct_2_EAC1BB0F093534A5 CADPNKFLDBC; // 0x14C
	::System::Boolean IJCDEINGADN; // 0x1B4
	::RPG::Client::LittleGame::FiveDim::DynamicCollisionRegisterReason OBFHLDKOKEA; // 0x1B5
	::System::Boolean CKILGKGKMHK; // 0x1B6
	::System::Boolean NOOJOFHAIAA; // 0x1B7

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
