#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIMANACONFIG_WEBGLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16505720)

namespace CriWare
{
	inline static constexpr unsigned int CriManaConfig_WebGLConfig_TypeDefinitionIndex = 38876;

	class CriManaConfig_WebGLConfig : public ::System::Object
	{
	public:
		::System::String* webworkerPath; // 0x10
		::System::Int32 heapSize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG_WEBGLCONFIG__CTOR_OFFSET))(this);
		}
	};
}
