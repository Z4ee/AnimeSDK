#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_3A5780EEE44EA35C_OFFSET UNITYSDK_OFFSET(0x1D5B9220)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_66FE2EB76E8CA185_OFFSET UNITYSDK_OFFSET(0x1D5B91F0)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_AACF2D114A956B8D_OFFSET UNITYSDK_OFFSET(0x1D5B9050)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_F9DA5BC4E261A0D0_OFFSET UNITYSDK_OFFSET(0x1D5B9130)
#define RPG_GAMECORE_TARGETSORTBYFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B9120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByFormation_TypeDefinitionIndex = 23709;

	class TargetSortByFormation : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AACF2D114A956B8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_AACF2D114A956B8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F9DA5BC4E261A0D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_F9DA5BC4E261A0D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66FE2EB76E8CA185(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_66FE2EB76E8CA185_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A5780EEE44EA35C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_METHOD_3_3A5780EEE44EA35C_OFFSET))(a1, a2);
		}
	};
}
