#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICENTITYPARAM_METHOD_3_011D1A4769FE1F22_OFFSET UNITYSDK_OFFSET(0x18E15410)
#define RPG_GAMECORE_SETDYNAMICENTITYPARAM_METHOD_3_E473DA5A0230B331_OFFSET UNITYSDK_OFFSET(0x18E15490)
#define RPG_GAMECORE_SETDYNAMICENTITYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E15460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicEntityParam_TypeDefinitionIndex = 21563;

	class SetDynamicEntityParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ParamTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICENTITYPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_011D1A4769FE1F22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicEntityParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicEntityParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICENTITYPARAM_METHOD_3_011D1A4769FE1F22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E473DA5A0230B331(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICENTITYPARAM_METHOD_3_E473DA5A0230B331_OFFSET))(a1, a2);
		}
	};
}
