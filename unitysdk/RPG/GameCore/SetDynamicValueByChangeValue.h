#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChangeValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C40A60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_METHOD_4_2E90541981B6BC3F_OFFSET UNITYSDK_OFFSET(0x19C409E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_METHOD_4_8A588D2E770CD9BF_OFFSET UNITYSDK_OFFSET(0x19C380F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C380A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByChangeValue_TypeDefinitionIndex = 21842;

	class SetDynamicValueByChangeValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::ChangeValueType ValueType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2E90541981B6BC3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByChangeValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByChangeValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_METHOD_4_2E90541981B6BC3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8A588D2E770CD9BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByChangeValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByChangeValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_METHOD_4_8A588D2E770CD9BF_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHANGEVALUE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
