#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4EEBE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_7DB35A4B7CCF21D0_OFFSET UNITYSDK_OFFSET(0x1D4EE9F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_ED62D92A49158885_OFFSET UNITYSDK_OFFSET(0x1D4EEA30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EEA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBreakBaseDamage_TypeDefinitionIndex = 23329;

	class SetDynamicValueByBreakBaseDamage : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7DB35A4B7CCF21D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_7DB35A4B7CCF21D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ED62D92A49158885(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_ED62D92A49158885_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
