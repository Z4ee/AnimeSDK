#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WORLDDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1C4CD0)
#define RPG_GAMECORE_WORLDDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C5800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldDataConfigRow_TypeDefinitionIndex = 13490;

	class WorldDataConfigRow : public ::System::Object
	{
	public:
		::System::String* ChronicleWorldProcessingPath; // 0x10
		::System::String* SmallWorldIconPath; // 0x18
		::System::String* ChronicleWorldPredictPath; // 0x20
		::Il2CppArray<::RPG::GameCore::MapSpaceType>* MapSpaceTypeList; // 0x28
		::System::String* ChronicleWorldSubBgPath; // 0x30
		::System::String* ChronicleWorldBgPath; // 0x38
		::System::String* ChapterIconBigPath; // 0x40
		::RPG::GameCore::MapSpaceType TrainSpaceType; // 0x48
		::System::Boolean IsShow; // 0x4C
		::System::Boolean IsRealWorld; // 0x4D
		::RPG::Client::TextID WorldName; // 0x50
		::System::Single CameraWidth; // 0x60
		::System::UInt32 ID; // 0x64
		::RPG::Client::TextID SimpleWorldDesc; // 0x68
		::RPG::Client::TextID WorldDesc; // 0x78
		::System::Single CameraHeight; // 0x88
		::RPG::Client::TextID WorldLanguageName; // 0x90

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
