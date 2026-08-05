#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DataStructures/Lists/EasySerializeDictionaryEntry_2.h"

namespace MoleMole { class DeviceAdaptData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C486470)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAdapt_DeviceAdaptDataDicEntry_TypeDefinitionIndex = 58376;

	class ConfigUIAdapt_DeviceAdaptDataDicEntry : public ::MoleMole::DataStructures::Lists::EasySerializeDictionaryEntry_2<::System::String*, ::MoleMole::DeviceAdaptData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIADAPT_DEVICEADAPTDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
