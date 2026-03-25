#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_634B2F3DF1C5E804_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A524D0)
#define CLASS_2_634B2F3DF1C5E804_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16A52370)
#define CLASS_2_634B2F3DF1C5E804_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A525A0)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A52640)
#define CLASS_2_634B2F3DF1C5E804_1___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16A525B0)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_1_TypeDefinitionIndex = 33551;

class Class_2_634B2F3DF1C5E804_1 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_2_3; // 0x338
	::RPG::PoolList_1<::System::Int32>* Field_2_2; // 0x340
	::RPG::GameCore::FiveDimOrthoDirection Field_2_0; // 0x348
	::UnityEngine::Vector3 Field_2_14; // 0x34C
	::System::Single Field_2_6; // 0x358
	::System::Boolean Field_2_10; // 0x35C
	::System::Single Field_2_7; // 0x360
	::System::Int32 Field_2_5; // 0x364
	::System::Int32 Field_2_11; // 0x368
	::System::Int32 Field_2_12; // 0x36C
	::System::Int32 Field_2_16; // 0x370
	::System::Int32 Field_2_15; // 0x374
	::System::Int32 Field_2_9; // 0x378
	::System::Int32 Field_2_17; // 0x37C
	::UnityEngine::Vector3 Field_2_13; // 0x380
	::System::Boolean Field_2_1; // 0x38C
	::System::Boolean Field_2_8; // 0x38D
	::System::Boolean Field_2_4; // 0x38E
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
