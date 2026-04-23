#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA308750)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_2__SORTACCESSORYLIST_B__3_OFFSET UNITYSDK_OFFSET(0xA30BCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c__DisplayClass3_2_TypeDefinitionIndex = 58816;

	class EvolveBuildUtils___c__DisplayClass3_2 : public ::System::Object
	{
	public:
		::System::UInt32 ResonanceGear; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortAccessoryList_b__3(::RPG::GameCore::EvolveBuildGearEquipInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__DISPLAYCLASS3_2__SORTACCESSORYLIST_B__3_OFFSET))(this, x);
		}
	};
}
