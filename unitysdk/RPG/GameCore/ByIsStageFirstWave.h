#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_17C78B4108E93C21_OFFSET UNITYSDK_OFFSET(0x1CF49BF0)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_1849436A60ED6C88_OFFSET UNITYSDK_OFFSET(0x1CF49A70)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_285DC114B4328A58_OFFSET UNITYSDK_OFFSET(0x1CF49C20)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_609E1AB46B18B65B_OFFSET UNITYSDK_OFFSET(0x1CF49AB0)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF49AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageFirstWave_TypeDefinitionIndex = 23257;

	class ByIsStageFirstWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1849436A60ED6C88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_1849436A60ED6C88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_609E1AB46B18B65B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_609E1AB46B18B65B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17C78B4108E93C21(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_17C78B4108E93C21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_285DC114B4328A58(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_285DC114B4328A58_OFFSET))(a1, a2);
		}
	};
}
