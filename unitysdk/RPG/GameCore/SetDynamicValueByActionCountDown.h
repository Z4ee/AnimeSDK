#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E818ED0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_9263E45F201597C3_OFFSET UNITYSDK_OFFSET(0x1E818D60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_B8F7D5595E8F455C_OFFSET UNITYSDK_OFFSET(0x1E818D20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E818D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByActionCountDown_TypeDefinitionIndex = 23419;

	class SetDynamicValueByActionCountDown : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B8F7D5595E8F455C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_B8F7D5595E8F455C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9263E45F201597C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_9263E45F201597C3_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
