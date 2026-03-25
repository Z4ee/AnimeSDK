#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x980DF70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__ISTRACKSAME_B__0_OFFSET UNITYSDK_OFFSET(0x9810720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass23_0_TypeDefinitionIndex = 53056;

	class GridFightEquipTrackData___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList; // 0x10
		::Enum_3_0A3761FE34514D6C_37 trackSource; // 0x18
		::System::UInt32 roleID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTrackSame_b__0(::RPG::Client::GridFightEquipTrack* track)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__ISTRACKSAME_B__0_OFFSET))(this, track);
		}
	};
}
