#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_1A9EA5D79C0122A6_OFFSET UNITYSDK_OFFSET(0x19C0F410)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_93BCF57104C1002F_OFFSET UNITYSDK_OFFSET(0x19C0F180)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_A52784F05E68E49E_OFFSET UNITYSDK_OFFSET(0x19C0F390)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_F1546C9832841F45_OFFSET UNITYSDK_OFFSET(0x19C0F250)
#define RPG_GAMECORE_ST_BYAIHANGUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C0F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAIHangUp_TypeDefinitionIndex = 18952;

	class ST_ByAIHangUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_93BCF57104C1002F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_93BCF57104C1002F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1546C9832841F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_F1546C9832841F45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A52784F05E68E49E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_A52784F05E68E49E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A9EA5D79C0122A6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_1A9EA5D79C0122A6_OFFSET))(a1, a2);
		}
	};
}
