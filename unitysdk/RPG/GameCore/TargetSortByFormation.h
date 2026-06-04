#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_A86A65759F7386FA_OFFSET UNITYSDK_OFFSET(0x19D2D6C0)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_AAB2AC6C26436D04_OFFSET UNITYSDK_OFFSET(0x19D2D5B0)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_AFD721DAD19E4FF3_OFFSET UNITYSDK_OFFSET(0x19D2BCD0)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_F9DA5BC4E261A0D0_OFFSET UNITYSDK_OFFSET(0x19D1DDF0)
#define RPG_GAMECORE_TARGETSORTBYFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1DDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByFormation_TypeDefinitionIndex = 22666;

	class TargetSortByFormation : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AAB2AC6C26436D04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_AAB2AC6C26436D04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9DA5BC4E261A0D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_F9DA5BC4E261A0D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AFD721DAD19E4FF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_AFD721DAD19E4FF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A86A65759F7386FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_A86A65759F7386FA_OFFSET))(a1, a2);
		}
	};
}
