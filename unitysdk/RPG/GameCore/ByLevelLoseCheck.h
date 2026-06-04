#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_05BD9235D26A07C4_OFFSET UNITYSDK_OFFSET(0x19574A50)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_05DF65112D8983BC_OFFSET UNITYSDK_OFFSET(0x19574AD0)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_A8202CAC86D4EF53_OFFSET UNITYSDK_OFFSET(0x19574910)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_D3997D30D1882F69_OFFSET UNITYSDK_OFFSET(0x19574840)
#define RPG_GAMECORE_BYLEVELLOSECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x195748C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLevelLoseCheck_TypeDefinitionIndex = 22156;

	class ByLevelLoseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D3997D30D1882F69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_D3997D30D1882F69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8202CAC86D4EF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_A8202CAC86D4EF53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05BD9235D26A07C4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_05BD9235D26A07C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_05DF65112D8983BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_05DF65112D8983BC_OFFSET))(a1, a2);
		}
	};
}
