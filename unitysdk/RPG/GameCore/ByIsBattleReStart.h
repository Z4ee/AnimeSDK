#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_2F7CF38F84014AB2_OFFSET UNITYSDK_OFFSET(0x1A8D7540)
#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_8B8E399177497076_OFFSET UNITYSDK_OFFSET(0x1A8D76F0)
#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_A640AB8E6BD05703_OFFSET UNITYSDK_OFFSET(0x1A8D76C0)
#define RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_EEBD00D884B09D39_OFFSET UNITYSDK_OFFSET(0x1A8D7580)
#define RPG_GAMECORE_BYISBATTLERESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D7570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBattleReStart_TypeDefinitionIndex = 22214;

	class ByIsBattleReStart : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2F7CF38F84014AB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_2F7CF38F84014AB2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEBD00D884B09D39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_EEBD00D884B09D39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A640AB8E6BD05703(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_A640AB8E6BD05703_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B8E399177497076(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBATTLERESTART_METHOD_4_8B8E399177497076_OFFSET))(a1, a2);
		}
	};
}
