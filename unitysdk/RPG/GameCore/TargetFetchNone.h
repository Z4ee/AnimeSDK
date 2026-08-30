#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_711701FB1A812323_OFFSET UNITYSDK_OFFSET(0x1D5ACAE0)
#define RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_864F9FA1E87D71A7_OFFSET UNITYSDK_OFFSET(0x1D5ACBC0)
#define RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_B5E3E3391D7DBBA2_OFFSET UNITYSDK_OFFSET(0x1D5ACB60)
#define RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_B8E6C682138E53DA_OFFSET UNITYSDK_OFFSET(0x1D5ACBE0)
#define RPG_GAMECORE_TARGETFETCHNONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ACB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNone_TypeDefinitionIndex = 23634;

	class TargetFetchNone : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_711701FB1A812323(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_711701FB1A812323_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5E3E3391D7DBBA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_B5E3E3391D7DBBA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_864F9FA1E87D71A7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_864F9FA1E87D71A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8E6C682138E53DA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNONE_METHOD_4_B8E6C682138E53DA_OFFSET))(a1, a2);
		}
	};
}
