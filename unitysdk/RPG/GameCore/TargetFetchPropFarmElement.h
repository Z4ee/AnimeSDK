#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_6DDCAC794C8DEC47_OFFSET UNITYSDK_OFFSET(0x177B7F30)
#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_85D3CC3AE5A62EE9_OFFSET UNITYSDK_OFFSET(0x177C0030)
#define RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x177B7EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPropFarmElement_TypeDefinitionIndex = 22201;

	class TargetFetchPropFarmElement : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_85D3CC3AE5A62EE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPropFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPropFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_85D3CC3AE5A62EE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DDCAC794C8DEC47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPropFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPropFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPROPFARMELEMENT_METHOD_4_6DDCAC794C8DEC47_OFFSET))(a1, a2);
		}
	};
}
