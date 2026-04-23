#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_471A5980B0F9EFD4_OFFSET UNITYSDK_OFFSET(0x18DECC50)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_DF058C859678E4DE_OFFSET UNITYSDK_OFFSET(0x18DECD20)
#define RPG_GAMECORE_ST_BYENTERCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DECCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByEnterCombat_TypeDefinitionIndex = 19017;

	class ST_ByEnterCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_471A5980B0F9EFD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_471A5980B0F9EFD4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DF058C859678E4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_DF058C859678E4DE_OFFSET))(a1, a2);
		}
	};
}
