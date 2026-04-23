#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_634B2F3DF1C5E804_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EF9280)
#define CLASS_2_634B2F3DF1C5E804_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17EF9180)
#define CLASS_2_634B2F3DF1C5E804__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF9480)
#define CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EF9500)
#define CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17EF94A0)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_TypeDefinitionIndex = 39347;

class Class_2_634B2F3DF1C5E804 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_2_10; // 0x338
	::UnityEngine::Vector3 Field_2_14; // 0x340
	::System::Boolean Field_2_2; // 0x34C
	::System::Boolean Field_2_5; // 0x34D
	::System::Single Field_2_6; // 0x350
	::System::Boolean Field_2_7; // 0x354
	::System::Boolean Field_2_11; // 0x355
	::System::Boolean Field_2_3; // 0x356
	::System::Boolean Field_2_16; // 0x357
	::UnityEngine::Vector3 Field_2_0; // 0x358
	::System::Single Field_2_4; // 0x364
	::UnityEngine::Vector3 Field_2_13; // 0x368
	::System::Int32 Field_2_15; // 0x374
	::System::Boolean Field_2_9; // 0x378
	::System::Boolean Field_2_8; // 0x379
	::System::Boolean Field_2_12; // 0x37A
	::System::Boolean Field_2_1; // 0x37B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
