#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_634B2F3DF1C5E804_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D89650)
#define CLASS_2_634B2F3DF1C5E804_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D895B0)
#define CLASS_2_634B2F3DF1C5E804__CTOR_OFFSET UNITYSDK_OFFSET(0x18D89750)
#define CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D897E0)
#define CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D89760)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_TypeDefinitionIndex = 40118;

class Class_2_634B2F3DF1C5E804 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_2_0; // 0x338
	::System::Boolean Field_2_1; // 0x340
	::System::Boolean Field_2_2; // 0x341
	::System::Boolean Field_2_3; // 0x342
	::System::Boolean Field_2_4; // 0x343
	::System::Boolean Field_2_5; // 0x344
	::System::Boolean Field_2_6; // 0x345
	::System::Boolean Field_2_7; // 0x346
	::System::Boolean Field_2_8; // 0x347
	::UnityEngine::Vector3 Field_2_9; // 0x348
	::System::Single Field_2_10; // 0x354
	::System::Boolean Field_2_11; // 0x358
	::System::Boolean Field_2_12; // 0x359
	::System::Int32 Field_2_13; // 0x35C
	::System::Single Field_2_14; // 0x360
	::UnityEngine::Vector3 Field_2_15; // 0x364
	::UnityEngine::Vector3 Field_2_16; // 0x370

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
