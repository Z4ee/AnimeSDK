#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D793C80)
#define RPG_GAMECORE_PIXAIRPLANEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D794220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirPlaneRow_TypeDefinitionIndex = 12054;

	class PixAirPlaneRow : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* EquipIDList; // 0x20
		::System::String* PlaneIconPath; // 0x28
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* RecommendTagList; // 0x30
		::System::String* LargePlaneIconPath; // 0x38
		::System::String* ModelPath; // 0x40
		::System::UInt32 BaseLife; // 0x48
		::System::Boolean IsSelectable; // 0x4C
		::RPG::Client::TextID AvatarName; // 0x50
		::RPG::Client::TextID desc; // 0x60
		::System::UInt32 BaseHP; // 0x70
		::System::UInt32 EquipID; // 0x74
		::System::UInt32 GrantBySubmissionID; // 0x78
		::System::UInt32 UnlockScore; // 0x7C
		::System::UInt32 PlaneID; // 0x80

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
