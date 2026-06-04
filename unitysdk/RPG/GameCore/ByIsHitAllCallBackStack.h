#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_0DE4EE3F277B4BAB_OFFSET UNITYSDK_OFFSET(0x19565180)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_A1BEE485FBBE7801_OFFSET UNITYSDK_OFFSET(0x19565250)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_DBEF398311E0ED7A_OFFSET UNITYSDK_OFFSET(0x19565410)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_FEFB09D281EBD862_OFFSET UNITYSDK_OFFSET(0x19565390)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19565200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHitAllCallBackStack_TypeDefinitionIndex = 22218;

	class ByIsHitAllCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0DE4EE3F277B4BAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_0DE4EE3F277B4BAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1BEE485FBBE7801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_A1BEE485FBBE7801_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEFB09D281EBD862(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_FEFB09D281EBD862_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DBEF398311E0ED7A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_DBEF398311E0ED7A_OFFSET))(a1, a2);
		}
	};
}
