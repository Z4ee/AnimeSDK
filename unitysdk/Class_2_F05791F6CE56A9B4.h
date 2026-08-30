#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collision; }

#define CLASS_2_F05791F6CE56A9B4_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3AEEC0)
#define CLASS_2_F05791F6CE56A9B4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C3AF000)
#define CLASS_2_F05791F6CE56A9B4_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C3AEDC0)
#define CLASS_2_F05791F6CE56A9B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AF0A0)

inline static constexpr unsigned int Class_2_F05791F6CE56A9B4_TypeDefinitionIndex = 41892;

class Class_2_F05791F6CE56A9B4 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x338
	::RPG::PoolList_1<::UnityEngine::Collision*>* KNEONECEFKK; // 0x340
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x348
	::System::Nullable_1<::UnityEngine::RaycastHit> ALAGENDAJLE; // 0x354
	::System::Boolean BNAPGMEKLHB; // 0x388
	::System::Boolean IHLODLNFJKK; // 0x389
	::System::Nullable_1<::UnityEngine::RaycastHit> NGKIHMLBGLE; // 0x38C
	::System::Nullable_1<::UnityEngine::RaycastHit> KFFFAJEEKGI; // 0x3C0
	::System::Single MHPMADJGBJB; // 0x3F4
	::System::Int32 HMGBOLNBDGA; // 0x3F8
	::System::Single GPGIEFKLNKA; // 0x3FC

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
