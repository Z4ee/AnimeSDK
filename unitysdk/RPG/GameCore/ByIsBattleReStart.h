#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_7220AD4DE1B277B2_OFFSET UNITYSDK_OFFSET(0x1955A920)
#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_BE7F71DD40BD959A_OFFSET UNITYSDK_OFFSET(0x1955A8A0)
#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_DA16FE4BEBEB98B3_OFFSET UNITYSDK_OFFSET(0x1955A690)
#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_EEBD00D884B09D39_OFFSET UNITYSDK_OFFSET(0x1955A760)
#define RPG_GAMECORE_BYISBATTLERESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1955A710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBattleReStart_TypeDefinitionIndex = 21788;

	class ByIsBattleReStart : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DA16FE4BEBEB98B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_DA16FE4BEBEB98B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEBD00D884B09D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_EEBD00D884B09D39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BE7F71DD40BD959A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_BE7F71DD40BD959A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7220AD4DE1B277B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_7220AD4DE1B277B2_OFFSET))(a1, a2);
		}
	};
}
