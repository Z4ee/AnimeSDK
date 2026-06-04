#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_7016A51C6654DFF0_OFFSET UNITYSDK_OFFSET(0x19553530)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_B181ADC07A25977D_OFFSET UNITYSDK_OFFSET(0x19553840)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_D90FFB197462FFEE_OFFSET UNITYSDK_OFFSET(0x19553610)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_FA06B9E1F3B2CF4C_OFFSET UNITYSDK_OFFSET(0x195537C0)
#define RPG_GAMECORE_BYHAVEINSERTULTRAWAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x195535B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveInsertUltraWait_TypeDefinitionIndex = 22265;

	class ByHaveInsertUltraWait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::InsertActionType FirstType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7016A51C6654DFF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_7016A51C6654DFF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D90FFB197462FFEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_D90FFB197462FFEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA06B9E1F3B2CF4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_FA06B9E1F3B2CF4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B181ADC07A25977D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveInsertUltraWait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveInsertUltraWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEINSERTULTRAWAIT_METHOD_4_B181ADC07A25977D_OFFSET))(a1, a2);
		}
	};
}
