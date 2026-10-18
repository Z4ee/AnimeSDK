#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8825D0)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET UNITYSDK_OFFSET(0x1D883020)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET UNITYSDK_OFFSET(0x1D883070)
#define RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D883010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconRow_TypeDefinitionIndex = 12549;

	class MiniMapIconRow : public ::System::Object
	{
	public:
		::System::String* MissionIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* FiveDimBillboardIDList; // 0x18
		::System::String* IconName; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::GameCore::MiniMapIconOrientationType IconOrientetionSwitch; // 0x30
		::System::Boolean IsShowInBillboard; // 0x34
		::System::Boolean IsFollowPropScale; // 0x35
		::System::Boolean IsFollowMapScale; // 0x36
		::System::Boolean IsShowCornerArrow; // 0x37
		::System::UInt32 CircleRange; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 ModelIcon; // 0x40
		::System::UInt32 ConnectID; // 0x44
		::System::Boolean isShowinMap; // 0x48
		::System::Boolean IsCrossLayer; // 0x49
		::System::UInt32 Priority; // 0x4C
		::System::UInt32 BillboardIcon; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniMapIconRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniMapIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET))(a1, a2);
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
