#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG_METHOD_2_2B6091C022170865_OFFSET UNITYSDK_OFFSET(0x1D85ADE0)
#define RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85AE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEditorLoadStageConfig_TypeDefinitionIndex = 18625;

	class FiveDimEditorLoadStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2B6091C022170865(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEditorLoadStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEditorLoadStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG_METHOD_2_2B6091C022170865_OFFSET))(a1, a2);
		}
	};
}
