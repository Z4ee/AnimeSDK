#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Editor { class SkillDecoAssetConfig; }
namespace RPG::Editor { class SkillLineAssetConfig; }
namespace RPG::Editor { class SkillPointAssetConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0xCC6F190)
#define RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0xCC6F7F0)
#define RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xCC6F080)
#define RPG_EDITOR_SKILLASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6F8F0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillAssetConfig_TypeDefinitionIndex = 48651;

	class SkillAssetConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Editor::SkillPointAssetConfig*>* SkillPointAssetConfig; // 0x10
		::System::Collections::Generic::List_1<::RPG::Editor::SkillLineAssetConfig*>* SkillLineAssetConfig; // 0x18
		::System::Collections::Generic::List_1<::RPG::Editor::SkillDecoAssetConfig*>* SkillDecoAssetConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_33ACA6CB2ABC73F7_2_OFFSET))(this);
		}
	};
}
