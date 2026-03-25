#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_BB0BA6736A0EBA99_OFFSET UNITYSDK_OFFSET(0x177D3700)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_DDE2CB29F81543E0_OFFSET UNITYSDK_OFFSET(0x177D1EB0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x177D1E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByModifierStatusCount_TypeDefinitionIndex = 22262;

	class TargetSortByModifierStatusCount : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::RPG::GameCore::EnumStatusType BuffStatus; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB0BA6736A0EBA99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierStatusCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierStatusCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_BB0BA6736A0EBA99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDE2CB29F81543E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_METHOD_3_DDE2CB29F81543E0_OFFSET))(a1, a2);
		}
	};
}
