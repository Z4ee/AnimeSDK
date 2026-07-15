#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collision; }

#define CLASS_2_F05791F6CE56A9B4_CLEAR_OFFSET UNITYSDK_OFFSET(0x180C7C30)
#define CLASS_2_F05791F6CE56A9B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180C7D70)
#define CLASS_2_F05791F6CE56A9B4_ONALLOC_OFFSET UNITYSDK_OFFSET(0x180C7B30)
#define CLASS_2_F05791F6CE56A9B4__CTOR_OFFSET UNITYSDK_OFFSET(0x180C7E10)

inline static constexpr unsigned int Class_2_F05791F6CE56A9B4_TypeDefinitionIndex = 40933;

class Class_2_F05791F6CE56A9B4 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collision*>* Field_2_0; // 0x338
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_1; // 0x340
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_2; // 0x348
	::System::Boolean Field_2_3; // 0x37C
	::System::Boolean Field_2_4; // 0x37D
	::System::Single Field_2_5; // 0x380
	::System::Int32 Field_2_6; // 0x384
	::System::Single Field_2_7; // 0x388
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_8; // 0x38C
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_9; // 0x3C0
	::UnityEngine::Vector3 Field_2_10; // 0x3F4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F05791F6CE56A9B4__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F05791F6CE56A9B4_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F05791F6CE56A9B4_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F05791F6CE56A9B4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
