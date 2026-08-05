#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Project::Config { class AbyssS2AreaConfigTemplateExt; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }

#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMAREACONFIG_GETALLAREACONFIG_OFFSET UNITYSDK_OFFSET(0x856C20)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMAREACONFIG_GETALLSCENE_OFFSET UNITYSDK_OFFSET(0x16C0A5B0)
#define MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMAREACONFIG_REFRESH_OFFSET UNITYSDK_OFFSET(0x856C10)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_CustomConfig_CustomAreaConfig_TypeDefinitionIndex = 87606;

	struct alignas(8) AbyssS2_CustomConfig_CustomAreaConfig
	{
		::System::Int32 AreaID; // 0x10
		::System::Boolean isSpecifyAreaIndex; // 0x14
		::System::Int32 areaConfigIndex; // 0x18
		::MoleMole::Project::Config::AbyssS2AreaConfigTemplateExt* finalAreaConfig; // 0x20
		::Il2CppArray<::System::Int32>* suddenEventList; // 0x28
		::System::Boolean isSpecifyScene; // 0x30
		::System::Int32 sceneIndex; // 0x34
		::System::Int32 totalCount; // 0x38

		::System::Void Refresh(::System::Int64 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMAREACONFIG_REFRESH_OFFSET))(this, seed);
		}

		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* GetAllScene()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMAREACONFIG_GETALLSCENE_OFFSET))();
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>* GetAllAreaConfig()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_CUSTOMCONFIG_CUSTOMAREACONFIG_GETALLAREACONFIG_OFFSET))(this);
		}
	};
}
