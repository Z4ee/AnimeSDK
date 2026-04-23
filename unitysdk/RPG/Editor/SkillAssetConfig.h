#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Editor { class SkillDecoAssetConfig; }
namespace RPG::Editor { class SkillLineAssetConfig; }
namespace RPG::Editor { class SkillPointAssetConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_1B167429A8B82AD3_1_OFFSET UNITYSDK_OFFSET(0xB508A00)
#define RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xB5083C0)
#define RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xB508470)
#define RPG_EDITOR_SKILLASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB508AA0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillAssetConfig_TypeDefinitionIndex = 48033;

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

		::System::Void Method_1_1B167429A8B82AD3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_1B167429A8B82AD3_OFFSET))(this);
		}

		::System::Void Method_1_5FBAD89A54D9F070()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_5FBAD89A54D9F070_OFFSET))(this);
		}

		::System::Void Method_1_1B167429A8B82AD3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLASSETCONFIG_METHOD_1_1B167429A8B82AD3_1_OFFSET))(this);
		}
	};
}
