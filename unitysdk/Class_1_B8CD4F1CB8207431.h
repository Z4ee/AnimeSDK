#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_B8CD4F1CB8207431_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C329690)
#define CLASS_1_B8CD4F1CB8207431_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C329770)
#define CLASS_1_B8CD4F1CB8207431_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C329850)
#define CLASS_1_B8CD4F1CB8207431__CTOR_OFFSET UNITYSDK_OFFSET(0x1C329890)

inline static constexpr unsigned int Class_1_B8CD4F1CB8207431_TypeDefinitionIndex = 41865;

class Class_1_B8CD4F1CB8207431 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* OPOCBLDANJG; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* KEHMJBHPNKG; // 0x18
	::System::String* ODMGJKCAICF; // 0x20
	::System::String* LOPPEGGELBJ; // 0x28
	::System::String* CDHCPDPPKPH; // 0x30
	::UnityEngine::Vector3 LONPDOGOIEG; // 0x38
	::System::Int32 MNMHMECGDAK; // 0x44
	::UnityEngine::Vector3 PCMJLKGLLDH; // 0x48
	::System::Boolean CAGCHKJHMPD; // 0x54
	::System::Boolean KMGIHDHMBJB; // 0x55
	::System::Int32 OBJCCAHJONF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CD4F1CB8207431_ONRECYCLE_OFFSET))(this);
	}
};
