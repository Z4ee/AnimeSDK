#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_0993EF4BCE5AAA7E_OFFSET UNITYSDK_OFFSET(0x1CEF9340)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_8CF188196116E8C7_OFFSET UNITYSDK_OFFSET(0x1CEF9100)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_ACAF3929D5A24570_OFFSET UNITYSDK_OFFSET(0x1CEF9310)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_BFBC711682BA2846_OFFSET UNITYSDK_OFFSET(0x1CEF9140)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF9130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScepterFuncType_TypeDefinitionIndex = 22848;

	class ByCompareScepterFuncType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicScepterFuncType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8CF188196116E8C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_8CF188196116E8C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFBC711682BA2846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_BFBC711682BA2846_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ACAF3929D5A24570(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_ACAF3929D5A24570_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0993EF4BCE5AAA7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_0993EF4BCE5AAA7E_OFFSET))(a1, a2);
		}
	};
}
