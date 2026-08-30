#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_2591E11D69B0C63F_OFFSET UNITYSDK_OFFSET(0x1BBE6030)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_4173196C0984BCFA_OFFSET UNITYSDK_OFFSET(0x1BBE6270)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_ABEFB9B88F35F8ED_OFFSET UNITYSDK_OFFSET(0x1BBE6230)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_D90FFB197462FFEE_OFFSET UNITYSDK_OFFSET(0x1BBE6080)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBE6070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveInsertUltraWait_TypeDefinitionIndex = 23283;

	class ByHaveInsertUltraWait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType FirstType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2591E11D69B0C63F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_2591E11D69B0C63F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D90FFB197462FFEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_D90FFB197462FFEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ABEFB9B88F35F8ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_ABEFB9B88F35F8ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4173196C0984BCFA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_4173196C0984BCFA_OFFSET))(a1, a2);
		}
	};
}
