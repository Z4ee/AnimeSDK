#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirStageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D794950)
#define RPG_GAMECORE_PIXAIRSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D794D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirStageRow_TypeDefinitionIndex = 12046;

	class PixAirStageRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* PreStageList; // 0x18
		::Il2CppArray<::System::UInt32>* AreaIDList; // 0x20
		::RPG::Client::TextID RewardTip; // 0x28
		::System::UInt32 UnlockScore; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID MechanismTip; // 0x50
		::RPG::GameCore::PixAirStageType Type; // 0x60
		::System::UInt32 StageID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
