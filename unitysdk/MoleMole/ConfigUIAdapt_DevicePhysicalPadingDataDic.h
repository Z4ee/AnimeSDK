#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ConfigUIAdapt_DevicePhysicalPadingDataDicEntry; }
namespace MoleMole { class DevicePhysicalPadingData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94DE90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalPadingDataDic_TypeDefinitionIndex = 58379;

	class ConfigUIAdapt_DevicePhysicalPadingDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::MoleMole::DevicePhysicalPadingData*, ::MoleMole::ConfigUIAdapt_DevicePhysicalPadingDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADIC__CTOR_OFFSET))(this);
		}
	};
}
