#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_METHOD_3_79AA379A17A0B48F_OFFSET UNITYSDK_OFFSET(0x176C1490)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_METHOD_3_C15AAEBF3C8B2594_OFFSET UNITYSDK_OFFSET(0x176C1410)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x176C1460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightDropCount_TypeDefinitionIndex = 20715;

	class SetDynamicValueByGridFightDropCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::GridFightDropCfgType DropType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C15AAEBF3C8B2594(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_METHOD_3_C15AAEBF3C8B2594_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_79AA379A17A0B48F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightDropCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTDROPCOUNT_METHOD_3_79AA379A17A0B48F_OFFSET))(a1, a2);
		}
	};
}
