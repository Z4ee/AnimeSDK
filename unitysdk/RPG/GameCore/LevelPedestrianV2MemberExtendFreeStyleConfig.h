#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG_METHOD_2_38CE0B66D03018AF_OFFSET UNITYSDK_OFFSET(0x1C12DA90)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12DB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberExtendFreeStyleConfig_TypeDefinitionIndex = 17122;

	class LevelPedestrianV2MemberExtendFreeStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*>* Configs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_38CE0B66D03018AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLECONFIG_METHOD_2_38CE0B66D03018AF_OFFSET))(a1, a2);
		}
	};
}
