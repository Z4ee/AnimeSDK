#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_103A45A504D4ED46_OFFSET UNITYSDK_OFFSET(0x19CFBF70)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_7643028A92E5A323_OFFSET UNITYSDK_OFFSET(0x19CFBF20)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_8F327415858E3EA9_OFFSET UNITYSDK_OFFSET(0x19CFC200)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_C416AF448AE0A636_OFFSET UNITYSDK_OFFSET(0x19CFC1C0)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFBF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareParamValue_TypeDefinitionIndex = 22693;

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

		static ::System::Void Method_4_7643028A92E5A323(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_7643028A92E5A323_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_103A45A504D4ED46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_103A45A504D4ED46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C416AF448AE0A636(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_C416AF448AE0A636_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F327415858E3EA9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_8F327415858E3EA9_OFFSET))(a1, a2);
		}
	};
}
