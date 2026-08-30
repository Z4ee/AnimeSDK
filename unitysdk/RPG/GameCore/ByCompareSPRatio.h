#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_1828EB7095350F86_OFFSET UNITYSDK_OFFSET(0x1CEF8AE0)
#define RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_683342BECD8095B0_OFFSET UNITYSDK_OFFSET(0x1CEF8B10)
#define RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_E3FD2EEB7E142593_OFFSET UNITYSDK_OFFSET(0x1CEF8870)
#define RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_F375440F2DC42FF6_OFFSET UNITYSDK_OFFSET(0x1CEF88B0)
#define RPG_GAMECORE_BYCOMPARESPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF88A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSPRatio_TypeDefinitionIndex = 22737;

	class ByCompareSPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E3FD2EEB7E142593(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_E3FD2EEB7E142593_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F375440F2DC42FF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_F375440F2DC42FF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1828EB7095350F86(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_1828EB7095350F86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_683342BECD8095B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPRATIO_METHOD_4_683342BECD8095B0_OFFSET))(a1, a2);
		}
	};
}
