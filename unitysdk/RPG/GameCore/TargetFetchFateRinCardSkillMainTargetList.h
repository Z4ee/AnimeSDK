#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_041C97AC1EC4EB96_OFFSET UNITYSDK_OFFSET(0x1D0B9DC0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_2C99BBBF4E184CF6_OFFSET UNITYSDK_OFFSET(0x1D0B9D40)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_C1B2C437EDE29A83_OFFSET UNITYSDK_OFFSET(0x1D0B9DA0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_C23B9AE44009D767_OFFSET UNITYSDK_OFFSET(0x1D0B9CC0)
#define RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B9D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFateRinCardSkillMainTargetList_TypeDefinitionIndex = 23159;

	class TargetFetchFateRinCardSkillMainTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C23B9AE44009D767(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_C23B9AE44009D767_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2C99BBBF4E184CF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_2C99BBBF4E184CF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C1B2C437EDE29A83(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_C1B2C437EDE29A83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_041C97AC1EC4EB96(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFATERINCARDSKILLMAINTARGETLIST_METHOD_4_041C97AC1EC4EB96_OFFSET))(a1, a2);
		}
	};
}
