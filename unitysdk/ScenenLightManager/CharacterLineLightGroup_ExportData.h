#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABC0E00)

namespace ScenenLightManager
{
	inline static constexpr unsigned int CharacterLineLightGroup_ExportData_TypeDefinitionIndex = 39795;

	class CharacterLineLightGroup_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Point_PosList; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Point_DirList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Point_ColorList; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* Point_Intensity; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* Line_P1; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* Line_P2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
