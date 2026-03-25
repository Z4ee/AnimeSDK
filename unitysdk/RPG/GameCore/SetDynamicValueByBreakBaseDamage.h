#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C0B80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_AAFA4C9E08A78775_OFFSET UNITYSDK_OFFSET(0x176C0B00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_ED62D92A49158885_OFFSET UNITYSDK_OFFSET(0x176B8DF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176B8DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBreakBaseDamage_TypeDefinitionIndex = 21839;

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

		static ::System::Void Method_4_AAFA4C9E08A78775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBREAKBASEDAMAGE_METHOD_4_AAFA4C9E08A78775_OFFSET))(a1, a2);
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
