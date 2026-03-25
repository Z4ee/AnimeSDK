#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/ValueFromVariateType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C6FA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_METHOD_4_025A2A8720D8D091_OFFSET UNITYSDK_OFFSET(0x176C6CA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_METHOD_4_7C7D1A6299C83C8E_OFFSET UNITYSDK_OFFSET(0x176C6D70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x176C6D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByVariateType_TypeDefinitionIndex = 20855;

	class SetDynamicValueByVariateType : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::ValueFromVariateType VariateType; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x24
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* WriteTargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_025A2A8720D8D091(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByVariateType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByVariateType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_METHOD_4_025A2A8720D8D091_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C7D1A6299C83C8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByVariateType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByVariateType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_METHOD_4_7C7D1A6299C83C8E_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVARIATETYPE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
