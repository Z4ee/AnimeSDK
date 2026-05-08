#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class GalGameFacialSetting; }
namespace MoleMole { class UIAvatarCommonLightSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14259330)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShow_TypeDefinitionIndex = 55822;

	class ConfigGalGameAvatarShow : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::UIAvatarCommonLightSetting* commonLightSetting; // 0x58
		::System::Single IntervalTimeMin; // 0x60
		::System::Single IntervalTimeMax; // 0x64
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>* avatarPoseSetting; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::GalGameFacialSetting*>* avatarFacialSetting; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOW__CTOR_OFFSET))(this);
		}
	};
}
