#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define CLASS_2_C3391568C5B66189_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E3F3B0)
#define CLASS_2_C3391568C5B66189_METHOD_2_B540CC75D692964A_OFFSET UNITYSDK_OFFSET(0x17E3F5D0)
#define CLASS_2_C3391568C5B66189_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E3F530)
#define CLASS_2_C3391568C5B66189_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17E3F2A0)
#define CLASS_2_C3391568C5B66189__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3F970)
#define CLASS_2_C3391568C5B66189___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E3FA10)
#define CLASS_2_C3391568C5B66189___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17E3F980)

inline static constexpr unsigned int Class_2_C3391568C5B66189_TypeDefinitionIndex = 39357;

class Class_2_C3391568C5B66189 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* Field_2_14; // 0x338
	::RPG::PoolList_1<::UnityEngine::Collision*>* Field_2_7; // 0x340
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_13; // 0x348
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_4; // 0x350
	::System::Int32 Field_2_5; // 0x384
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_2; // 0x388
	::System::Single Field_2_8; // 0x3BC
	::System::Single Field_2_10; // 0x3C0
	::System::Single Field_2_6; // 0x3C4
	::System::Boolean Field_2_1; // 0x3C8
	::System::Boolean Field_2_12; // 0x3C9
	::System::Boolean Field_2_11; // 0x3CA
	::System::Single Field_2_9; // 0x3CC
	::UnityEngine::Vector3 Field_2_0; // 0x3D0
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_3; // 0x3DC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B540CC75D692964A(::Class_3_1A92845FAFA5EC77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_METHOD_2_B540CC75D692964A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
