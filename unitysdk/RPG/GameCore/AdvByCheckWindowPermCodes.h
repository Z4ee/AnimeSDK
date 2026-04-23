#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_370DCC57ECA7694A_OFFSET UNITYSDK_OFFSET(0x186471B0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_CEB3F36967968EA1_OFFSET UNITYSDK_OFFSET(0x18647280)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES__CTOR_OFFSET UNITYSDK_OFFSET(0x18647230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckWindowPermCodes_TypeDefinitionIndex = 20263;

	class AdvByCheckWindowPermCodes : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::Il2CppArray<::System::Int32>* PermCodes; // 0x30
		::Il2CppArray<::System::Boolean>* MatchMask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_370DCC57ECA7694A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_370DCC57ECA7694A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CEB3F36967968EA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_CEB3F36967968EA1_OFFSET))(a1, a2);
		}
	};
}
