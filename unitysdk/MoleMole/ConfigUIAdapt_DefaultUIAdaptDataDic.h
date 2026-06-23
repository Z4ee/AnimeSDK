#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ConfigUIAdapt_DefaultUIAdaptDataDicEntry; }
namespace MoleMole { class UIAdaptData; }

#define MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x115F2810)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DefaultUIAdaptDataDic_TypeDefinitionIndex = 87325;

	class ConfigUIAdapt_DefaultUIAdaptDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::Enum_3_3EDF246633A325B0, ::MoleMole::UIAdaptData*, ::MoleMole::ConfigUIAdapt_DefaultUIAdaptDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
