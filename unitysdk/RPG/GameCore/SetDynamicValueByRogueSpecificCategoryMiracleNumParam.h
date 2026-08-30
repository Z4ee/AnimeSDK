#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_METHOD_4_81E130CF9E2EB6C9_OFFSET UNITYSDK_OFFSET(0x1E8225A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_METHOD_4_D1E306F282EEF2CD_OFFSET UNITYSDK_OFFSET(0x1E8225F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8225E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRogueSpecificCategoryMiracleNumParam_TypeDefinitionIndex = 21551;

	class SetDynamicValueByRogueSpecificCategoryMiracleNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_81E130CF9E2EB6C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_METHOD_4_81E130CF9E2EB6C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1E306F282EEF2CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRogueSpecificCategoryMiracleNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUESPECIFICCATEGORYMIRACLENUMPARAM_METHOD_4_D1E306F282EEF2CD_OFFSET))(a1, a2);
		}
	};
}
