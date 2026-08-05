#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5C6B7155F87FB8F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GETSKILLTYPEVALUES_OFFSET UNITYSDK_OFFSET(0x11449DF0)
#define MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x7306D0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneCommonSkillConfig_TypeDefinitionIndex = 56642;

	struct alignas(8) BigSceneCommonSkillConfig
	{
		::System::String* SkillTypeString; // 0x10
		::System::Int32 Priority; // 0x18

		::Enum_3_D5C6B7155F87FB8F get_SkillType()
		{
			return ((::Enum_3_D5C6B7155F87FB8F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GET_SKILLTYPE_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* GetSkillTypeValues()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GETSKILLTYPEVALUES_OFFSET))();
		}
	};
}
