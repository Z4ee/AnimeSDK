#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CDDE0)
#define RPG_GAMECORE_PIXAIRPLANEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirPlaneRow_TypeDefinitionIndex = 11665;

	class PixAirPlaneRow : public ::System::Object
	{
	public:
		::System::String* PlaneIconPath; // 0x10
		::System::String* ModelPath; // 0x18
		::System::String* LargePlaneIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* EquipIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* RecommendTagList; // 0x30
		::System::String* IconPath; // 0x38
		::System::String* Name; // 0x40
		::System::UInt32 BaseLife; // 0x48
		::System::UInt32 PlaneID; // 0x4C
		::System::Boolean IsSelectable; // 0x50
		::System::UInt32 BaseHP; // 0x54
		::System::UInt32 UnlockScore; // 0x58
		::System::UInt32 EquipID; // 0x5C
		::System::UInt32 GrantBySubmissionID; // 0x60
		::RPG::Client::TextID desc; // 0x68
		::RPG::Client::TextID AvatarName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirPlaneRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirPlaneRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRPLANEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
