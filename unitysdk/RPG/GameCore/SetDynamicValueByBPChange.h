#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPChangeValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2DED80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_METHOD_4_22FD030F20E61339_OFFSET UNITYSDK_OFFSET(0x1C2DEB90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_METHOD_4_6E8F7838827AEBEC_OFFSET UNITYSDK_OFFSET(0x1C2DEBD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DEBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBPChange_TypeDefinitionIndex = 22265;

	class SetDynamicValueByBPChange : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::BPChangeValueType ValueType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_22FD030F20E61339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBPChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBPChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_METHOD_4_22FD030F20E61339_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E8F7838827AEBEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBPChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBPChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_METHOD_4_6E8F7838827AEBEC_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBPCHANGE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
