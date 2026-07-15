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

#define CLASS_2_CAC59C79346B9343_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A904D50)
#define CLASS_2_CAC59C79346B9343_METHOD_2_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0x1A904F90)
#define CLASS_2_CAC59C79346B9343_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A904EE0)
#define CLASS_2_CAC59C79346B9343_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1A904C30)
#define CLASS_2_CAC59C79346B9343__CTOR_OFFSET UNITYSDK_OFFSET(0x1A905340)

inline static constexpr unsigned int Class_2_CAC59C79346B9343_TypeDefinitionIndex = 40941;

class Class_2_CAC59C79346B9343 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_0; // 0x338
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* Field_2_1; // 0x340
	::RPG::PoolList_1<::UnityEngine::Collision*>* Field_2_2; // 0x348
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_3; // 0x350
	::System::Single Field_2_4; // 0x384
	::System::Single Field_2_5; // 0x388
	::System::Int32 Field_2_6; // 0x38C
	::System::Boolean Field_2_7; // 0x390
	::System::Boolean Field_2_8; // 0x391
	::System::Boolean Field_2_9; // 0x392
	::System::Single Field_2_10; // 0x394
	::System::Single Field_2_11; // 0x398
	::UnityEngine::Vector3 Field_2_12; // 0x39C
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_13; // 0x3A8
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_14; // 0x3DC

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
