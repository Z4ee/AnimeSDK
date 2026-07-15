#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_17C78B4108E93C21_OFFSET UNITYSDK_OFFSET(0x1B2A6190)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_1849436A60ED6C88_OFFSET UNITYSDK_OFFSET(0x1B2A6010)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_285DC114B4328A58_OFFSET UNITYSDK_OFFSET(0x1B2A61C0)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_609E1AB46B18B65B_OFFSET UNITYSDK_OFFSET(0x1B2A6050)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A6040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageFirstWave_TypeDefinitionIndex = 22680;

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
