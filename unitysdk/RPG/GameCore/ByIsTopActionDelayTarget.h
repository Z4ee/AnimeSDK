#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_54BA36E229EA614B_OFFSET UNITYSDK_OFFSET(0x1D4F9E60)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_99438FB4E5160C76_OFFSET UNITYSDK_OFFSET(0x1D4FA090)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_D22AD126FEEC1D38_OFFSET UNITYSDK_OFFSET(0x1D4FA060)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_ED16785772BD463A_OFFSET UNITYSDK_OFFSET(0x1D4F9E20)
#define RPG_GAMECORE_BYISTOPACTIONDELAYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTopActionDelayTarget_TypeDefinitionIndex = 23050;

	class ByIsTopActionDelayTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* CompareTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* ExcludeTargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED16785772BD463A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTopActionDelayTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTopActionDelayTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_ED16785772BD463A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54BA36E229EA614B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_54BA36E229EA614B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D22AD126FEEC1D38(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_D22AD126FEEC1D38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_99438FB4E5160C76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTopActionDelayTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTopActionDelayTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTOPACTIONDELAYTARGET_METHOD_4_99438FB4E5160C76_OFFSET))(a1, a2);
		}
	};
}
