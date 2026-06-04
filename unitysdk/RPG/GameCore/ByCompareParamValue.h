#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_103A45A504D4ED46_OFFSET UNITYSDK_OFFSET(0x19525AA0)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_25EADCE4363C9E04_OFFSET UNITYSDK_OFFSET(0x195259C0)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_2AF27C97C34FC0F7_OFFSET UNITYSDK_OFFSET(0x19525CF0)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_33189BC9A6A9DA9E_OFFSET UNITYSDK_OFFSET(0x19525D70)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19525A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareParamValue_TypeDefinitionIndex = 22252;

	class ByCompareParamValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Int32 ParamIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_25EADCE4363C9E04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_25EADCE4363C9E04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_103A45A504D4ED46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_103A45A504D4ED46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2AF27C97C34FC0F7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_2AF27C97C34FC0F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33189BC9A6A9DA9E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_33189BC9A6A9DA9E_OFFSET))(a1, a2);
		}
	};
}
