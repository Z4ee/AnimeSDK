#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_09D2C9D48E4787C6_OFFSET UNITYSDK_OFFSET(0x1952E8D0)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_2B3B8D428A8B4B2F_OFFSET UNITYSDK_OFFSET(0x1952EBF0)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_BFBC711682BA2846_OFFSET UNITYSDK_OFFSET(0x1952E9A0)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_CD141103C7F90C08_OFFSET UNITYSDK_OFFSET(0x1952EB70)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1952E950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScepterFuncType_TypeDefinitionIndex = 21852;

	class ByCompareScepterFuncType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicScepterFuncType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09D2C9D48E4787C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_09D2C9D48E4787C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFBC711682BA2846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_BFBC711682BA2846_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CD141103C7F90C08(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_CD141103C7F90C08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B3B8D428A8B4B2F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_2B3B8D428A8B4B2F_OFFSET))(a1, a2);
		}
	};
}
