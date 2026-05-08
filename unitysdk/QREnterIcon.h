#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_7B15B3118FE590CD_6_Class_2_FCBF41D0BBD215F7;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define QRENTERICON_INITBUTTONTIPS_OFFSET UNITYSDK_OFFSET(0x9460E0)
#define QRENTERICON_ONENTERAPPICON_OFFSET UNITYSDK_OFFSET(0x9460F0)
#define QRENTERICON_ONEXITAPPICON_OFFSET UNITYSDK_OFFSET(0x946100)

inline static constexpr unsigned int QREnterIcon_TypeDefinitionIndex = 39971;

struct alignas(8) QREnterIcon
{
	::Class_2_7B15B3118FE590CD_6_Class_2_FCBF41D0BBD215F7* appIconView; // 0x10
	::UnityEngine::GameObject* iconGameObject; // 0x18
	::System::Boolean isCreated; // 0x20
	::System::String* tipText; // 0x28

	::System::Void InitButtonTips()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QRENTERICON_INITBUTTONTIPS_OFFSET))(this);
	}

	::System::Void OnEnterAppIcon()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QRENTERICON_ONENTERAPPICON_OFFSET))(this);
	}

	::System::Void OnExitAppIcon()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QRENTERICON_ONEXITAPPICON_OFFSET))(this);
	}
};
