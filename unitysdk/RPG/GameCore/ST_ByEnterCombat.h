#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_34B2DD4863B37235_OFFSET UNITYSDK_OFFSET(0x19C12C30)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_471A5980B0F9EFD4_OFFSET UNITYSDK_OFFSET(0x19C129A0)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_BF4700FE89A99971_OFFSET UNITYSDK_OFFSET(0x19C12BB0)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_DF058C859678E4DE_OFFSET UNITYSDK_OFFSET(0x19C12A70)
#define RPG_GAMECORE_ST_BYENTERCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C12A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByEnterCombat_TypeDefinitionIndex = 18967;

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

		static ::System::Void Method_4_BF4700FE89A99971(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_BF4700FE89A99971_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34B2DD4863B37235(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_METHOD_4_34B2DD4863B37235_OFFSET))(a1, a2);
		}
	};
}
