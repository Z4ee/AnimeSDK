#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C30F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_METHOD_4_6BF546781508933C_OFFSET UNITYSDK_OFFSET(0x176BF140)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_METHOD_4_926610D4B813FF98_OFFSET UNITYSDK_OFFSET(0x176C3070)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x176BF0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRaidTargetProgress_TypeDefinitionIndex = 21911;

	class SetDynamicValueByRaidTargetProgress : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicFloat* RaidTargetID; // 0x18
		::System::String* CurrentProgressKey; // 0x20
		::System::String* TotalProgressKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_926610D4B813FF98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_METHOD_4_926610D4B813FF98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6BF546781508933C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_METHOD_4_6BF546781508933C_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRAIDTARGETPROGRESS_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
