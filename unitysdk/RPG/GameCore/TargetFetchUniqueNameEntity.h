#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_92626796BD6B8D53_OFFSET UNITYSDK_OFFSET(0x1E1B7DB0)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_C087B29B69EADFEC_OFFSET UNITYSDK_OFFSET(0x1E1B7F10)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_CAECCF00305CA616_OFFSET UNITYSDK_OFFSET(0x1E1B7E70)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_F1E403B4188644C3_OFFSET UNITYSDK_OFFSET(0x1E1B7F40)
#define RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchUniqueNameEntity_TypeDefinitionIndex = 23658;

	class TargetFetchUniqueNameEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* UniqueName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_92626796BD6B8D53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUniqueNameEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_92626796BD6B8D53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CAECCF00305CA616(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_CAECCF00305CA616_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C087B29B69EADFEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_C087B29B69EADFEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F1E403B4188644C3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUniqueNameEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUniqueNameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNIQUENAMEENTITY_METHOD_4_F1E403B4188644C3_OFFSET))(a1, a2);
		}
	};
}
