#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_4859A6FC96774BA0_OFFSET UNITYSDK_OFFSET(0x19525440)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_6573A3E7F32FC919_OFFSET UNITYSDK_OFFSET(0x19525360)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_6D39CE2AC9039265_OFFSET UNITYSDK_OFFSET(0x19525650)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_FD8513C55515EBC8_OFFSET UNITYSDK_OFFSET(0x195256D0)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x195253E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareParamString_TypeDefinitionIndex = 22253;

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

		static ::System::Void Method_4_6573A3E7F32FC919(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_6573A3E7F32FC919_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4859A6FC96774BA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_4859A6FC96774BA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D39CE2AC9039265(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_6D39CE2AC9039265_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FD8513C55515EBC8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_METHOD_4_FD8513C55515EBC8_OFFSET))(a1, a2);
		}
	};
}
