#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_CLASS_1_3E05A2677F6F2423_9_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16292050)
#define MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_CLASS_1_3E05A2677F6F2423_9__CTOR_OFFSET UNITYSDK_OFFSET(0x16292040)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int NapVirtual3DActionCamera_1_Class_1_3E05A2677F6F2423_9_TypeDefinitionIndex = 80309;

	class NapVirtual3DActionCamera_1_Class_1_3E05A2677F6F2423_9 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_CLASS_1_3E05A2677F6F2423_9__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_FF7B2911BBACA4A9()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_NAPVIRTUAL3DACTIONCAMERA_1_CLASS_1_3E05A2677F6F2423_9_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
		}
	};
}
