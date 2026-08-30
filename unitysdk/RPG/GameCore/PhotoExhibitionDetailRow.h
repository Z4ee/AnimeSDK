#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D327C00)
#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3281E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionDetailRow_TypeDefinitionIndex = 12037;

	class PhotoExhibitionDetailRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* FemalePicPath; // 0x10
		::System::String* UnlockPicPath; // 0x18
		::Il2CppArray<::System::String*>* MalePicPath; // 0x20
		::Il2CppArray<::System::UInt32>* TaskOption; // 0x28
		::RPG::Client::TextID GroupphotoDesc; // 0x30
		::System::UInt32 FinishSubMissionID; // 0x40
		::System::Boolean ShowRuikeName; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 ID; // 0x58
		::System::UInt32 MissionID; // 0x5C
		::RPG::Client::TextID Unlock; // 0x60
		::RPG::Client::TextID AuthorName; // 0x70
		::RPG::Client::TextID RuikeReply; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoExhibitionDetailRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoExhibitionDetailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
