#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TRFStageConfig; }

#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_A797369F3F46F781_OFFSET UNITYSDK_OFFSET(0x1D59C710)
#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_B803C0ED58918F68_OFFSET UNITYSDK_OFFSET(0x1D59C780)
#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59C770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFLevelComponentConfig_TypeDefinitionIndex = 18684;

	class TRFLevelComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TRFStageConfig*>* Stages; // 0x10
		::System::Single GridWidth; // 0x18
		::System::Single GridHeight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A797369F3F46F781(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFLevelComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFLevelComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_A797369F3F46F781_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B803C0ED58918F68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFLevelComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFLevelComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_B803C0ED58918F68_OFFSET))(a1, a2);
		}
	};
}
