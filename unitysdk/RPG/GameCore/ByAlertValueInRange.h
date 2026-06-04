#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_5FFD3A3F2B19F43E_OFFSET UNITYSDK_OFFSET(0x194F02F0)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_661BCDFF6B4561DD_OFFSET UNITYSDK_OFFSET(0x194F0020)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_E0FD39A723391C5D_OFFSET UNITYSDK_OFFSET(0x194F0370)
#define RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_F4F631AD510D0F8D_OFFSET UNITYSDK_OFFSET(0x194F00F0)
#define RPG_GAMECORE_BYALERTVALUEINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x194F00A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAlertValueInRange_TypeDefinitionIndex = 18910;

	class ByAlertValueInRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single AlertValueMin; // 0x28
		::System::Single AlertValueMax; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_661BCDFF6B4561DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAlertValueInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAlertValueInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_661BCDFF6B4561DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F4F631AD510D0F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_F4F631AD510D0F8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5FFD3A3F2B19F43E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_5FFD3A3F2B19F43E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E0FD39A723391C5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYALERTVALUEINRANGE_METHOD_4_E0FD39A723391C5D_OFFSET))(a1, a2);
		}
	};
}
