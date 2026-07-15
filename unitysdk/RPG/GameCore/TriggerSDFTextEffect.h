#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_4BFC73E1E6DE1378_OFFSET UNITYSDK_OFFSET(0x1B05BFC0)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_67137DCE65BFE32C_OFFSET UNITYSDK_OFFSET(0x1B05BF50)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_6AF613AFDA0FD020_OFFSET UNITYSDK_OFFSET(0x1B04B360)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_D45C30B15CD0A2DC_OFFSET UNITYSDK_OFFSET(0x1B050500)
#define RPG_GAMECORE_TRIGGERSDFTEXTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04B310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSDFTextEffect_TypeDefinitionIndex = 22787;

	class TriggerSDFTextEffect : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::RPG::Client::TextID TextContent; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_67137DCE65BFE32C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_67137DCE65BFE32C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6AF613AFDA0FD020(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_6AF613AFDA0FD020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D45C30B15CD0A2DC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_D45C30B15CD0A2DC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4BFC73E1E6DE1378(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSDFTEXTEFFECT_METHOD_4_4BFC73E1E6DE1378_OFFSET))(a1, a2);
		}
	};
}
