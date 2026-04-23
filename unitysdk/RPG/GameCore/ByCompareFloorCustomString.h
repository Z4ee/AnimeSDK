#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_8545FD24898AE274_OFFSET UNITYSDK_OFFSET(0x1872D440)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_F6CA23B0A39C15C6_OFFSET UNITYSDK_OFFSET(0x1872D360)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1872D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomString_TypeDefinitionIndex = 19670;

	class ByCompareFloorCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::RPG::GameCore::DynamicString* Name; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicString* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F6CA23B0A39C15C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_F6CA23B0A39C15C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8545FD24898AE274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMSTRING_METHOD_4_8545FD24898AE274_OFFSET))(a1, a2);
		}
	};
}
