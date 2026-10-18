#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAC83D0)
#define CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CAC8330)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC84A0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 43532;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* MMEILEPDKJB; // 0x338
	::System::Boolean FPJEKELOBCH; // 0x340
	::System::Boolean BLFCFLEPLJC; // 0x341
	::System::Single MHJFFHDKOMP; // 0x344
	::System::Single MFALMACPJPJ; // 0x348
	::UnityEngine::Vector3 CALBFECHHOF; // 0x34C
	::System::Int32 JPFABEJGBCB; // 0x358
	::UnityEngine::Vector3 EBJMNMCEGMA; // 0x35C
	::System::Boolean IFHPLBMILIN; // 0x368
	::System::Boolean AFLPGJFHKPO; // 0x369
	::System::Boolean AAKPHPEPKCB; // 0x36A
	::System::Boolean DGIBAMJGDNE; // 0x36B
	::System::Boolean BCJJEDCKHPN; // 0x36C
	::System::Boolean DKIHCKOJMCH; // 0x36D
	::System::Boolean MGEOBDIMBPD; // 0x36E
	::System::Boolean LLNCMNLNFKL; // 0x36F
	::UnityEngine::Vector3 ACKDLFEPFMC; // 0x370

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
