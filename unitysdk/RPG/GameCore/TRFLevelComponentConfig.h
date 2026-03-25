#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TRFStageConfig; }

#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_7DD02624E46F5658_OFFSET UNITYSDK_OFFSET(0x177A6DC0)
#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_9BB024A06E55263D_OFFSET UNITYSDK_OFFSET(0x177A6E70)
#define RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177A6E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFLevelComponentConfig_TypeDefinitionIndex = 17341;

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

		static ::System::Void Method_3_7DD02624E46F5658(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFLevelComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFLevelComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_7DD02624E46F5658_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BB024A06E55263D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFLevelComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFLevelComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFLEVELCOMPONENTCONFIG_METHOD_3_9BB024A06E55263D_OFFSET))(a1, a2);
		}
	};
}
