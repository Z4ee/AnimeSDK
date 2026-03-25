#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DOFConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEPLAYERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1713D120)
#define RPG_GAMECORE_CREATEPLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1713D260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePlayerConfig_TypeDefinitionIndex = 22454;

	class CreatePlayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnviroProfile; // 0x10
		::RPG::GameCore::DOFConfig* OverrallDOF; // 0x18
		::RPG::GameCore::DOFConfig* FeaturedDOF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CreatePlayerConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePlayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
