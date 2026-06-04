#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_0EB4FA5737703CFE_OFFSET UNITYSDK_OFFSET(0x19D05E30)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_47B927A482F43FA7_OFFSET UNITYSDK_OFFSET(0x19CF9DC0)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_5B91C246067378F7_OFFSET UNITYSDK_OFFSET(0x19D0D280)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_E9EA7F2DE0941949_OFFSET UNITYSDK_OFFSET(0x19D0D1A0)
#define RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastZombieEntity_TypeDefinitionIndex = 22684;

	class TargetFetchLastZombieEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E9EA7F2DE0941949(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_E9EA7F2DE0941949_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47B927A482F43FA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_47B927A482F43FA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0EB4FA5737703CFE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_0EB4FA5737703CFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B91C246067378F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastZombieEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastZombieEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTZOMBIEENTITY_METHOD_4_5B91C246067378F7_OFFSET))(a1, a2);
		}
	};
}
