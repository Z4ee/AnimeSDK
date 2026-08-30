#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_1E716319C7E19199_OFFSET UNITYSDK_OFFSET(0x1D5B7AF0)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_9039FD7540D2EEEB_OFFSET UNITYSDK_OFFSET(0x1D5B7940)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_C03DA171E8D44708_OFFSET UNITYSDK_OFFSET(0x1D5B7980)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_C4E403C7BC6596F8_OFFSET UNITYSDK_OFFSET(0x1D5B7AC0)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByActionOrder_TypeDefinitionIndex = 23715;

	class TargetSortByActionOrder : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterNoActionEntity; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9039FD7540D2EEEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_9039FD7540D2EEEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C03DA171E8D44708(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_C03DA171E8D44708_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4E403C7BC6596F8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_C4E403C7BC6596F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E716319C7E19199(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_METHOD_3_1E716319C7E19199_OFFSET))(a1, a2);
		}
	};
}
