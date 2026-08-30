#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_6DDCAC794C8DEC47_OFFSET UNITYSDK_OFFSET(0x1E1B67A0)
#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_921AEF3DBA42C697_OFFSET UNITYSDK_OFFSET(0x1E1B6840)
#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_9911E44B78473C53_OFFSET UNITYSDK_OFFSET(0x1E1B6800)
#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_CF603051054A9AD6_OFFSET UNITYSDK_OFFSET(0x1E1B6700)
#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPropFarmElement_TypeDefinitionIndex = 23649;

	class TargetFetchPropFarmElement : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CF603051054A9AD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPropFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPropFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_CF603051054A9AD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DDCAC794C8DEC47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPropFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_6DDCAC794C8DEC47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9911E44B78473C53(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_9911E44B78473C53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_921AEF3DBA42C697(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPropFarmElement* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_921AEF3DBA42C697_OFFSET))(a1, a2);
		}
	};
}
