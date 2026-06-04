#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7B0175BD08E75DE3___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA998D10)
#define CLASS_1_7B0175BD08E75DE3___C__DISPLAYCLASS13_0__SORTACCESSORYLIST_B__0_OFFSET UNITYSDK_OFFSET(0xA998F50)

inline static constexpr unsigned int Class_1_7B0175BD08E75DE3___c__DisplayClass13_0_TypeDefinitionIndex = 50031;

class Class_1_7B0175BD08E75DE3___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* resonanceGearIDs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SortAccessoryList_b__0(::RPG::GameCore::EvolveBuildGearEquipInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7B0175BD08E75DE3___C__DISPLAYCLASS13_0__SORTACCESSORYLIST_B__0_OFFSET))(this, a1);
	}
};
