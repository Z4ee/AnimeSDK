#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_04C7107E01AF7B0E.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GETSKILLTYPEVALUES_OFFSET UNITYSDK_OFFSET(0x12C4C980)
#define MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x79C820)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneCommonSkillConfig_TypeDefinitionIndex = 43334;

	struct alignas(8) BigSceneCommonSkillConfig
	{
		::System::String* SkillTypeString; // 0x10
		::System::Int32 Priority; // 0x18

		::Enum_3_04C7107E01AF7B0E get_SkillType()
		{
			return ((::Enum_3_04C7107E01AF7B0E(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GET_SKILLTYPE_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* GetSkillTypeValues()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENECOMMONSKILLCONFIG_GETSKILLTYPEVALUES_OFFSET))();
		}
	};
}
