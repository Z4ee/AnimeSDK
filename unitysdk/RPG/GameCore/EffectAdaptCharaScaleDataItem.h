#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM_METHOD_2_F00076090E402343_OFFSET UNITYSDK_OFFSET(0x1BB2FDB0)
#define RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB2FF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectAdaptCharaScaleDataItem_TypeDefinitionIndex = 15843;

	class EffectAdaptCharaScaleDataItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MazeScale; // 0x10
		::System::Single BattleScale; // 0x14
		::System::Single ActivityScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F00076090E402343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectAdaptCharaScaleDataItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectAdaptCharaScaleDataItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTADAPTCHARASCALEDATAITEM_METHOD_2_F00076090E402343_OFFSET))(a1, a2);
		}
	};
}
