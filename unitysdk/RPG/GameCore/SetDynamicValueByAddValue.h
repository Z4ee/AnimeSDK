#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E1CA60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_METHOD_4_2F971818F4DB2272_OFFSET UNITYSDK_OFFSET(0x18E1C9E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_METHOD_4_BB2BA99D870B607E_OFFSET UNITYSDK_OFFSET(0x18E19BF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E19BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAddValue_TypeDefinitionIndex = 21810;

	class SetDynamicValueByAddValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Key; // 0x20
		::RPG::GameCore::DynamicFloat* AddValue; // 0x28
		::RPG::GameCore::DynamicFloat* Min; // 0x30
		::RPG::GameCore::DynamicFloat* Max; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2F971818F4DB2272(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAddValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAddValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_METHOD_4_2F971818F4DB2272_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB2BA99D870B607E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAddValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAddValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_METHOD_4_BB2BA99D870B607E_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADDVALUE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
