#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CutSceneSFXItem; }

#define RPG_GAMECORE_CUTSCENESFXCONFIG_METHOD_2_FCA0C7F3FB3091C9_OFFSET UNITYSDK_OFFSET(0x1D00EA30)
#define RPG_GAMECORE_CUTSCENESFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D00EB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutSceneSFXConfig_TypeDefinitionIndex = 16825;

	class CutSceneSFXConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CutSceneSFXItem*>* SFXList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FCA0C7F3FB3091C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CutSceneSFXConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CutSceneSFXConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXCONFIG_METHOD_2_FCA0C7F3FB3091C9_OFFSET))(a1, a2);
		}
	};
}
