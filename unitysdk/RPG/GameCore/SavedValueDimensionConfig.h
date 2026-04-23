#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG_METHOD_2_E3A81CECF017F530_OFFSET UNITYSDK_OFFSET(0x18DFD510)
#define RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFD6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SavedValueDimensionConfig_TypeDefinitionIndex = 16454;

	class SavedValueDimensionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsExclusiveSaved; // 0x10
		::System::Boolean IsNeedMergeBack; // 0x11
		::System::UInt32 RelatedContentID; // 0x14
		::System::UInt32 RelatedContentDimensionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E3A81CECF017F530(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SavedValueDimensionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SavedValueDimensionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEDVALUEDIMENSIONCONFIG_METHOD_2_E3A81CECF017F530_OFFSET))(a1, a2);
		}
	};
}
