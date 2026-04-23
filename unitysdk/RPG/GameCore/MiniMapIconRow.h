#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiniMapIconOrientationType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MINIMAPICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B2A8D0)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTICONPATH_OFFSET UNITYSDK_OFFSET(0x18B2B300)
#define RPG_GAMECORE_MINIMAPICONROW_GETCONNECTMISSIONICONPATH_OFFSET UNITYSDK_OFFSET(0x18B2B350)
#define RPG_GAMECORE_MINIMAPICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2B2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniMapIconRow_TypeDefinitionIndex = 11843;

	class MiniMapIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconName; // 0x18
		::Il2CppArray<::System::UInt32>* FiveDimBillboardIDList; // 0x20
		::System::String* MissionIconPath; // 0x28
		::System::Boolean isShowinMap; // 0x30
		::System::Boolean IsShowCornerArrow; // 0x31
		::RPG::GameCore::MiniMapIconOrientationType IconOrientetionSwitch; // 0x34
		::System::UInt32 ModelIcon; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 BillboardIcon; // 0x40
		::System::UInt32 ConnectID; // 0x44
		::System::UInt32 CircleRange; // 0x48
		::System::Boolean IsFollowPropScale; // 0x4C
		::System::Boolean IsCrossLayer; // 0x4D
		::System::Boolean IsShowInBillboard; // 0x4E
		::System::Boolean IsFollowMapScale; // 0x4F
		::System::UInt32 Priority; // 0x50

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
