#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C45E10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_METHOD_4_90D928BC1767DB68_OFFSET UNITYSDK_OFFSET(0x19C45C20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_METHOD_4_A4A0D8B4DB26CD14_OFFSET UNITYSDK_OFFSET(0x19C45B50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C45BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusResistance_TypeDefinitionIndex = 22294;

	class SetDynamicValueByStatusResistance : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A4A0D8B4DB26CD14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusResistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusResistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_METHOD_4_A4A0D8B4DB26CD14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_90D928BC1767DB68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusResistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusResistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_METHOD_4_90D928BC1767DB68_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSRESISTANCE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
