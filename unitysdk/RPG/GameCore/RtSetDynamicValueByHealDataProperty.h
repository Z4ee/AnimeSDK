#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HealDataPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CCECD00)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_1373348A5D9DF5DE_OFFSET UNITYSDK_OFFSET(0x1CCECB10)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_1DD8C566C4A1BA33_OFFSET UNITYSDK_OFFSET(0x1CCECAD0)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCECB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSetDynamicValueByHealDataProperty_TypeDefinitionIndex = 23901;

	class RtSetDynamicValueByHealDataProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::HealDataPropertyType Property; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1DD8C566C4A1BA33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_1DD8C566C4A1BA33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1373348A5D9DF5DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_1373348A5D9DF5DE_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYHEALDATAPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
