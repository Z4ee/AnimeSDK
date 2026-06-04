#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_2DD9D26BC20FFE17_OFFSET UNITYSDK_OFFSET(0x1951F5C0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_58F2C6B50B8963F6_OFFSET UNITYSDK_OFFSET(0x1951F4F0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_BDA9F0FC4ED6777D_OFFSET UNITYSDK_OFFSET(0x1951F850)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_E074086A14092D80_OFFSET UNITYSDK_OFFSET(0x1951F8D0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1951F570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierCallBackDynamicValue_TypeDefinitionIndex = 21752;

	class ByCompareModifierCallBackDynamicValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ResultWhenNoValue; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_58F2C6B50B8963F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_58F2C6B50B8963F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DD9D26BC20FFE17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_2DD9D26BC20FFE17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDA9F0FC4ED6777D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_BDA9F0FC4ED6777D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E074086A14092D80(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_E074086A14092D80_OFFSET))(a1, a2);
		}
	};
}
