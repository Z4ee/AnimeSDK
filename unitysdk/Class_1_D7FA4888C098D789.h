#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AD2E1FFEF7B18A8C.h"
#include "unitysdk/Struct_2_AE33ABA7A770406B.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_D7FA4888C098D789_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C36B3A0)
#define CLASS_1_D7FA4888C098D789_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C36B550)
#define CLASS_1_D7FA4888C098D789_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C36B6C0)
#define CLASS_1_D7FA4888C098D789__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36B710)

inline static constexpr unsigned int Class_1_D7FA4888C098D789_TypeDefinitionIndex = 41712;

class Class_1_D7FA4888C098D789 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* LHOFEGLDGKN; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::Struct_2_AE33ABA7A770406B>* HGKHABKBFIF; // 0x18
	::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_AD2E1FFEF7B18A8C>* DDJCGFMFNEM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FA4888C098D789__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FA4888C098D789_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FA4888C098D789_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7FA4888C098D789_ONRECYCLE_OFFSET))(this);
	}
};
