#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_3ABAA03C04190E30_OFFSET UNITYSDK_OFFSET(0x195D7280)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_676730271EAEFEDA_OFFSET UNITYSDK_OFFSET(0x195D7350)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_893583F802E514D5_OFFSET UNITYSDK_OFFSET(0x195D7490)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_AD6F6418135057E9_OFFSET UNITYSDK_OFFSET(0x195D7510)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x195D7300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySkipNextTeleportEffect_TypeDefinitionIndex = 19443;

	class BySkipNextTeleportEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3ABAA03C04190E30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_3ABAA03C04190E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_676730271EAEFEDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_676730271EAEFEDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_893583F802E514D5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_893583F802E514D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AD6F6418135057E9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_AD6F6418135057E9_OFFSET))(a1, a2);
		}
	};
}
