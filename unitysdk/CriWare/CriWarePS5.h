#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREPS5_SETUPFILESYSTEM_OFFSET UNITYSDK_OFFSET(0x1BE797A0)
#define CRIWARE_CRIWAREPS5__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE797B0)

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_TypeDefinitionIndex = 37768;

	class CriWarePS5 : public ::System::Object
	{
	public:
		// static const ::System::Int32 SystemUserID = 0xFF; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS5__CTOR_OFFSET))(this);
		}

		static ::System::Void SetupFileSystem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREPS5_SETUPFILESYSTEM_OFFSET))(a1);
		}
	};
}
