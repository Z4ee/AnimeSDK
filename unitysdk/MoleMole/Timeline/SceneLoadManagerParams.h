#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x1973A4A0)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1973A650)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1973A610)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1973A490)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneLoadManagerParams_TypeDefinitionIndex = 57086;

	class SceneLoadManagerParams : public ::System::Object
	{
	public:
		::System::Boolean LoadSmallObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B9A97467188E4B69()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_B9A97467188E4B69_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
