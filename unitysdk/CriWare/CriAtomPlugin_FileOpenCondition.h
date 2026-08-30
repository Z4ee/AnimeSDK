#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANATTACHAWB_OFFSET UNITYSDK_OFFSET(0x3BC7800)
#define CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANLOADACBWITHAWB_OFFSET UNITYSDK_OFFSET(0x3BC77F0)
#define CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANLOADACB_OFFSET UNITYSDK_OFFSET(0x3BC7730)
#define CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANLOADACF_OFFSET UNITYSDK_OFFSET(0x3BC7670)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_FileOpenCondition_TypeDefinitionIndex = 38633;

	struct alignas(4) CriAtomPlugin_FileOpenCondition
	{
		::System::Int32 freeBindsCount; // 0x10
		::System::Int32 freeFilesCount; // 0x14
		::System::Int32 freeLoadersCount; // 0x18

		::System::Boolean get_CanLoadAcf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANLOADACF_OFFSET))(this);
		}

		::System::Boolean get_CanLoadAcb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANLOADACB_OFFSET))(this);
		}

		::System::Boolean get_CanLoadAcbWithAwb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANLOADACBWITHAWB_OFFSET))(this);
		}

		::System::Boolean get_CanAttachAwb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_FILEOPENCONDITION_GET_CANATTACHAWB_OFFSET))(this);
		}
	};
}
