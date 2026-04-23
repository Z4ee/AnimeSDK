#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_4859B7814DC3AC38_OFFSET UNITYSDK_OFFSET(0x1873C030)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_810BE6FA90AF7850_OFFSET UNITYSDK_OFFSET(0x1873C100)
#define RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1873C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSpecialAvatarType_TypeDefinitionIndex = 22336;

	class ByCompareSpecialAvatarType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::SpecialAvatarType CompareType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4859B7814DC3AC38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialAvatarType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialAvatarType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_4859B7814DC3AC38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_810BE6FA90AF7850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSpecialAvatarType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSpecialAvatarType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESPECIALAVATARTYPE_METHOD_4_810BE6FA90AF7850_OFFSET))(a1, a2);
		}
	};
}
