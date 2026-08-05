#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AnimStatic_TagGroup.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CAMERAMODULEAVATARANIMSTATEDATA_LERP_OFFSET UNITYSDK_OFFSET(0x16C23190)
#define MOLEMOLE_CAMERAMODULEAVATARANIMSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C231F0)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleAvatarAnimStateData_TypeDefinitionIndex = 48917;

	class CameraModuleAvatarAnimStateData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* RATIO_CAMERA_STATE; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::AnimStatic_TagGroup, ::System::Single>* RATIO_CAMERA_TAG; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEAVATARANIMSTATEDATA__CTOR_OFFSET))(this);
		}

		static ::MoleMole::CameraModuleAvatarAnimStateData* Lerp(::MoleMole::CameraModuleAvatarAnimStateData* a, ::MoleMole::CameraModuleAvatarAnimStateData* b, ::System::Single t)
		{
			return ((::MoleMole::CameraModuleAvatarAnimStateData*(*)(::MoleMole::CameraModuleAvatarAnimStateData*, ::MoleMole::CameraModuleAvatarAnimStateData*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEAVATARANIMSTATEDATA_LERP_OFFSET))(a, b, t);
		}
	};
}
