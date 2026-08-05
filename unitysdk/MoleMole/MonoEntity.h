#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AA0F16CC1EE19976.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

#define MOLEMOLE_MONOENTITY_GET_SUBTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x191A9E60)
#define MOLEMOLE_MONOENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x191A9F80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntity_TypeDefinitionIndex = 54813;

	class MonoEntity : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::Enum_3_AA0F16CC1EE19976 Type; // 0x28
		::System::Int32 TemplateID; // 0x2C
		::System::Int32 AIID; // 0x30
		::MoleMole::Config::CampType campType; // 0x34
		::System::Int32 Field_7_6; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubTemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITY_GET_SUBTEMPLATEID_OFFSET))(this);
		}
	};
}
