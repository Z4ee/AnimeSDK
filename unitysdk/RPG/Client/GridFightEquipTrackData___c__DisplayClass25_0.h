#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2F470)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS25_0__ISTRACKSAME_B__0_OFFSET UNITYSDK_OFFSET(0xBB32BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass25_0_TypeDefinitionIndex = 61087;

	class GridFightEquipTrackData___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::UInt32>* trackEquipIDList; // 0x10
		::System::UInt32 roleID; // 0x18
		::Enum_3_DB663931210BBC27_36 trackSource; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTrackSame_b__0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS25_0__ISTRACKSAME_B__0_OFFSET))(this, a1);
		}
	};
}
