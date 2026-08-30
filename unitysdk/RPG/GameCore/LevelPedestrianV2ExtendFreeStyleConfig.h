#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyle; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG_METHOD_2_759BF9A10EE22F5D_OFFSET UNITYSDK_OFFSET(0x1C129FF0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12A0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ExtendFreeStyleConfig_TypeDefinitionIndex = 17124;

	class LevelPedestrianV2ExtendFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*>* Configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_759BF9A10EE22F5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLECONFIG_METHOD_2_759BF9A10EE22F5D_OFFSET))(a1, a2);
		}
	};
}
