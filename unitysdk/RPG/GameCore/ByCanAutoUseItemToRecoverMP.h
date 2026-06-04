#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_136389DBE8071417_OFFSET UNITYSDK_OFFSET(0x194F6020)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_7B77956AF30008FD_OFFSET UNITYSDK_OFFSET(0x194F5F50)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_A1EFE23EB0579DC8_OFFSET UNITYSDK_OFFSET(0x194F61E0)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_E19E0AE201616380_OFFSET UNITYSDK_OFFSET(0x194F6160)
#define RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP__CTOR_OFFSET UNITYSDK_OFFSET(0x194F5FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCanAutoUseItemToRecoverMP_TypeDefinitionIndex = 19060;

	class ByCanAutoUseItemToRecoverMP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7B77956AF30008FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_7B77956AF30008FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_136389DBE8071417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_136389DBE8071417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E19E0AE201616380(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_E19E0AE201616380_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1EFE23EB0579DC8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanAutoUseItemToRecoverMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANAUTOUSEITEMTORECOVERMP_METHOD_4_A1EFE23EB0579DC8_OFFSET))(a1, a2);
		}
	};
}
