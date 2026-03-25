#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_2.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_D3F97394EEAB34D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x169F9C80)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_3BBB5E0EA80F92AC_OFFSET UNITYSDK_OFFSET(0x169FB0A0)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_40E490E2772D5D75_1_OFFSET UNITYSDK_OFFSET(0x169FAF20)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x169FABA0)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x169FAD20)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x169FA9A0)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x169FA430)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x169FA660)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_2_OFFSET UNITYSDK_OFFSET(0x169FA800)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x169FA4C0)
#define CLASS_1_D3F97394EEAB34D6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x169FB110)
#define CLASS_1_D3F97394EEAB34D6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x169FB170)
#define CLASS_1_D3F97394EEAB34D6__CTOR_OFFSET UNITYSDK_OFFSET(0x169FA3E0)

inline static constexpr unsigned int Class_1_D3F97394EEAB34D6_TypeDefinitionIndex = 33543;

class Class_1_D3F97394EEAB34D6 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_15; // 0x10
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_20; // 0x18
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_19; // 0x20
	::System::Int32 Field_1_13; // 0x28
	::RPG::Client::LittleGame::FiveDim::PropMoveState Field_1_0; // 0x2C
	::System::UInt32 Field_1_2; // 0x30
	::System::Boolean Field_1_16; // 0x34
	::System::Boolean Field_1_9; // 0x35
	::System::Boolean Field_1_18; // 0x36
	::System::Boolean Field_1_17; // 0x37
	::System::Boolean Field_1_6; // 0x38
	::UnityEngine::Vector3 Field_1_8; // 0x3C
	::UnityEngine::Vector3 Field_1_7; // 0x48
	::System::Single Field_1_21; // 0x54
	::Struct_2_EAC1BB0F093534A5 Field_1_14; // 0x58
	::UnityEngine::Vector3 Field_1_5; // 0xC0
	::UnityEngine::Vector3 Field_1_11; // 0xCC
	::UnityEngine::Vector3 Field_1_10; // 0xD8
	::RPG::Client::LittleGame::FiveDim::PropMoveState Field_1_1; // 0xE4
	::UnityEngine::Quaternion Field_1_3; // 0xE8
	::System::Single Field_1_12; // 0xF8
	::Struct_2_52A902145F5BE51F_2 Field_1_22; // 0xFC
	::UnityEngine::Vector3 Field_1_4; // 0x32C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6__CTOR_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_C34AC80B04BCFF1B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_77FD543600E00498_1_OFFSET))(this);
	}

	::System::Void Method_1_40E490E2772D5D75_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_40E490E2772D5D75_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BBB5E0EA80F92AC(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_METHOD_1_3BBB5E0EA80F92AC_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3F97394EEAB34D6_ONRECYCLE_OFFSET))(this);
	}
};
