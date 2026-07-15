#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_059E7521D10A3121_OFFSET UNITYSDK_OFFSET(0x1B2BC840)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_528B68C5BE0A89C2_OFFSET UNITYSDK_OFFSET(0x1B2BCA30)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_D941DADAEAFDB1A4_OFFSET UNITYSDK_OFFSET(0x1B2BC880)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_E2F4CA77AC1712A4_OFFSET UNITYSDK_OFFSET(0x1B2BCA00)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2BC870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetHitBoxActive_TypeDefinitionIndex = 19434;

	class ByTargetHitBoxActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_059E7521D10A3121(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_059E7521D10A3121_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D941DADAEAFDB1A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_D941DADAEAFDB1A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2F4CA77AC1712A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_E2F4CA77AC1712A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_528B68C5BE0A89C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_528B68C5BE0A89C2_OFFSET))(a1, a2);
		}
	};
}
