#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA9780)
#define CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS13_0__SORTACCESSORYLIST_B__0_OFFSET UNITYSDK_OFFSET(0x16DA99C0)

inline static constexpr unsigned int Class_1_7E1676DAE92296EE___c__DisplayClass13_0_TypeDefinitionIndex = 51113;

class Class_1_7E1676DAE92296EE___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* resonanceGearIDs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SortAccessoryList_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7E1676DAE92296EE___C__DISPLAYCLASS13_0__SORTACCESSORYLIST_B__0_OFFSET))(this, a1);
	}
};
