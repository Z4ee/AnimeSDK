#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequence_VideoItem_ComposeConfigItem.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_VIDEOITEM_COMPOSEOBJECT__AUTOSET_OFFSET UNITYSDK_OFFSET(0x174C1600)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_VIDEOITEM_COMPOSEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x174C1710)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_VideoItem_ComposeObject_TypeDefinitionIndex = 71479;

	class CameraSequence_VideoItem_ComposeObject : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeConfigItem>* composeConfigs; // 0x10
		::System::Boolean IsOpenWarmpUpMode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_VIDEOITEM_COMPOSEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void _AutoSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_VIDEOITEM_COMPOSEOBJECT__AUTOSET_OFFSET))(this);
		}
	};
}
