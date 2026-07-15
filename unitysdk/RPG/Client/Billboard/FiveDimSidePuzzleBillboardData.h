#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x19FDDC30)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET UNITYSDK_OFFSET(0x19FDDBC0)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET UNITYSDK_OFFSET(0x19FDDBA0)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x19FDDBE0)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET UNITYSDK_OFFSET(0x19FDDBD0)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET UNITYSDK_OFFSET(0x19FDDBB0)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19FDB4B0)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int FiveDimSidePuzzleBillboardData_TypeDefinitionIndex = 71387;

	class FiveDimSidePuzzleBillboardData : public ::System::Object
	{
	public:
		::System::Tuple_2<::System::String*, ::System::String*>* _FiveDimSidePuzzlePanelPaths_k__BackingField; // 0x10
		::System::Boolean _IsShowFiveDimSidePuzzleChest_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowFiveDimSidePuzzleChest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET))(this);
		}

		::System::Void set_IsShowFiveDimSidePuzzleChest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET))(this, a1);
		}

		::System::Tuple_2<::System::String*, ::System::String*>* get_FiveDimSidePuzzlePanelPaths()
		{
			return ((::System::Tuple_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET))(this);
		}

		::System::Void set_FiveDimSidePuzzlePanelPaths(::System::Tuple_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_CLONE_OFFSET))(this);
		}
	};
}
