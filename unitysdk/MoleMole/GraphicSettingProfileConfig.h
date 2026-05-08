#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GeneralGraphicQualityProfile; }
namespace MoleMole { class GraphicSettingProfileBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GRAPHICSETTINGPROFILECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15428980)

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileConfig_TypeDefinitionIndex = 44009;

	class GraphicSettingProfileConfig : public ::System::Object
	{
	public:
		::MoleMole::GeneralGraphicQualityProfile* GeneralGraphicQualitySettingProfile; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GraphicSettingProfileBase*>* GraphicSettingProfileList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRAPHICSETTINGPROFILECONFIG__CTOR_OFFSET))(this);
		}
	};
}
