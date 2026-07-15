#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_1F203757D9A77A6F_OFFSET UNITYSDK_OFFSET(0x19CFB840)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_23D18E8149B1D2C5_OFFSET UNITYSDK_OFFSET(0x19CFB5A0)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_4859A6FC96774BA0_OFFSET UNITYSDK_OFFSET(0x19CFB5F0)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_AED53185962B1748_OFFSET UNITYSDK_OFFSET(0x19CFB800)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFB5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareParamString_TypeDefinitionIndex = 22694;

	class ByCompareParamString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CompareValue; // 0x20
		::System::Boolean IgnoreCase; // 0x28
		::System::Int32 ParamIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_23D18E8149B1D2C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_23D18E8149B1D2C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4859A6FC96774BA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_4859A6FC96774BA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AED53185962B1748(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_AED53185962B1748_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F203757D9A77A6F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_1F203757D9A77A6F_OFFSET))(a1, a2);
		}
	};
}
