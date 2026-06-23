#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ConfigUIAdapt_UIAdaptDataDicEntry; }
namespace MoleMole { class UIAdaptData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x192B5D30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_UIAdaptDataDic_TypeDefinitionIndex = 87329;

	class ConfigUIAdapt_UIAdaptDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::MoleMole::UIAdaptData*, ::MoleMole::ConfigUIAdapt_UIAdaptDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_UIADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
