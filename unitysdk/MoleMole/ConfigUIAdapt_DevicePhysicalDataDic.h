#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionary_3.h"

namespace MoleMole { class ConfigUIAdapt_DevicePhysicalDataDicEntry; }
namespace MoleMole { class DevicePhysicalData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B935250)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalDataDic_TypeDefinitionIndex = 58380;

	class ConfigUIAdapt_DevicePhysicalDataDic : public ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3<::System::String*, ::MoleMole::DevicePhysicalData*, ::MoleMole::ConfigUIAdapt_DevicePhysicalDataDicEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADIC__CTOR_OFFSET))(this);
		}
	};
}
