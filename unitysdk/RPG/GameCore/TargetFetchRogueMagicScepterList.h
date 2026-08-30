#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_00CE453D8B0887F8_OFFSET UNITYSDK_OFFSET(0x1D5AE140)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_AA68E72878A0F3DD_OFFSET UNITYSDK_OFFSET(0x1D5AE1C0)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_C6101C684AD1B2FD_OFFSET UNITYSDK_OFFSET(0x1D5AE240)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_FEA335A5EDF520F0_OFFSET UNITYSDK_OFFSET(0x1D5AE220)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchRogueMagicScepterList_TypeDefinitionIndex = 23742;

	class TargetFetchRogueMagicScepterList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_00CE453D8B0887F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_00CE453D8B0887F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA68E72878A0F3DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_AA68E72878A0F3DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEA335A5EDF520F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_FEA335A5EDF520F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6101C684AD1B2FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_C6101C684AD1B2FD_OFFSET))(a1, a2);
		}
	};
}
