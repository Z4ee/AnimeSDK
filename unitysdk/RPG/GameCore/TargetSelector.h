#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_1A12B50C5244CFC7_OFFSET UNITYSDK_OFFSET(0x19D164C0)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_2125531B7E654E20_OFFSET UNITYSDK_OFFSET(0x19D16730)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_38016205646F6A8A_OFFSET UNITYSDK_OFFSET(0x19D16580)
#define RPG_GAMECORE_TARGETSELECTOR_METHOD_4_BBB4D4673CB8087F_OFFSET UNITYSDK_OFFSET(0x19D166C0)
#define RPG_GAMECORE_TARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19D16530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSelector_TypeDefinitionIndex = 22581;

	class TargetSelector : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::RPG::GameCore::TargetEvaluator* SuccTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* FailTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1A12B50C5244CFC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_1A12B50C5244CFC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38016205646F6A8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_38016205646F6A8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BBB4D4673CB8087F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_BBB4D4673CB8087F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2125531B7E654E20(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSelector* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSELECTOR_METHOD_4_2125531B7E654E20_OFFSET))(a1, a2);
		}
	};
}
