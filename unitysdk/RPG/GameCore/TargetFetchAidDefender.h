#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_484EBBE6EEB848FB_OFFSET UNITYSDK_OFFSET(0x18EE2B40)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_74792FF03F7E792D_OFFSET UNITYSDK_OFFSET(0x18EDA590)
#define RPG_GAMECORE_TARGETFETCHAIDDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDA540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAidDefender_TypeDefinitionIndex = 22999;

	class TargetFetchAidDefender : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_484EBBE6EEB848FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_484EBBE6EEB848FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_74792FF03F7E792D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAidDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDDEFENDER_METHOD_4_74792FF03F7E792D_OFFSET))(a1, a2);
		}
	};
}
