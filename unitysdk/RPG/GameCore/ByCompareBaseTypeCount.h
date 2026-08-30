#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_4E1DC7F86DB0C326_OFFSET UNITYSDK_OFFSET(0x1C30A770)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_5302C01C8526E668_OFFSET UNITYSDK_OFFSET(0x1C30A730)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F095EC5EC6008739_OFFSET UNITYSDK_OFFSET(0x1C30A470)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F7669BE828D95386_OFFSET UNITYSDK_OFFSET(0x1C30A4C0)
#define RPG_GAMECORE_BYCOMPAREBASETYPECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C30A4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBaseTypeCount_TypeDefinitionIndex = 23319;

	class ByCompareBaseTypeCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F095EC5EC6008739(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F095EC5EC6008739_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7669BE828D95386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_F7669BE828D95386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5302C01C8526E668(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_5302C01C8526E668_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E1DC7F86DB0C326(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBASETYPECOUNT_METHOD_4_4E1DC7F86DB0C326_OFFSET))(a1, a2);
		}
	};
}
