#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class UIAdaptData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x192B5D70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_UIAdaptDataDicEntry_TypeDefinitionIndex = 87331;

	class ConfigUIAdapt_UIAdaptDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::MoleMole::UIAdaptData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
