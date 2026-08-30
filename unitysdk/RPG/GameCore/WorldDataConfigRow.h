#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EFAA140)
#define RPG_GAMECORE_WORLDDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAAC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow_TypeDefinitionIndex = 13905;

	class WorldDataConfigRow : public ::System::Object
	{
	public:
		::System::String* ChronicleWorldBgPath; // 0x10
		::System::String* SmallWorldIconPath; // 0x18
		::System::String* ChapterIconBigPath; // 0x20
		::System::String* ChronicleWorldSubBgPath; // 0x28
		::System::String* ChronicleWorldPredictPath; // 0x30
		::Il2CppArray<::RPG::GameCore::MapSpaceType>* MapSpaceTypeList; // 0x38
		::System::String* ChronicleWorldProcessingPath; // 0x40
		::RPG::Client::TextID WorldLanguageName; // 0x48
		::RPG::Client::TextID SimpleWorldDesc; // 0x58
		::System::Single CameraWidth; // 0x68
		::System::UInt32 ID; // 0x6C
		::RPG::GameCore::MapSpaceType TrainSpaceType; // 0x70
		::System::Single CameraHeight; // 0x74
		::System::Boolean IsShow; // 0x78
		::System::Boolean IsRealWorld; // 0x79
		::RPG::Client::TextID WorldDesc; // 0x80
		::RPG::Client::TextID WorldName; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WorldDataConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WorldDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
