#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1741E000)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET UNITYSDK_OFFSET(0x1741EA30)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1741EA80)
#define RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1741EA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconRow_TypeDefinitionIndex = 11441;

	class MiniMapIconRow : public ::System::Object
	{
	public:
		::System::String* MissionIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* IconName; // 0x20
		::Il2CppArray<::System::UInt32>* FiveDimBillboardIDList; // 0x28
		::System::Boolean isShowinMap; // 0x30
		::System::Boolean IsFollowMapScale; // 0x31
		::System::Boolean IsShowInBillboard; // 0x32
		::System::Boolean IsCrossLayer; // 0x33
		::RPG::GameCore::MiniMapIconOrientationType IconOrientetionSwitch; // 0x34
		::System::UInt32 CircleRange; // 0x38
		::System::UInt32 Priority; // 0x3C
		::System::UInt32 ID; // 0x40
		::System::Boolean IsFollowPropScale; // 0x44
		::System::Boolean IsShowCornerArrow; // 0x45
		::System::UInt32 ModelIcon; // 0x48
		::System::UInt32 BillboardIcon; // 0x4C
		::System::UInt32 ConnectID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MiniMapIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniMapIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::String* GetConnectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET))(this);
		}

		::System::String* GetConnectMissionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET))(this);
		}
	};
}
