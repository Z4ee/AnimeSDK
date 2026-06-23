#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALKEYWORDCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x1A34DAE0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALKEYWORDCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34DCE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialKeywordCondition_TypeDefinitionIndex = 40144;

	class ConfigMaterialKeywordCondition : public ::System::Object
	{
	public:
		::System::String* Keyword; // 0x10
		::System::String* PropertyName; // 0x18
		::System::Single CompareValue; // 0x20
		::MoleMole::Config::ValueCompareType CompareType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALKEYWORDCONDITION__CTOR_OFFSET))(this);
		}

		::System::Boolean Check(::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALKEYWORDCONDITION_CHECK_OFFSET))(this, mat);
		}
	};
}
