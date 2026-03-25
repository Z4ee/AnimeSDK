#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_8C035312B409C1F4_OFFSET UNITYSDK_OFFSET(0x16F25720)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_97D4663178FC5FD0_OFFSET UNITYSDK_OFFSET(0x16F25640)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID__CTOR_OFFSET UNITYSDK_OFFSET(0x16F256C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareDimensionID_TypeDefinitionIndex = 18880;

	class AdvByCompareDimensionID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int16 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_97D4663178FC5FD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareDimensionID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareDimensionID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_97D4663178FC5FD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C035312B409C1F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_METHOD_4_8C035312B409C1F4_OFFSET))(a1, a2);
		}
	};
}
