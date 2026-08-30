#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_0A7A9C07107D227D_OFFSET UNITYSDK_OFFSET(0x1DEA7130)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_5B4DA16DD6217905_OFFSET UNITYSDK_OFFSET(0x1DEA7190)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_92F60AC2321159B0_OFFSET UNITYSDK_OFFSET(0x1DEA6E40)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_ED7A0950C7C936B9_OFFSET UNITYSDK_OFFSET(0x1DEA6EE0)
#define RPG_GAMECORE_VE_RTMODIFIERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtModifierProperty_TypeDefinitionIndex = 23996;

	class VE_RtModifierProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierName; // 0x28
		::RPG::GameCore::NumOperationType OperationType; // 0x30
		::RPG::GameCore::RtModifierPropertyType Property; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_92F60AC2321159B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtModifierProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtModifierProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_92F60AC2321159B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED7A0950C7C936B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_ED7A0950C7C936B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A7A9C07107D227D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_0A7A9C07107D227D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B4DA16DD6217905(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtModifierProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtModifierProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTMODIFIERPROPERTY_METHOD_3_5B4DA16DD6217905_OFFSET))(a1, a2);
		}
	};
}
