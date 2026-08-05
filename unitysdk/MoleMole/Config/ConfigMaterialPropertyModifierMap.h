#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54ED50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifierMap_TypeDefinitionIndex = 57730;

	class ConfigMaterialPropertyModifierMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>* materialPropertyModifierDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>* curveGroupDict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP__CTOR_OFFSET))(this);
		}
	};
}
