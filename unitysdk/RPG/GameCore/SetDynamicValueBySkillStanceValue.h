#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E8235C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_METHOD_4_16944F0D98EABC72_OFFSET UNITYSDK_OFFSET(0x1E8232D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_METHOD_4_356BCD520E1AECA3_OFFSET UNITYSDK_OFFSET(0x1E823310)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E823300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBySkillStanceValue_TypeDefinitionIndex = 22519;

	class SetDynamicValueBySkillStanceValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillTarget; // 0x18
		::System::String* SkillName; // 0x20
		::System::String* KeyOfStanceAll; // 0x28
		::System::String* KeyOfStanceOne; // 0x30
		::System::String* KeyOfStanceSpread; // 0x38
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x40
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16944F0D98EABC72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_METHOD_4_16944F0D98EABC72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_356BCD520E1AECA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBySkillStanceValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBySkillStanceValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_METHOD_4_356BCD520E1AECA3_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSKILLSTANCEVALUE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
