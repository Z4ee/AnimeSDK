#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_63CC97329D3E7286_OFFSET UNITYSDK_OFFSET(0x1700D050)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_BA9AF0E80BB03F6B_OFFSET UNITYSDK_OFFSET(0x1700CF70)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1700CFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemNumber_TypeDefinitionIndex = 19116;

	class ByCompareItemNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ItemID; // 0x20
		::RPG::GameCore::DynamicFloat* Number; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BA9AF0E80BB03F6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNumber*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNumber*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_BA9AF0E80BB03F6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_63CC97329D3E7286(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_METHOD_4_63CC97329D3E7286_OFFSET))(a1, a2);
		}
	};
}
