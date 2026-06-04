#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYAND_METHOD_4_0F2DABF5A9526733_OFFSET UNITYSDK_OFFSET(0x194F15B0)
#define RPG_GAMECORE_BYAND_METHOD_4_2704611B9211D230_OFFSET UNITYSDK_OFFSET(0x194F1350)
#define RPG_GAMECORE_BYAND_METHOD_4_4D3F2CCB29EF729E_OFFSET UNITYSDK_OFFSET(0x194F1420)
#define RPG_GAMECORE_BYAND_METHOD_4_E1F6B559862B2AAC_OFFSET UNITYSDK_OFFSET(0x194F1630)
#define RPG_GAMECORE_BYAND__CTOR_OFFSET UNITYSDK_OFFSET(0x194F13D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnd_TypeDefinitionIndex = 22492;

	class ByAnd : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* PredicateList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2704611B9211D230(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_2704611B9211D230_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D3F2CCB29EF729E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_4D3F2CCB29EF729E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F2DABF5A9526733(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_0F2DABF5A9526733_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E1F6B559862B2AAC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_E1F6B559862B2AAC_OFFSET))(a1, a2);
		}
	};
}
