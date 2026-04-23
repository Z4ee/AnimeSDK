#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_634B2F3DF1C5E804_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F5B270)
#define CLASS_2_634B2F3DF1C5E804_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F5B110)
#define CLASS_2_634B2F3DF1C5E804_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5B350)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F5B3F0)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F5B360)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_1_TypeDefinitionIndex = 39350;

class Class_2_634B2F3DF1C5E804_1 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_2_2; // 0x338
	::RPG::PoolList_1<::System::Int32>* Field_2_3; // 0x340
	::System::Int32 Field_2_9; // 0x348
	::System::Int32 Field_2_16; // 0x34C
	::System::Single Field_2_7; // 0x350
	::System::Single Field_2_6; // 0x354
	::System::Int32 Field_2_17; // 0x358
	::UnityEngine::Vector3 Field_2_13; // 0x35C
	::System::Int32 Field_2_11; // 0x368
	::UnityEngine::Vector3 Field_2_14; // 0x36C
	::RPG::GameCore::FiveDimOrthoDirection Field_2_0; // 0x378
	::System::Int32 Field_2_12; // 0x37C
	::System::Int32 Field_2_15; // 0x380
	::System::Boolean Field_2_10; // 0x384
	::System::Int32 Field_2_5; // 0x388
	::System::Boolean Field_2_4; // 0x38C
	::System::Boolean Field_2_1; // 0x38D
	::System::Boolean Field_2_8; // 0x38E
	::System::Boolean Field_2_18; // 0x38F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
