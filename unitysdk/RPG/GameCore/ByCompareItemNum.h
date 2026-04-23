#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ByCompareItemPair; }

#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_71100AC1BB1B7480_OFFSET UNITYSDK_OFFSET(0x18731010)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_8C33D2099279797E_OFFSET UNITYSDK_OFFSET(0x187310E0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18731090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemNum_TypeDefinitionIndex = 20067;

	class ByCompareItemNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ByCompareItemPair*>* ItemPair; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_71100AC1BB1B7480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_71100AC1BB1B7480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C33D2099279797E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_8C33D2099279797E_OFFSET))(a1, a2);
		}
	};
}
