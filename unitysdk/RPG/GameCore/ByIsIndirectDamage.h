#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_32E32D93404A207A_OFFSET UNITYSDK_OFFSET(0x1B29E460)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_3DBB2CEA387AA667_OFFSET UNITYSDK_OFFSET(0x1B29E430)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_8C859060DC125E4E_OFFSET UNITYSDK_OFFSET(0x1B29E2B0)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_FDB08BD1D5BD820D_OFFSET UNITYSDK_OFFSET(0x1B29E2F0)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29E2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsIndirectDamage_TypeDefinitionIndex = 22650;

	class ByIsIndirectDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8C859060DC125E4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_8C859060DC125E4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDB08BD1D5BD820D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_FDB08BD1D5BD820D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DBB2CEA387AA667(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_3DBB2CEA387AA667_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_32E32D93404A207A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_METHOD_4_32E32D93404A207A_OFFSET))(a1, a2);
		}
	};
}
