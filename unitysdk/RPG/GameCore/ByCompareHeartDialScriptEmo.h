#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_24B6FA4C1FFC270A_OFFSET UNITYSDK_OFFSET(0x1700B6B0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_CA6AD7D4B8A0F7FC_OFFSET UNITYSDK_OFFSET(0x1700B780)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1700B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialScriptEmo_TypeDefinitionIndex = 20066;

	class ByCompareHeartDialScriptEmo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScriptID; // 0x20
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_24B6FA4C1FFC270A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_24B6FA4C1FFC270A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CA6AD7D4B8A0F7FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialScriptEmo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialScriptEmo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTEMO_METHOD_4_CA6AD7D4B8A0F7FC_OFFSET))(a1, a2);
		}
	};
}
