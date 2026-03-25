#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_12AA02846034D02B_OFFSET UNITYSDK_OFFSET(0x177C0180)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_AA68E72878A0F3DD_OFFSET UNITYSDK_OFFSET(0x177B8200)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177B81B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchRogueMagicScepterList_TypeDefinitionIndex = 22288;

	class TargetFetchRogueMagicScepterList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_12AA02846034D02B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_12AA02846034D02B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA68E72878A0F3DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_AA68E72878A0F3DD_OFFSET))(a1, a2);
		}
	};
}
