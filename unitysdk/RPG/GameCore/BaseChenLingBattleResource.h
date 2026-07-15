#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_068FD37A1D4C1FEF_OFFSET UNITYSDK_OFFSET(0x1A3DDBB0)
#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_4ADD2245234AE4C1_OFFSET UNITYSDK_OFFSET(0x1A3DD9C0)
#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DDC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleResource_TypeDefinitionIndex = 15169;

	class BaseChenLingBattleResource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsConsume; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4ADD2245234AE4C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleResource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleResource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_4ADD2245234AE4C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_068FD37A1D4C1FEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_068FD37A1D4C1FEF_OFFSET))(a1, a2);
		}
	};
}
