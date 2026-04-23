#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG_METHOD_2_721581941BBD4EBD_OFFSET UNITYSDK_OFFSET(0x18901090)
#define RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18901170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimExtraLevelGraphConfig_TypeDefinitionIndex = 17582;

	class FiveDimExtraLevelGraphConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraph; // 0x10
		::RPG::GameCore::LevelGraphValueSource* LevelGraphValueSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_721581941BBD4EBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimExtraLevelGraphConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimExtraLevelGraphConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEXTRALEVELGRAPHCONFIG_METHOD_2_721581941BBD4EBD_OFFSET))(a1, a2);
		}
	};
}
