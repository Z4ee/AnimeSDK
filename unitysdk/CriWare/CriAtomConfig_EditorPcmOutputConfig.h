#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMCONFIG_EDITORPCMOUTPUTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E830460)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_EditorPcmOutputConfig_TypeDefinitionIndex = 34354;

	class CriAtomConfig_EditorPcmOutputConfig : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Int32 bufferLength; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMCONFIG_EDITORPCMOUTPUTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
