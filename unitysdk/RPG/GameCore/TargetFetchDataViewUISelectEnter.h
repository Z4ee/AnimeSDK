#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_8B6EE849938F4D67_OFFSET UNITYSDK_OFFSET(0x18EDC970)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_D4631ADD40EC9C09_OFFSET UNITYSDK_OFFSET(0x18EE3F00)
#define RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchDataViewUISelectEnter_TypeDefinitionIndex = 22951;

	class TargetFetchDataViewUISelectEnter : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D4631ADD40EC9C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_D4631ADD40EC9C09_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B6EE849938F4D67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchDataViewUISelectEnter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchDataViewUISelectEnter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHDATAVIEWUISELECTENTER_METHOD_4_8B6EE849938F4D67_OFFSET))(a1, a2);
		}
	};
}
