#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class UIAdaptData; }

#define MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x161AF2A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DefaultUIAdaptDataDicEntry_TypeDefinitionIndex = 87332;

	class ConfigUIAdapt_DefaultUIAdaptDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::Enum_3_3EDF246633A325B0, ::MoleMole::UIAdaptData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEFAULTUIADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
