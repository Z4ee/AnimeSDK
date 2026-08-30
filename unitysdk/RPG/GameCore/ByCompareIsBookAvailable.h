#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_A7377757C6E3A954_OFFSET UNITYSDK_OFFSET(0x1CECE0D0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_A93E3B04E85C3E99_OFFSET UNITYSDK_OFFSET(0x1CECDF20)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_AC1D1A5D024730FB_OFFSET UNITYSDK_OFFSET(0x1CECE100)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_E909527645E4B6EC_OFFSET UNITYSDK_OFFSET(0x1CECDEE0)
#define RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECDF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsBookAvailable_TypeDefinitionIndex = 20644;

	class ByCompareIsBookAvailable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 BookSeriesID; // 0x20
		::System::UInt32 BookID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E909527645E4B6EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsBookAvailable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsBookAvailable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_E909527645E4B6EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A93E3B04E85C3E99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_A93E3B04E85C3E99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A7377757C6E3A954(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_A7377757C6E3A954_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC1D1A5D024730FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsBookAvailable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsBookAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISBOOKAVAILABLE_METHOD_4_AC1D1A5D024730FB_OFFSET))(a1, a2);
		}
	};
}
