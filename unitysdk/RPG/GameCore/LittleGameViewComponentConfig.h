#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_METHOD_3_272CEDFB04ED3720_OFFSET UNITYSDK_OFFSET(0x198A29E0)
#define RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_METHOD_3_295A0DD05A6799C6_OFFSET UNITYSDK_OFFSET(0x1989BFC0)
#define RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1989BFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameViewComponentConfig_TypeDefinitionIndex = 17930;

	class LittleGameViewComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Boolean UseParentPanelUV; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_272CEDFB04ED3720(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameViewComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameViewComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_METHOD_3_272CEDFB04ED3720_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_295A0DD05A6799C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameViewComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameViewComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEVIEWCOMPONENTCONFIG_METHOD_3_295A0DD05A6799C6_OFFSET))(a1, a2);
		}
	};
}
