#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearManager; }

#define CLASS_1_93C84C8D8BC6DA5D_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x18A6A710)
#define CLASS_1_93C84C8D8BC6DA5D_METHOD_1_5B81A347C4B6B422_OFFSET UNITYSDK_OFFSET(0x18A6A6C0)
#define CLASS_1_93C84C8D8BC6DA5D_SET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x18A6A720)
#define CLASS_1_93C84C8D8BC6DA5D__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6A730)

inline static constexpr unsigned int Class_1_93C84C8D8BC6DA5D_TypeDefinitionIndex = 53792;

class Class_1_93C84C8D8BC6DA5D : public ::System::Object
{
public:
	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _SortLists_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93C84C8D8BC6DA5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B81A347C4B6B422(::RPG::GameCore::EvolveBuildGearManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + CLASS_1_93C84C8D8BC6DA5D_METHOD_1_5B81A347C4B6B422_OFFSET))(this, a1);
	}

	::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
	{
		return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93C84C8D8BC6DA5D_GET_SORTLISTS_OFFSET))(this);
	}

	::System::Void set_SortLists(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + CLASS_1_93C84C8D8BC6DA5D_SET_SORTLISTS_OFFSET))(this, a1);
	}
};
