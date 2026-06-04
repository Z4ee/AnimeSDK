#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E6A440)
#define RPG_GAMECORE_WORLDDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6AFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow_TypeDefinitionIndex = 13342;

	class WorldDataConfigRow : public ::System::Object
	{
	public:
		::System::String* ChronicleWorldBgPath; // 0x10
		::System::String* ChapterIconBigPath; // 0x18
		::System::String* SmallWorldIconPath; // 0x20
		::System::String* ChronicleWorldPredictPath; // 0x28
		::Il2CppArray<::RPG::GameCore::MapSpaceType>* MapSpaceTypeList; // 0x30
		::System::String* ChronicleWorldSubBgPath; // 0x38
		::System::String* ChronicleWorldProcessingPath; // 0x40
		::RPG::GameCore::MapSpaceType TrainSpaceType; // 0x48
		::System::Single CameraWidth; // 0x4C
		::System::UInt32 ID; // 0x50
		::RPG::Client::TextID SimpleWorldDesc; // 0x58
		::RPG::Client::TextID WorldName; // 0x68
		::RPG::Client::TextID WorldLanguageName; // 0x78
		::System::Boolean IsShow; // 0x88
		::System::Boolean IsRealWorld; // 0x89
		::System::Single CameraHeight; // 0x8C
		::RPG::Client::TextID WorldDesc; // 0x90

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
