#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_METHOD_2_774480EBA5C55D60_OFFSET UNITYSDK_OFFSET(0x1BCC0A80)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_METHOD_2_C72B1DCE5C0A2B54_OFFSET UNITYSDK_OFFSET(0x1BCC0C30)
#define RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC0C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityMoveBakedConfig_TypeDefinitionIndex = 18142;

	class LittleGameEntityMoveBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_774480EBA5C55D60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityMoveBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityMoveBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_METHOD_2_774480EBA5C55D60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C72B1DCE5C0A2B54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYMOVEBAKEDCONFIG_METHOD_2_C72B1DCE5C0A2B54_OFFSET))(a1, a2);
		}
	};
}
