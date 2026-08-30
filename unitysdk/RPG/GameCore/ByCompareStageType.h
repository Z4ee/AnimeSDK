#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_1D7F554EDC163107_OFFSET UNITYSDK_OFFSET(0x1CEFF9F0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_43A369266C439582_OFFSET UNITYSDK_OFFSET(0x1CEFFBB0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_CC249D221517F756_OFFSET UNITYSDK_OFFSET(0x1CEFFA30)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_D207070DEFA9AD55_OFFSET UNITYSDK_OFFSET(0x1CEFFBE0)
#define RPG_GAMECORE_BYCOMPARESTAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFFA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStageType_TypeDefinitionIndex = 22803;

	class ByCompareStageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::StageType CurrentStageType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D7F554EDC163107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_1D7F554EDC163107_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC249D221517F756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_CC249D221517F756_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_43A369266C439582(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_43A369266C439582_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D207070DEFA9AD55(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareStageType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGETYPE_METHOD_4_D207070DEFA9AD55_OFFSET))(a1, a2);
		}
	};
}
