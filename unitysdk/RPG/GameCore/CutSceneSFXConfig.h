#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CutSceneSFXItem; }

#define RPG_GAMECORE_CUTSCENESFXCONFIG_METHOD_2_F6D2761B470AC1B4_OFFSET UNITYSDK_OFFSET(0x188493E0)
#define RPG_GAMECORE_CUTSCENESFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188494E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutSceneSFXConfig_TypeDefinitionIndex = 16103;

	class CutSceneSFXConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CutSceneSFXItem*>* SFXList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F6D2761B470AC1B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CutSceneSFXConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CutSceneSFXConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXCONFIG_METHOD_2_F6D2761B470AC1B4_OFFSET))(a1, a2);
		}
	};
}
