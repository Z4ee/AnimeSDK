#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C3FFD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_4BCB6E12A3733FEE_OFFSET UNITYSDK_OFFSET(0x19C3FF50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_9263E45F201597C3_OFFSET UNITYSDK_OFFSET(0x19C358E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x19C35890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByActionCountDown_TypeDefinitionIndex = 22398;

	class SetDynamicValueByActionCountDown : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4BCB6E12A3733FEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByActionCountDown*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_METHOD_4_4BCB6E12A3733FEE_OFFSET))(a1, a2);
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
