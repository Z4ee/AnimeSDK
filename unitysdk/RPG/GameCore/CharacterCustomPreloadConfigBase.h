#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_METHOD_2_1236E91E49BFEDA9_OFFSET UNITYSDK_OFFSET(0x1D120780)
#define RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_METHOD_2_B6DB460374047DDD_OFFSET UNITYSDK_OFFSET(0x1D1205D0)
#define RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D120770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCustomPreloadConfigBase_TypeDefinitionIndex = 16171;

	class CharacterCustomPreloadConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6DB460374047DDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterCustomPreloadConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterCustomPreloadConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_METHOD_2_B6DB460374047DDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1236E91E49BFEDA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterCustomPreloadConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterCustomPreloadConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCUSTOMPRELOADCONFIGBASE_METHOD_2_1236E91E49BFEDA9_OFFSET))(a1, a2);
		}
	};
}
