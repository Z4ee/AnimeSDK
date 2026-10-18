#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define CLASS_2_CAC59C79346B9343_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA009F0)
#define CLASS_2_CAC59C79346B9343_METHOD_2_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x1CA00C10)
#define CLASS_2_CAC59C79346B9343_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CA00B70)
#define CLASS_2_CAC59C79346B9343_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA008D0)
#define CLASS_2_CAC59C79346B9343__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA00FC0)

inline static constexpr unsigned int Class_2_CAC59C79346B9343_TypeDefinitionIndex = 43542;

class Class_2_CAC59C79346B9343 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* NILFBBGIHGI; // 0x338
	::RPG::PoolList_1<::UnityEngine::Collision*>* KNEONECEFKK; // 0x340
	::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x348
	::System::Single IDNCONEOKKD; // 0x350
	::System::Nullable_1<::UnityEngine::RaycastHit> ALAGENDAJLE; // 0x354
	::System::Single NMPMMIAKFMO; // 0x388
	::System::Nullable_1<::UnityEngine::RaycastHit> NGKIHMLBGLE; // 0x38C
	::System::Single GPGIEFKLNKA; // 0x3C0
	::System::Single MHPMADJGBJB; // 0x3C4
	::System::Nullable_1<::UnityEngine::RaycastHit> KFFFAJEEKGI; // 0x3C8
	::System::Int32 HMGBOLNBDGA; // 0x3FC
	::System::Boolean IHLODLNFJKK; // 0x400
	::System::Boolean LHGOBGNNGFC; // 0x401
	::System::Boolean BNAPGMEKLHB; // 0x402
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x404

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAC59C79346B9343__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAC59C79346B9343_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAC59C79346B9343_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAC59C79346B9343_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8660C3A27B56FE60(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_CAC59C79346B9343_METHOD_2_8660C3A27B56FE60_OFFSET))(this, a1);
	}
};
