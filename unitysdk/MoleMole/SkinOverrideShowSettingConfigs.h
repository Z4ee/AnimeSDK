#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinOverrideShowSetting; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SAVEOVERRIDESHOWSETTINGCONFIG_OFFSET UNITYSDK_OFFSET(0x1386C080)
#define MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1386C000)

namespace MoleMole
{
	inline static constexpr unsigned int SkinOverrideShowSettingConfigs_TypeDefinitionIndex = 76709;

	class SkinOverrideShowSettingConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::SkinOverrideShowSetting*>* SkinOverrideShowSettingList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS__CTOR_OFFSET))(this);
		}

		::System::Void SaveOverrideShowSettingConfig(::MoleMole::SkinOverrideShowSetting* SkinOverrideShowSetting)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkinOverrideShowSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_SKINOVERRIDESHOWSETTINGCONFIGS_SAVEOVERRIDESHOWSETTINGCONFIG_OFFSET))(this, SkinOverrideShowSetting);
		}
	};
}
