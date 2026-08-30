#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_7FB2F87850E9FDAA_OFFSET UNITYSDK_OFFSET(0x1D5B73C0)
#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_9DA5A7BC1607CDBF_OFFSET UNITYSDK_OFFSET(0x1D5B7590)
#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_E0274FACD0E66D0A_OFFSET UNITYSDK_OFFSET(0x1D5B7360)
#define RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_F6872D09E0CA7539_OFFSET UNITYSDK_OFFSET(0x1D5B7540)
#define RPG_GAMECORE_TARGETSORTBYAITAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B73B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByAITag_TypeDefinitionIndex = 23716;

	class TargetSortByAITag : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* AITagKey; // 0x10
		::System::Boolean HighestFirst; // 0x18
		::RPG::GameCore::DynamicFloat* MaxClamp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0274FACD0E66D0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_E0274FACD0E66D0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FB2F87850E9FDAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_7FB2F87850E9FDAA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6872D09E0CA7539(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_F6872D09E0CA7539_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9DA5A7BC1607CDBF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByAITag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYAITAG_METHOD_3_9DA5A7BC1607CDBF_OFFSET))(a1, a2);
		}
	};
}
