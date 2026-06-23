#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_01B94E8A7E4DDFF4_4_Enum_3_88BDAA8778A9F9E6.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_ZIPLINESUBSYSTEM_TARGET_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x115A68D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x115A6A30)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_Target_TypeDefinitionIndex = 74660;

	class ZipLineSubSystem_Target : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::UnityEngine::Vector3>* Tangent; // 0x60
		::Class_0_16E4307DCC419505_165<::Class_1_01B94E8A7E4DDFF4_4_Enum_3_88BDAA8778A9F9E6>* HUDHintPointType; // 0x68
		::Class_0_16E4307DCC419505_165<::System::Single>* Distance; // 0x70
		::Class_0_16E4307DCC419505_165<::System::Single>* ProgressValue; // 0x78
		::Class_0_16E4307DCC419505_165<::System::Boolean>* HasPosition; // 0x80
		::Class_0_16E4307DCC419505_165<::UnityEngine::Vector3>* WorldPosition; // 0x88
		::Class_0_16E4307DCC419505_165<::System::String*>* TextmapKey; // 0x90

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
