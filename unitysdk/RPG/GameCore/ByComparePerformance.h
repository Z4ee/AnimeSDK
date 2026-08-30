#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_01047C2314DC0962_OFFSET UNITYSDK_OFFSET(0x1CEEE650)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_3C6032FAE9D5211A_OFFSET UNITYSDK_OFFSET(0x1CEEE7E0)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_883D5CBCEFC01EFD_OFFSET UNITYSDK_OFFSET(0x1CEEE810)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_8EADB76F7A58EC93_OFFSET UNITYSDK_OFFSET(0x1CEEE610)
#define RPG_GAMECORE_BYCOMPAREPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEE640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePerformance_TypeDefinitionIndex = 20078;

	class ByComparePerformance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* PerformanceID_DS; // 0x20
		::System::UInt32 PerformanceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8EADB76F7A58EC93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_8EADB76F7A58EC93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_01047C2314DC0962(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_01047C2314DC0962_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3C6032FAE9D5211A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_3C6032FAE9D5211A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_883D5CBCEFC01EFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePerformance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPERFORMANCE_METHOD_4_883D5CBCEFC01EFD_OFFSET))(a1, a2);
		}
	};
}
