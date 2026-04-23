#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19111EA0)
#define RPG_GAMECORE_WORLDDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19112A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow_TypeDefinitionIndex = 13266;

	class WorldDataConfigRow : public ::System::Object
	{
	public:
		::System::String* ChronicleWorldPredictPath; // 0x10
		::System::String* ChronicleWorldProcessingPath; // 0x18
		::System::String* ChronicleWorldSubBgPath; // 0x20
		::System::String* ChronicleWorldBgPath; // 0x28
		::System::String* SmallWorldIconPath; // 0x30
		::System::String* ChapterIconBigPath; // 0x38
		::Il2CppArray<::RPG::GameCore::MapSpaceType>* MapSpaceTypeList; // 0x40
		::RPG::Client::TextID WorldName; // 0x48
		::System::Single CameraHeight; // 0x58
		::RPG::GameCore::MapSpaceType TrainSpaceType; // 0x5C
		::RPG::Client::TextID SimpleWorldDesc; // 0x60
		::System::UInt32 ID; // 0x70
		::System::Boolean IsRealWorld; // 0x74
		::System::Boolean IsShow; // 0x75
		::System::Single CameraWidth; // 0x78
		::RPG::Client::TextID WorldLanguageName; // 0x80
		::RPG::Client::TextID WorldDesc; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::WorldDataConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WorldDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
