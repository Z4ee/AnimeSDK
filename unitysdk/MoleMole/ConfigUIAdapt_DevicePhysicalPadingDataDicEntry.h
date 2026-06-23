#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class DevicePhysicalPadingData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x157D7A10)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DevicePhysicalPadingDataDicEntry_TypeDefinitionIndex = 87327;

	class ConfigUIAdapt_DevicePhysicalPadingDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::MoleMole::DevicePhysicalPadingData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEPHYSICALPADINGDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
