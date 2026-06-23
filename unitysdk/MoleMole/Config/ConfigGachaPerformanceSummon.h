#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESUMMON__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D099A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSummon_TypeDefinitionIndex = 45820;

	struct alignas(8) ConfigGachaPerformanceSummon
	{
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::EntityType>** StaticGet_OnUIEntityTypeDropDown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigGachaPerformanceSummon_TypeDefinitionIndex)->GetStaticField(0x46520);
		}
		::MoleMole::Config::EntityType UIEntityType; // 0x10
		::System::Int32 CharacterTemplateID; // 0x14
		::UnityEngine::Vector3 BornPos; // 0x18
		::System::String* BornTrigger; // 0x28
		::System::Boolean ApplyMasterAnimationDelay; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESUMMON__CCTOR_OFFSET))();
		}
	};
}
