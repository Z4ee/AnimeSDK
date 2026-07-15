#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_44B8B82B63FE72CD_OFFSET UNITYSDK_OFFSET(0x1BE0D7D0)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_4C4DDF99F66D9236_OFFSET UNITYSDK_OFFSET(0x1BE0D600)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_67A33D487B9EA0D7_OFFSET UNITYSDK_OFFSET(0x1BE0D640)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_E6C521979C4A03DA_OFFSET UNITYSDK_OFFSET(0x1BE0D800)
#define RPG_GAMECORE_ADVBYCHECKGAMEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0D630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckGameMode_TypeDefinitionIndex = 19993;

	class AdvByCheckGameMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameModeType>* GameModes; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4C4DDF99F66D9236(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckGameMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckGameMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_4C4DDF99F66D9236_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67A33D487B9EA0D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_67A33D487B9EA0D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_44B8B82B63FE72CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_44B8B82B63FE72CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6C521979C4A03DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckGameMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckGameMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKGAMEMODE_METHOD_4_E6C521979C4A03DA_OFFSET))(a1, a2);
		}
	};
}
