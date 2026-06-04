#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_1F12AABEE37CC8D6_OFFSET UNITYSDK_OFFSET(0x1950CE00)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_211C2282FC9A9CFB_OFFSET UNITYSDK_OFFSET(0x1950CD30)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_373FC891F3DAE013_OFFSET UNITYSDK_OFFSET(0x1950D020)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_3AEF85BDB844CF72_OFFSET UNITYSDK_OFFSET(0x1950D0A0)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1950CDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCustomString_TypeDefinitionIndex = 22496;

	class ByCompareCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::RPG::GameCore::DynamicString* LeftValue; // 0x28
		::RPG::GameCore::DynamicString* RightValue; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_211C2282FC9A9CFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_211C2282FC9A9CFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F12AABEE37CC8D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_1F12AABEE37CC8D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_373FC891F3DAE013(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_373FC891F3DAE013_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3AEF85BDB844CF72(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_METHOD_4_3AEF85BDB844CF72_OFFSET))(a1, a2);
		}
	};
}
