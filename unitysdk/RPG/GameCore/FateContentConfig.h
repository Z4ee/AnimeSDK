#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }

#define RPG_GAMECORE_FATECONTENTCONFIG_METHOD_2_BF717740BF549F68_OFFSET UNITYSDK_OFFSET(0x171C53E0)
#define RPG_GAMECORE_FATECONTENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171C5490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateContentConfig_TypeDefinitionIndex = 15226;

	class FateContentConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateTextDynamicParamConfig* TextDynamicParamConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONTENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BF717740BF549F68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateContentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateContentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONTENTCONFIG_METHOD_2_BF717740BF549F68_OFFSET))(a1, a2);
		}
	};
}
