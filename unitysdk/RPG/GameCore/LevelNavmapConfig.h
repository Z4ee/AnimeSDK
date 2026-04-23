#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavmapArea; }
namespace RPG::GameCore { class LevelNavmapSubmapConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNAVMAPCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4EDE0)
#define RPG_GAMECORE_LEVELNAVMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4F2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavmapConfig_TypeDefinitionIndex = 16345;

	class LevelNavmapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 OriginalCenter; // 0x10
		::RPG::MVector3 OriginalSize; // 0x1C
		::Il2CppArray<::RPG::GameCore::LevelNavmapArea*>* AreaList; // 0x28
		::System::String* BackgroundMapSprite; // 0x30
		::RPG::MVector2 BackgroundMapSpriteSize; // 0x38
		::System::Boolean CombineLayerAutomatic; // 0x40
		::System::Single Scale; // 0x44
		::System::Single CompleteScale; // 0x48
		::Il2CppArray<::System::UInt32>* MapLayerList; // 0x50
		::System::Single Rotation; // 0x58
		::Il2CppArray<::RPG::GameCore::LevelNavmapSubmapConfig*>* SubmapList; // 0x60
		::System::Single UIScaleLowerRatio; // 0x68
		::System::Single UIScaleUpperRatio; // 0x6C
		::RPG::MVector2 UIDefaultCenter; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavmapConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavmapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVMAPCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
