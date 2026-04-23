#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E166E0)
#define RPG_GAMECORE_SETDYNAMICVALUE_METHOD_4_6D5F9207B74221DB_OFFSET UNITYSDK_OFFSET(0x18E16490)
#define RPG_GAMECORE_SETDYNAMICVALUE_METHOD_4_BF3DB2E2C72F0610_OFFSET UNITYSDK_OFFSET(0x18E161B0)
#define RPG_GAMECORE_SETDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E16410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValue_TypeDefinitionIndex = 22816;

	class SetDynamicValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::DynamicString* DynamicKey; // 0x30
		::System::Boolean SkipInCharmAction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BF3DB2E2C72F0610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_METHOD_4_BF3DB2E2C72F0610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D5F9207B74221DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_METHOD_4_6D5F9207B74221DB_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
