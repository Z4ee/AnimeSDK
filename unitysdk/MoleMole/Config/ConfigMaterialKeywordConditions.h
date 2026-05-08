#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigMaterialKeywordCondition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALKEYWORDCONDITIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x159EFAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialKeywordConditions_TypeDefinitionIndex = 82359;

	class ConfigMaterialKeywordConditions : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigMaterialKeywordCondition*>*>* KeywordConditions; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALKEYWORDCONDITIONS__CTOR_OFFSET))(this);
		}
	};
}
