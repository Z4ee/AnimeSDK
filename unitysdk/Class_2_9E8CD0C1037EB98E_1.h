#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C76A360)
#define CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C76A2C0)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C76A460)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 41890;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* MMEILEPDKJB; // 0x338
	::System::Single MHJFFHDKOMP; // 0x340
	::UnityEngine::Vector3 EBJMNMCEGMA; // 0x344
	::System::Single MFALMACPJPJ; // 0x350
	::System::Int32 JPFABEJGBCB; // 0x354
	::UnityEngine::Vector3 ACKDLFEPFMC; // 0x358
	::System::Boolean DGIBAMJGDNE; // 0x364
	::System::Boolean DKIHCKOJMCH; // 0x365
	::System::Boolean AAKPHPEPKCB; // 0x366
	::System::Boolean BCJJEDCKHPN; // 0x367
	::System::Boolean AFLPGJFHKPO; // 0x368
	::System::Boolean BLFCFLEPLJC; // 0x369
	::System::Boolean FPJEKELOBCH; // 0x36A
	::System::Boolean LLNCMNLNFKL; // 0x36B
	::System::Boolean IFHPLBMILIN; // 0x36C
	::System::Boolean MGEOBDIMBPD; // 0x36D
	::UnityEngine::Vector3 CALBFECHHOF; // 0x370

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
