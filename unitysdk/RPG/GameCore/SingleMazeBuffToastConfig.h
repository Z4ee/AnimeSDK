#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SINGLEMAZEBUFFTOASTCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E6E5D0)
#define RPG_GAMECORE_SINGLEMAZEBUFFTOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6E830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleMazeBuffToastConfig_TypeDefinitionIndex = 16737;

	class SingleMazeBuffToastConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MazeBuffID; // 0x10
		::RPG::Client::TextID AddMazeBuffText; // 0x18
		::RPG::Client::TextID DelMazeBuffText; // 0x28
		::System::String* IconPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEMAZEBUFFTOASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SingleMazeBuffToastConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleMazeBuffToastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEMAZEBUFFTOASTCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
