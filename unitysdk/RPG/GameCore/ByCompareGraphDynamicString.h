#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_19AA049BF7E0F882_OFFSET UNITYSDK_OFFSET(0x19515630)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_1F375432E521458A_OFFSET UNITYSDK_OFFSET(0x19515560)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_8AAB30FEDC06E959_OFFSET UNITYSDK_OFFSET(0x195157D0)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_FB082B263D0B4474_OFFSET UNITYSDK_OFFSET(0x19515850)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x195155E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGraphDynamicString_TypeDefinitionIndex = 19569;

	class ByCompareGraphDynamicString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1F375432E521458A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_1F375432E521458A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_19AA049BF7E0F882(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_19AA049BF7E0F882_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8AAB30FEDC06E959(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_8AAB30FEDC06E959_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FB082B263D0B4474(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICSTRING_METHOD_4_FB082B263D0B4474_OFFSET))(a1, a2);
		}
	};
}
