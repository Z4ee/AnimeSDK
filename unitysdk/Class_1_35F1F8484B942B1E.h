#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_35F1F8484B942B1E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF889F0)
#define CLASS_1_35F1F8484B942B1E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1BF88A90)
#define CLASS_1_35F1F8484B942B1E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1BF88B70)
#define CLASS_1_35F1F8484B942B1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF88BB0)

inline static constexpr unsigned int Class_1_35F1F8484B942B1E_TypeDefinitionIndex = 41869;

class Class_1_35F1F8484B942B1E : public ::System::Object
{
public:
	::System::String* ODMGJKCAICF; // 0x10
	::RPG::PoolList_1<::System::Int32>* OPOCBLDANJG; // 0x18
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* KEHMJBHPNKG; // 0x20
	::System::String* LOPPEGGELBJ; // 0x28
	::System::Boolean KMGIHDHMBJB; // 0x30
	::System::Boolean CAGCHKJHMPD; // 0x31
	::System::Int32 MNMHMECGDAK; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F1F8484B942B1E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F1F8484B942B1E_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F1F8484B942B1E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35F1F8484B942B1E_ONRECYCLE_OFFSET))(this);
	}
};
