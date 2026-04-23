#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_068FD37A1D4C1FEF_OFFSET UNITYSDK_OFFSET(0x186E85D0)
#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_16A4F070C6B7895F_OFFSET UNITYSDK_OFFSET(0x186E83D0)
#define RPG_GAMECORE_BASECHENLINGBATTLERESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x186E8690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleResource_TypeDefinitionIndex = 14942;

	class BaseChenLingBattleResource : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsConsume; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_16A4F070C6B7895F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleResource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleResource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_16A4F070C6B7895F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_068FD37A1D4C1FEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleResource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleResource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLERESOURCE_METHOD_2_068FD37A1D4C1FEF_OFFSET))(a1, a2);
		}
	};
}
