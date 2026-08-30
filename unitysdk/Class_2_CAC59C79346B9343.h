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

#define CLASS_2_CAC59C79346B9343_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C51E9F0)
#define CLASS_2_CAC59C79346B9343_METHOD_2_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x1C51EC50)
#define CLASS_2_CAC59C79346B9343_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C51EBA0)
#define CLASS_2_CAC59C79346B9343_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C51E8D0)
#define CLASS_2_CAC59C79346B9343__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51F000)

inline static constexpr unsigned int Class_2_CAC59C79346B9343_TypeDefinitionIndex = 41900;

class Class_2_CAC59C79346B9343 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* NILFBBGIHGI; // 0x338
	::RPG::PoolHashSet_1<::System::Int32>* NCIHCMEFKMP; // 0x340
	::RPG::PoolList_1<::UnityEngine::Collision*>* KNEONECEFKK; // 0x348
	::System::Nullable_1<::UnityEngine::RaycastHit> ALAGENDAJLE; // 0x350
	::System::Nullable_1<::UnityEngine::RaycastHit> NGKIHMLBGLE; // 0x384
	::System::Single NMPMMIAKFMO; // 0x3B8
	::System::Single IDNCONEOKKD; // 0x3BC
	::System::Single MHPMADJGBJB; // 0x3C0
	::System::Int32 HMGBOLNBDGA; // 0x3C4
	::System::Boolean IHLODLNFJKK; // 0x3C8
	::System::Boolean BNAPGMEKLHB; // 0x3C9
	::System::Boolean LHGOBGNNGFC; // 0x3CA
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x3CC
	::System::Nullable_1<::UnityEngine::RaycastHit> KFFFAJEEKGI; // 0x3D8
	::System::Single GPGIEFKLNKA; // 0x40C

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
