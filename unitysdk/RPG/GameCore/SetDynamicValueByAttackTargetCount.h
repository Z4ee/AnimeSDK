#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4ED600)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_METHOD_4_6FBC337039F9EE18_OFFSET UNITYSDK_OFFSET(0x1D4ED450)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_METHOD_4_8D5CB5AB96FB4775_OFFSET UNITYSDK_OFFSET(0x1D4ED410)
#define RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4ED440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAttackTargetCount_TypeDefinitionIndex = 22827;

	class SetDynamicValueByAttackTargetCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* Attacker; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8D5CB5AB96FB4775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_METHOD_4_8D5CB5AB96FB4775_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FBC337039F9EE18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAttackTargetCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAttackTargetCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_METHOD_4_6FBC337039F9EE18_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYATTACKTARGETCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
