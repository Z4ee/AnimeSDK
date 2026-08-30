#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG_METHOD_2_C5BE7F79038C5014_OFFSET UNITYSDK_OFFSET(0x1D192F00)
#define RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D193030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenMiniGameGradeConfig_TypeDefinitionIndex = 16610;

	class HipplenMiniGameGradeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenGameGradeType Grade; // 0x10
		::System::UInt32 RequireTimes; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C5BE7F79038C5014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenMiniGameGradeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenMiniGameGradeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENMINIGAMEGRADECONFIG_METHOD_2_C5BE7F79038C5014_OFFSET))(a1, a2);
		}
	};
}
