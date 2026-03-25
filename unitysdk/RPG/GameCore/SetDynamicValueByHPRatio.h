#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C1E00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_METHOD_4_606922BBB8C6C33D_OFFSET UNITYSDK_OFFSET(0x176C1C10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_METHOD_4_8A095C1359E986C9_OFFSET UNITYSDK_OFFSET(0x176BC130)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x176BC0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPRatio_TypeDefinitionIndex = 21305;

	class SetDynamicValueByHPRatio : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_606922BBB8C6C33D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_METHOD_4_606922BBB8C6C33D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A095C1359E986C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_METHOD_4_8A095C1359E986C9_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
