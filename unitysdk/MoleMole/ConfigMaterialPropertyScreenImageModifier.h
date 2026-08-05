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

#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1351B6C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_FORUSER_OFFSET UNITYSDK_OFFSET(0x1351DB10)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1351B5E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1351DA50)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_ONDONE_OFFSET UNITYSDK_OFFSET(0x1351DB80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1351B320)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1351B860)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1351B7A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1351B8C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1351C750)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1351C070)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1351BA20)
#define MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1351DC00)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyScreenImageModifier_TypeDefinitionIndex = 60594;

	class ConfigMaterialPropertyScreenImageModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _ScreenTex; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ScreenMask; // 0x78
		::UnityEngine::Color _ScreenColorDefault; // 0xA8
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapBlendModeFx; // 0xB8
		::MoleMole::MaterialPropertyModifierValueVector _BlinkOpacity; // 0xC0
		::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueScreenMaskUVType _ScreenMaskUV; // 0xD8
		::MoleMole::MaterialPropertyModifierValueBool _ScreenImage; // 0xDB
		::MoleMole::MaterialPropertyModifierValueBool _UseInvSecondaryEmissionMask; // 0xDE
		::MoleMole::MaterialPropertyModifierValueBool _Blink; // 0xE1
		::MoleMole::MaterialPropertyModifierValueBool _ScreenScale; // 0xE4
		::MoleMole::MaterialPropertyModifierValueBool _MultiplySrcColor; // 0xE7
		::MoleMole::MaterialPropertyModifierValueFloat _BlinkFrequency; // 0xEC
		::MoleMole::MaterialPropertyModifierValueVector _ScreenImageUvMove; // 0xF4
		::MoleMole::MaterialPropertyModifierValueColor _ScreenColor; // 0x10C
		::UnityEngine::Color _ScreenColorRef; // 0x120
		::MoleMole::MaterialPropertyModifierValueFloat _MatCapNormalVSpeedFx; // 0x130

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

		::System::Void DoOnEnter_ForUser(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_DOONENTER_FORUSER_OFFSET))(this, instance);
		}

		::System::Void OnDone(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYSCREENIMAGEMODIFIER_ONDONE_OFFSET))(this, instance);
		}
	};
}
