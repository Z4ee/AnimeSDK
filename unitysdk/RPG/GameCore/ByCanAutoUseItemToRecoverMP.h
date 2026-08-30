#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_136389DBE8071417_OFFSET UNITYSDK_OFFSET(0x1C2F6CB0)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_543B12DFF3941E7D_OFFSET UNITYSDK_OFFSET(0x1C2F6DF0)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_66AEEE0AB903BF94_OFFSET UNITYSDK_OFFSET(0x1C2F6E20)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_879297B1D9D93B5C_OFFSET UNITYSDK_OFFSET(0x1C2F6C70)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F6CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCanAutoUseItemToRecoverMP_TypeDefinitionIndex = 19958;

	class ByCanAutoUseItemToRecoverMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_879297B1D9D93B5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_879297B1D9D93B5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_136389DBE8071417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_136389DBE8071417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_543B12DFF3941E7D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_543B12DFF3941E7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_66AEEE0AB903BF94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_66AEEE0AB903BF94_OFFSET))(a1, a2);
		}
	};
}
