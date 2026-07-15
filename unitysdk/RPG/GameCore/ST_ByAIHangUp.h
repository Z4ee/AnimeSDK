#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_06850413CB45E3A2_OFFSET UNITYSDK_OFFSET(0x1B776C30)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_80DF481AD5181F86_OFFSET UNITYSDK_OFFSET(0x1B776A80)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_91AD608D1235F88F_OFFSET UNITYSDK_OFFSET(0x1B776C00)
#define RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_F1546C9832841F45_OFFSET UNITYSDK_OFFSET(0x1B776AC0)
#define RPG_GAMECORE_ST_BYAIHANGUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B776AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByAIHangUp_TypeDefinitionIndex = 19302;

	class ST_ByAIHangUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_80DF481AD5181F86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_80DF481AD5181F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1546C9832841F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_F1546C9832841F45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_91AD608D1235F88F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_91AD608D1235F88F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_06850413CB45E3A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYAIHANGUP_METHOD_4_06850413CB45E3A2_OFFSET))(a1, a2);
		}
	};
}
