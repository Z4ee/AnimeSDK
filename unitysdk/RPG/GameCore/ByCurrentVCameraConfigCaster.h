#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_4CBA0C5C17D1D227_OFFSET UNITYSDK_OFFSET(0x19545280)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_88BCAB2C23003C5C_OFFSET UNITYSDK_OFFSET(0x19545400)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_A94DFA45E1886EE9_OFFSET UNITYSDK_OFFSET(0x195451B0)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_E805DA51464D8C25_OFFSET UNITYSDK_OFFSET(0x19545480)
#define RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19545230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentVCameraConfigCaster_TypeDefinitionIndex = 22427;

	class ByCurrentVCameraConfigCaster : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A94DFA45E1886EE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_A94DFA45E1886EE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4CBA0C5C17D1D227(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_4CBA0C5C17D1D227_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88BCAB2C23003C5C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_88BCAB2C23003C5C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E805DA51464D8C25(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentVCameraConfigCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentVCameraConfigCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTVCAMERACONFIGCASTER_METHOD_4_E805DA51464D8C25_OFFSET))(a1, a2);
		}
	};
}
