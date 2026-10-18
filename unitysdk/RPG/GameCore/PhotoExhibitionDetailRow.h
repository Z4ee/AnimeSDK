#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DEFD0)
#define RPG_GAMECORE_PHOTOEXHIBITIONDETAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DF5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoExhibitionDetailRow_TypeDefinitionIndex = 12118;

	class PhotoExhibitionDetailRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* FemalePicPath; // 0x10
		::Il2CppArray<::System::String*>* MalePicPath; // 0x18
		::System::String* UnlockPicPath; // 0x20
		::Il2CppArray<::System::UInt32>* TaskOption; // 0x28
		::System::UInt32 ID; // 0x30
		::System::UInt32 MissionID; // 0x34
		::RPG::Client::TextID AuthorName; // 0x38
		::RPG::Client::TextID GroupphotoDesc; // 0x48
		::System::UInt32 FinishSubMissionID; // 0x58
		::System::Boolean ShowRuikeName; // 0x5C
		::RPG::Client::TextID Unlock; // 0x60
		::RPG::Client::TextID Name; // 0x70
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
