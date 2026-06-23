#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/MaterialPropertyModifierValueScreenMaskUVType.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x190D1330)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x190D1250)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x190D36C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x190D0F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x190D14D0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x190D1410)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x190D1530)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x190D23C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x190D1CD0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x190D1680)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x190D3780)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyScreenImageModifier_TypeDefinitionIndex = 48851;

	class ConfigMaterialPropertyScreenImageModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _ScreenMask; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ScreenTex; // 0x78
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType _ScreenMaskUV; // 0xA8
		::MoleMole::MaterialPropertyModifierValueBool _UseInvSecondaryEmissionMask; // 0xAB
		::MoleMole::MaterialPropertyModifierValueBool _ScreenScale; // 0xAE
		::MoleMole::MaterialPropertyModifierValueBool _MultiplySrcColor; // 0xB1
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBlendModeFx; // 0xB4
		::MoleMole::MaterialPropertyModifierValueVector _ScreenImageUvMove; // 0xBC
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0xD4
		::UnityEngine::Color _ScreenColorDefault; // 0xDC
		::MoleMole::MaterialPropertyModifierValueFloat _BlinkFrequency; // 0xEC
		::MoleMole::MaterialPropertyModifierValueColor _ScreenColor; // 0xF4
		::MoleMole::MaterialPropertyModifierValueBool _Blink; // 0x108
		::MoleMole::MaterialPropertyModifierValueBool _ScreenImage; // 0x10B
		::UnityEngine::Color _ScreenColorRef; // 0x110
		::MoleMole::MaterialPropertyModifierValueVector _BlinkOpacity; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
