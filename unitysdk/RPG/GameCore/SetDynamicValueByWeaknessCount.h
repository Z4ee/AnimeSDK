#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C5F3E20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_METHOD_4_02282635974001D9_OFFSET UNITYSDK_OFFSET(0x1C5F3B50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_METHOD_4_0F94C1F7F2903547_OFFSET UNITYSDK_OFFSET(0x1C5F3B90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F3B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWeaknessCount_TypeDefinitionIndex = 22289;

	class SetDynamicValueByWeaknessCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* WriteTargetType; // 0x30
		::System::Boolean OnlyDefault; // 0x38
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_02282635974001D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWeaknessCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWeaknessCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_METHOD_4_02282635974001D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F94C1F7F2903547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWeaknessCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWeaknessCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_METHOD_4_0F94C1F7F2903547_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESSCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
