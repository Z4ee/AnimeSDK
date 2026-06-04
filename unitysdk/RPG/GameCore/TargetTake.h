#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETTAKE_METHOD_3_84C1FAC03B0C97E8_OFFSET UNITYSDK_OFFSET(0x19D2EFE0)
#define RPG_GAMECORE_TARGETTAKE_METHOD_3_B8832C23CD13191E_OFFSET UNITYSDK_OFFSET(0x19D1F4C0)
#define RPG_GAMECORE_TARGETTAKE_METHOD_3_CD8F1BAA11F67EEC_OFFSET UNITYSDK_OFFSET(0x19D2C5F0)
#define RPG_GAMECORE_TARGETTAKE_METHOD_3_EA417FCA038D72B4_OFFSET UNITYSDK_OFFSET(0x19D2EEE0)
#define RPG_GAMECORE_TARGETTAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1F4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetTake_TypeDefinitionIndex = 22584;

	class TargetTake : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EA417FCA038D72B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetTake*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_EA417FCA038D72B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8832C23CD13191E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_B8832C23CD13191E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD8F1BAA11F67EEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_CD8F1BAA11F67EEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_84C1FAC03B0C97E8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_84C1FAC03B0C97E8_OFFSET))(a1, a2);
		}
	};
}
