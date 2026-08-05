#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_01B94E8A7E4DDFF4_Enum_3_88BDAA8778A9F9E6.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_ZIPLINESUBSYSTEM_TARGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1166AEE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1166B050)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_Target_TypeDefinitionIndex = 63899;

	class ZipLineSubSystem_Target : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::Class_1_01B94E8A7E4DDFF4_Enum_3_88BDAA8778A9F9E6>* HUDHintPointType; // 0x80
		::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>* WorldPosition; // 0x88
		::Class_0_16E4307DCC419505_159<::System::Boolean>* HasPosition; // 0x90
		::Class_0_16E4307DCC419505_159<::System::Single>* ProgressValue; // 0x98
		::Class_0_16E4307DCC419505_159<::System::Single>* Distance; // 0xA0
		::Class_0_16E4307DCC419505_159<::UnityEngine::Vector3>* Tangent; // 0xA8
		::Class_0_16E4307DCC419505_159<::System::String*>* TextmapKey; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TARGET_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
