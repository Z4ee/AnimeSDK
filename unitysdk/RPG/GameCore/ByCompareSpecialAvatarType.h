#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_810BE6FA90AF7850_OFFSET UNITYSDK_OFFSET(0x1BBBD020)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_982D4AF570171AD6_OFFSET UNITYSDK_OFFSET(0x1BBBD1F0)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_A7C81A0410E89300_OFFSET UNITYSDK_OFFSET(0x1BBBD220)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_B49F858041B8063D_OFFSET UNITYSDK_OFFSET(0x1BBBCFE0)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBD010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSpecialAvatarType_TypeDefinitionIndex = 23103;

	class ByCompareSpecialAvatarType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SpecialAvatarType CompareType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B49F858041B8063D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialAvatarType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialAvatarType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_B49F858041B8063D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_810BE6FA90AF7850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_810BE6FA90AF7850_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_982D4AF570171AD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_982D4AF570171AD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A7C81A0410E89300(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_A7C81A0410E89300_OFFSET))(a1, a2);
		}
	};
}
