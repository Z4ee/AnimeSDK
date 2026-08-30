#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C554AC0)
#define CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C554A20)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C554BA0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 41890;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* MMEILEPDKJB; // 0x338
	::UnityEngine::Vector3 CALBFECHHOF; // 0x340
	::System::Single MFALMACPJPJ; // 0x34C
	::System::Boolean AFLPGJFHKPO; // 0x350
	::System::Boolean IFHPLBMILIN; // 0x351
	::System::Boolean DGIBAMJGDNE; // 0x352
	::System::Boolean FPJEKELOBCH; // 0x353
	::System::Boolean DKIHCKOJMCH; // 0x354
	::System::Boolean BLFCFLEPLJC; // 0x355
	::UnityEngine::Vector3 ACKDLFEPFMC; // 0x358
	::System::Int32 JPFABEJGBCB; // 0x364
	::UnityEngine::Vector3 EBJMNMCEGMA; // 0x368
	::System::Single MHJFFHDKOMP; // 0x374
	::System::Boolean BCJJEDCKHPN; // 0x378
	::System::Boolean AAKPHPEPKCB; // 0x379
	::System::Boolean MGEOBDIMBPD; // 0x37A
	::System::Boolean LLNCMNLNFKL; // 0x37B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET))(this);
	}
};
