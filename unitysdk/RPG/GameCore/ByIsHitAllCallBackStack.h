#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_1E40B02EFE1CEA5B_OFFSET UNITYSDK_OFFSET(0x1CF3D4E0)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_66B03D53B144D81A_OFFSET UNITYSDK_OFFSET(0x1CF3D360)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_7BDE0E64C039ABCE_OFFSET UNITYSDK_OFFSET(0x1CF3D510)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_A1BEE485FBBE7801_OFFSET UNITYSDK_OFFSET(0x1CF3D3A0)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3D390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHitAllCallBackStack_TypeDefinitionIndex = 23233;

	class ByIsHitAllCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_66B03D53B144D81A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_66B03D53B144D81A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1BEE485FBBE7801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_A1BEE485FBBE7801_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E40B02EFE1CEA5B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_1E40B02EFE1CEA5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7BDE0E64C039ABCE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_METHOD_4_7BDE0E64C039ABCE_OFFSET))(a1, a2);
		}
	};
}
