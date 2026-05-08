#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ConfigUIAdapt_DeviceAdaptDataDicEntry; }
namespace MoleMole { class DeviceAdaptData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x181F0650)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DeviceAdaptDataDic_TypeDefinitionIndex = 75582;

	class ConfigUIAdapt_DeviceAdaptDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::MoleMole::DeviceAdaptData*, ::MoleMole::ConfigUIAdapt_DeviceAdaptDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
