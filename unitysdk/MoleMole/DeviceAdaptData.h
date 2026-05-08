#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define MOLEMOLE_DEVICEADAPTDATA_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x16B61DC0)
#define MOLEMOLE_DEVICEADAPTDATA_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x16B61D30)
#define MOLEMOLE_DEVICEADAPTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B61CE0)

namespace MoleMole
{
	inline static constexpr unsigned int DeviceAdaptData_TypeDefinitionIndex = 63609;

	class DeviceAdaptData : public ::System::Object
	{
	public:
		::System::Single dpi; // 0x10
		::System::Int32 height; // 0x14
		::System::Int32 width; // 0x18
		::Il2CppArray<::UnityEngine::Rect>* cutoutsLeft; // 0x20
		::Il2CppArray<::UnityEngine::Rect>* cutoutsRight; // 0x28
		::UnityEngine::Rect safeAreaLeft; // 0x30
		::UnityEngine::Rect safeAreaRight; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICEADAPTDATA__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICEADAPTDATA_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Single Method_1_D64FD9A228A1C4E0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEVICEADAPTDATA_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
		}
	};
}
