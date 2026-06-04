#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_74B5D4CD2F4CA65A_OFFSET UNITYSDK_OFFSET(0x195D96E0)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_7C211C6422B8FA39_OFFSET UNITYSDK_OFFSET(0x195D9930)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_8488B11CA572A8D4_OFFSET UNITYSDK_OFFSET(0x195D99B0)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_D941DADAEAFDB1A4_OFFSET UNITYSDK_OFFSET(0x195D97B0)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x195D9760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetHitBoxActive_TypeDefinitionIndex = 19079;

	class ByTargetHitBoxActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74B5D4CD2F4CA65A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_74B5D4CD2F4CA65A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D941DADAEAFDB1A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_D941DADAEAFDB1A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C211C6422B8FA39(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_7C211C6422B8FA39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8488B11CA572A8D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_METHOD_4_8488B11CA572A8D4_OFFSET))(a1, a2);
		}
	};
}
