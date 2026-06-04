#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_46A5B7F5E62E1A3C_OFFSET UNITYSDK_OFFSET(0x19538800)
#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_6D16825289398698_OFFSET UNITYSDK_OFFSET(0x19538720)
#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_7CC5F56C31F14DFD_OFFSET UNITYSDK_OFFSET(0x19538A10)
#define RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_9B22EEB1518492FA_OFFSET UNITYSDK_OFFSET(0x19538A90)
#define RPG_GAMECORE_BYCOMPARETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x195387A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTarget_TypeDefinitionIndex = 21761;

	class ByCompareTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareType; // 0x28
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6D16825289398698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_6D16825289398698_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_46A5B7F5E62E1A3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_46A5B7F5E62E1A3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7CC5F56C31F14DFD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_7CC5F56C31F14DFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B22EEB1518492FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGET_METHOD_4_9B22EEB1518492FA_OFFSET))(a1, a2);
		}
	};
}
