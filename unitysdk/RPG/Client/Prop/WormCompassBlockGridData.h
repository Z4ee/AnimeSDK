#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleBlockType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_WORMCOMPASSBLOCKGRIDDATA_METHOD_1_7841B7A88F86B0EE_OFFSET UNITYSDK_OFFSET(0xDD58DA0)
#define RPG_CLIENT_PROP_WORMCOMPASSBLOCKGRIDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDD58E30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassBlockGridData_TypeDefinitionIndex = 78453;

	class WormCompassBlockGridData : public ::System::Object
	{
	public:
		::System::Int32 Row; // 0x10
		::System::Int32 Col; // 0x14
		::Il2CppArray<::RPG::Client::Prop::WormCompassPuzzleBlockType>* Blocks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSBLOCKGRIDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleBlockType Method_1_7841B7A88F86B0EE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleBlockType(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSBLOCKGRIDDATA_METHOD_1_7841B7A88F86B0EE_OFFSET))(this, a1, a2);
		}
	};
}
