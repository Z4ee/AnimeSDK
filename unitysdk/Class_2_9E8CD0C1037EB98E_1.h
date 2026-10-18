#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_9E8CD0C1037EB98E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA99FE0)
#define CLASS_2_9E8CD0C1037EB98E_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA99F40)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9A0D0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 43532;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* MMEILEPDKJB; // 0x338
	::System::Int32 JPFABEJGBCB; // 0x340
	::System::Boolean BLFCFLEPLJC; // 0x344
	::System::Boolean DKIHCKOJMCH; // 0x345
	::System::Boolean LLNCMNLNFKL; // 0x346
	::System::Boolean MGEOBDIMBPD; // 0x347
	::UnityEngine::Vector3 ACKDLFEPFMC; // 0x348
	::System::Single MFALMACPJPJ; // 0x354
	::System::Single MHJFFHDKOMP; // 0x358
	::System::Boolean AFLPGJFHKPO; // 0x35C
	::System::Boolean DGIBAMJGDNE; // 0x35D
	::System::Boolean IFHPLBMILIN; // 0x35E
	::System::Boolean AAKPHPEPKCB; // 0x35F
	::System::Boolean FPJEKELOBCH; // 0x360
	::System::Boolean BCJJEDCKHPN; // 0x361
	::UnityEngine::Vector3 EBJMNMCEGMA; // 0x364
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
