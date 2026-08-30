#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }

#define CLASS_2_9AE1988822FB0067_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BAAF810)
#define CLASS_2_9AE1988822FB0067_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1BAAF720)
#define CLASS_2_9AE1988822FB0067__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAF8C0)

inline static constexpr unsigned int Class_2_9AE1988822FB0067_TypeDefinitionIndex = 41894;

class Class_2_9AE1988822FB0067 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* IDOGNEJAOHB; // 0x338
	::System::Boolean LEONIHNBBHF; // 0x340
	::System::Boolean ILHCJFKCHBM; // 0x341
	::UnityEngine::Vector3 CBKGAFODLKL; // 0x344
	::System::Boolean HFJKJFAABIF; // 0x350
	::System::Boolean BPJLDFOFFOM; // 0x351
	::System::Boolean HAJKKJJKOFK; // 0x352
	::System::Int32 MKBEABBPCJE; // 0x354
	::System::Int32 LPLJOOKLAEG; // 0x358

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AE1988822FB0067__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AE1988822FB0067_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AE1988822FB0067_CLEAR_OFFSET))(this);
	}
};
