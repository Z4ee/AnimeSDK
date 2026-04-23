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

#define CLASS_1_D3F97394EEAB34D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EF9370)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_3BBB5E0EA80F92AC_OFFSET UNITYSDK_OFFSET(0x17F09EE0)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_40E490E2772D5D75_1_OFFSET UNITYSDK_OFFSET(0x17F09D50)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x17F099B0)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x17F09B40)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x17F097A0)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x17F09230)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_1_OFFSET UNITYSDK_OFFSET(0x17F09460)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_2_OFFSET UNITYSDK_OFFSET(0x17F09600)
#define CLASS_1_D3F97394EEAB34D6_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x17F092C0)
#define CLASS_1_D3F97394EEAB34D6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17EF9220)
#define CLASS_1_D3F97394EEAB34D6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F09F50)
#define CLASS_1_D3F97394EEAB34D6__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF9490)

inline static constexpr unsigned int Class_1_D3F97394EEAB34D6_TypeDefinitionIndex = 39342;

class Class_1_D3F97394EEAB34D6 : public ::System::Object
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_19; // 0x10
	::UnityEngine::Collider* Field_1_15; // 0x18
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_20; // 0x20
	::System::Single Field_1_12; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::Struct_2_52A902145F5BE51F_2 Field_1_22; // 0x30
	::System::Int32 Field_1_13; // 0x260
	::RPG::Client::LittleGame::FiveDim::PropMoveState Field_1_1; // 0x264
	::UnityEngine::Vector3 Field_1_4; // 0x268
	::UnityEngine::Vector3 Field_1_10; // 0x274
	::UnityEngine::Vector3 Field_1_7; // 0x280
	::UnityEngine::Vector3 Field_1_11; // 0x28C
	::RPG::Client::LittleGame::FiveDim::PropMoveState Field_1_0; // 0x298
	::System::Single Field_1_21; // 0x29C
	::UnityEngine::Vector3 Field_1_8; // 0x2A0
	::UnityEngine::Vector3 Field_1_5; // 0x2AC
	::Struct_2_EAC1BB0F093534A5 Field_1_14; // 0x2B8
	::System::Boolean Field_1_18; // 0x320
	::System::Boolean Field_1_16; // 0x321
	::System::Boolean Field_1_6; // 0x322
	::System::Boolean Field_1_9; // 0x323
	::System::Boolean Field_1_17; // 0x324
	::UnityEngine::Quaternion Field_1_3; // 0x328

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
