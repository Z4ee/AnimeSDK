#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_01B07689233824A4_OFFSET UNITYSDK_OFFSET(0x1D6AD930)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_9C28652AF0061B1E_OFFSET UNITYSDK_OFFSET(0x1D6AD780)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_A80DCEB4A598840A_OFFSET UNITYSDK_OFFSET(0x1D6AD900)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_DC969AF6B9F0E66F_OFFSET UNITYSDK_OFFSET(0x1D6AD740)
#define RPG_GAMECORE_ADVBYENTITYEXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByEntityExist_TypeDefinitionIndex = 21994;

	class AdvByEntityExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DC969AF6B9F0E66F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_DC969AF6B9F0E66F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C28652AF0061B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_9C28652AF0061B1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A80DCEB4A598840A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_A80DCEB4A598840A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01B07689233824A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_01B07689233824A4_OFFSET))(a1, a2);
		}
	};
}
