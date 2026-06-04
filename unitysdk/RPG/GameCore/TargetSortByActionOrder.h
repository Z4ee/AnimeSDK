#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_85C85BA37A811515_OFFSET UNITYSDK_OFFSET(0x19D2CBE0)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_9437A23225F95DE6_OFFSET UNITYSDK_OFFSET(0x19D2B910)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_98F1F4BDE55E9EA1_OFFSET UNITYSDK_OFFSET(0x19D2CB90)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_C03DA171E8D44708_OFFSET UNITYSDK_OFFSET(0x19D1D440)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1D420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByActionOrder_TypeDefinitionIndex = 22672;

	class TargetSortByActionOrder : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterNoActionEntity; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98F1F4BDE55E9EA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_98F1F4BDE55E9EA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C03DA171E8D44708(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_C03DA171E8D44708_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9437A23225F95DE6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_9437A23225F95DE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85C85BA37A811515(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_85C85BA37A811515_OFFSET))(a1, a2);
		}
	};
}
