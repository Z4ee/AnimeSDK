#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class DevicePhysicalData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94DE70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalDataDicEntry_TypeDefinitionIndex = 58375;

	class ConfigUIAdapt_DevicePhysicalDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::MoleMole::DevicePhysicalData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
