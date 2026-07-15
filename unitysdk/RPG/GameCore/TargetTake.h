#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETTAKE_METHOD_3_0A7EE2D72351A36B_OFFSET UNITYSDK_OFFSET(0x1D0CB420)
#define RPG_GAMECORE_TARGETTAKE_METHOD_3_821CD192B94A0914_OFFSET UNITYSDK_OFFSET(0x1D0CB5C0)
#define RPG_GAMECORE_TARGETTAKE_METHOD_3_9A002E355B91401B_OFFSET UNITYSDK_OFFSET(0x1D0CB5F0)
#define RPG_GAMECORE_TARGETTAKE_METHOD_3_B8832C23CD13191E_OFFSET UNITYSDK_OFFSET(0x1D0CB500)
#define RPG_GAMECORE_TARGETTAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CB4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetTake_TypeDefinitionIndex = 23047;

	class TargetTake : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::DynamicFloat* Count; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A7EE2D72351A36B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetTake*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_0A7EE2D72351A36B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8832C23CD13191E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_B8832C23CD13191E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_821CD192B94A0914(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_821CD192B94A0914_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A002E355B91401B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetTake* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetTake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETTAKE_METHOD_3_9A002E355B91401B_OFFSET))(a1, a2);
		}
	};
}
