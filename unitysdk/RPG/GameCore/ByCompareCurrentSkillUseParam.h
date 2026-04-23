#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_E10A1F890BC682ED_OFFSET UNITYSDK_OFFSET(0x1872A490)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_FC12403D96AEBABD_OFFSET UNITYSDK_OFFSET(0x1872A3C0)
#define RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1872A440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentSkillUseParam_TypeDefinitionIndex = 21439;

	class ByCompareCurrentSkillUseParam : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FC12403D96AEBABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_FC12403D96AEBABD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E10A1F890BC682ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentSkillUseParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentSkillUseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTSKILLUSEPARAM_METHOD_4_E10A1F890BC682ED_OFFSET))(a1, a2);
		}
	};
}
