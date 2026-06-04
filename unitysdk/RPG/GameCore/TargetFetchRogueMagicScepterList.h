#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_12AA02846034D02B_OFFSET UNITYSDK_OFFSET(0x19D0EA40)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_83426EB202F9380D_OFFSET UNITYSDK_OFFSET(0x19D070B0)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_AA68E72878A0F3DD_OFFSET UNITYSDK_OFFSET(0x19CFBF30)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_C6101C684AD1B2FD_OFFSET UNITYSDK_OFFSET(0x19D0EB00)
#define RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19CFBEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchRogueMagicScepterList_TypeDefinitionIndex = 22695;

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

		static ::System::Void Method_4_83426EB202F9380D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_83426EB202F9380D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6101C684AD1B2FD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchRogueMagicScepterList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchRogueMagicScepterList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHROGUEMAGICSCEPTERLIST_METHOD_4_C6101C684AD1B2FD_OFFSET))(a1, a2);
		}
	};
}
