#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYAND_METHOD_4_4D3F2CCB29EF729E_OFFSET UNITYSDK_OFFSET(0x1C2F0D00)
#define RPG_GAMECORE_BYAND_METHOD_4_8DAD6296F3DA3DEF_OFFSET UNITYSDK_OFFSET(0x1C2F0CC0)
#define RPG_GAMECORE_BYAND_METHOD_4_96529E2BA4FAA28A_OFFSET UNITYSDK_OFFSET(0x1C2F0E90)
#define RPG_GAMECORE_BYAND_METHOD_4_9B547978CD85A3AD_OFFSET UNITYSDK_OFFSET(0x1C2F0EC0)
#define RPG_GAMECORE_BYAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F0CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAnd_TypeDefinitionIndex = 23522;

	class ByAnd : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* PredicateList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8DAD6296F3DA3DEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_8DAD6296F3DA3DEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D3F2CCB29EF729E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_4D3F2CCB29EF729E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96529E2BA4FAA28A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_96529E2BA4FAA28A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B547978CD85A3AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYAND_METHOD_4_9B547978CD85A3AD_OFFSET))(a1, a2);
		}
	};
}
